using System;
using System.Globalization;
using System.Net.Http;
using System.Text.RegularExpressions;
using AppKit;

namespace TP3
{
    public static class ActualWeather
    {
        public static async void GetInfo(string city, NSTextFieldCell actualTemp,  NSTextField description,NSTextField pressure,
            NSTextField pressureInterpretation,NSTextField windSpeed, NSTextField windSpeedInterpretation, 
            NSTextField sunriseTime, NSTextField sunsetTime, NSTextField errorCity)
        {
            try
            {
                // API calling for Actual Weather
                var todayWeather =
                    await Http.RetrieveTodayWeather(
                        $"https://api.openweathermap.org/data/2.5/weather?q={city}&units=metric&appid=8e014226e54b820df5acf0071d7e889b");
                
                // Actual Temperature
                actualTemp.StringValue = (int)todayWeather.main.temp + "°";
                
                // Weather description
                description.StringValue = todayWeather.weather[0].description;
                
                // Pressure
                var pressureInt = todayWeather.main.pressure;
                pressure.StringValue = pressureInt + " hPa";
                if (pressureInt > 1015)
                {
                    pressureInterpretation.StringValue = "Good weather !";
                }
                else if (pressureInt < 1015 & pressureInt > 1000)
                {
                    pressureInterpretation.StringValue = "Rain is coming !";
                }
                else if (pressureInt < 1000)
                {
                    pressureInterpretation.StringValue = "TAKE COVER !";
                }   
                
                // Wind speed
                var windSpeedKmh = todayWeather.wind.speed * 3.6;
                windSpeed.StringValue = windSpeedKmh + " km/h";
                if (windSpeedKmh < 1)
                {
                    windSpeedInterpretation.StringValue = "Calm !";
                }
                else if (windSpeedKmh >= 1 & windSpeedKmh <= 5)
                {
                    windSpeedInterpretation.StringValue = "Very light breeze !";
                }
                else if (windSpeedKmh > 5 & windSpeedKmh <= 11)
                {
                    windSpeedInterpretation.StringValue = "Light breeze !";
                }
                else if (windSpeedKmh > 11 & windSpeedKmh <= 19)
                {
                    windSpeedInterpretation.StringValue = "Little breeze !";
                }
                else if (windSpeedKmh > 19 & windSpeedKmh <= 28)
                {
                    windSpeedInterpretation.StringValue = "Nice breeze !";
                }
                else if (windSpeedKmh > 28 & windSpeedKmh <= 38)
                {
                    windSpeedInterpretation.StringValue = "Good breeze !";
                }
                else if (windSpeedKmh > 38 & windSpeedKmh <= 49)
                {
                    windSpeedInterpretation.StringValue = "Cool wind !";
                }
                else if (windSpeedKmh > 49 & windSpeedKmh <= 61)
                {
                    windSpeedInterpretation.StringValue = "Big wind !";
                }
                else if (windSpeedKmh > 61 & windSpeedKmh <= 74)
                {
                    windSpeedInterpretation.StringValue = "Gale !";
                }
                else if (windSpeedKmh > 74 & windSpeedKmh <= 88)
                {
                    windSpeedInterpretation.StringValue = "Strong gale !";
                }
                else if (windSpeedKmh > 88 & windSpeedKmh <= 102)
                {
                    windSpeedInterpretation.StringValue = "Storm !";
                }
                else if (windSpeedKmh > 102 & windSpeedKmh <= 117)
                {
                    windSpeedInterpretation.StringValue = "Violent storm !";
                }
                else if (windSpeedKmh > 117)
                {
                    windSpeedInterpretation.StringValue = "Hurricane !";
                }
                
                // Sunrise
                var sunrise = DateTimeOffset.FromUnixTimeSeconds(todayWeather.sys.sunrise);
                var sunriseString = sunrise.ToString(CultureInfo.CurrentCulture);
                var splitSunriseString = Regex.Split(sunriseString, @"\s+");
                sunriseTime.StringValue = splitSunriseString[1] + " AM";

                // Sunset
                var sunset = DateTimeOffset.FromUnixTimeSeconds(todayWeather.sys.sunset);
                var sunsetString = sunset.ToString(CultureInfo.CurrentCulture);
                var splitSunsetString = Regex.Split(sunsetString, @"\s+");
                sunsetTime.StringValue = splitSunsetString[1] + " PM";
            }
            catch (HttpRequestException)
            {
                actualTemp.StringValue = "N/A";
                description.StringValue = "N/A";
                pressure.StringValue = "N/A";
                pressureInterpretation.StringValue = "N/A";
                windSpeed.StringValue = "N/A";
                windSpeedInterpretation.StringValue = "N/A";
                sunriseTime.StringValue = "N/A";
                sunsetTime.StringValue = "N/A";
                errorCity.Hidden = false;
            }
        }
    }
}