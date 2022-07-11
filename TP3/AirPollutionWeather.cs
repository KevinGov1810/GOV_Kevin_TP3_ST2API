using System.Net.Http;
using AppKit;

namespace TP3
{
    public static class AirPollutionWeather
    {
        public static async void GetInfo(string city, NSTextField airCriteria, NSTextField airCriteriaInterpretation, NSTextField errorCity)
        {
            try
            {
                // API calling for today weather
                var todayWeather =
                    await Http.RetrieveTodayWeather(
                        $"https://api.openweathermap.org/data/2.5/weather?q={city}&units=metric&appid=8e014226e54b820df5acf0071d7e889b");
                
                // API calling for air pollution
                var lat = todayWeather.coord.lat;
                var lon = todayWeather.coord.lon;
                var airPollution =
                    await Http.RetrieveAirPollution(
                        $"https://api.openweathermap.org/data/2.5/air_pollution?lat={lat}&lon={lon}&appid=8e014226e54b820df5acf0071d7e889b");
                
                // Air pollution
                var airCriteriaInt = airPollution.list[0].main.aqi;
                airCriteria.StringValue = airCriteriaInt + "";
                switch (airCriteriaInt)
                {
                    case 1:
                        airCriteriaInterpretation.StringValue = "Good !";
                        break;
                    case 2:
                        airCriteriaInterpretation.StringValue = "Fair !";
                        break;
                    case 3:
                        airCriteriaInterpretation.StringValue = "Moderate !";
                        break;
                    case 4:
                        airCriteriaInterpretation.StringValue = "Poor !";
                        break;
                    case 5:
                        airCriteriaInterpretation.StringValue = "Very poor !";
                        break;
                }
            }
            catch (HttpRequestException)
            {
                airCriteria.StringValue = "N/A";
                airCriteriaInterpretation.StringValue = "N/A";
                errorCity.Hidden = false;
            }
        }
    }
}