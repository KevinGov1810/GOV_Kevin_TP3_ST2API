using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Http;
using System.Text.RegularExpressions;
using AppKit;
using Xamarin.Forms;

namespace TP3
{
    public static class NextDayWeather
    {
        public static async void GetInfo(string city, NSTextField midnight, NSTextField threeAm, NSTextField sixAm, NSTextField nineAm,
            NSTextField midday, NSTextField threePm, NSTextField sixPm, NSTextField ninePm, NSTextField minOne, NSTextField maxOne,
            NSTextField minTwo, NSTextField maxTwo,NSTextField minThree, NSTextField maxThree,NSTextField minFour, NSTextField maxFour,
            NSTextField minFive, NSTextField maxFive, NSTextField errorCity, NSImageView iconWeatherOne, NSImageView iconWeatherTwo,
            NSImageView iconWeatherThree, NSImageView iconWeatherFour, NSImageView iconWeatherFive, NSImageView iconWeatherSix,
            NSImageView iconWeatherSeven, NSImageView iconWeatherEight, NSImageView iconWeatherMin1, NSImageView iconWeatherMax1,
            NSImageView iconWeatherMin2, NSImageView iconWeatherMax2, NSImageView iconWeatherMin3, NSImageView iconWeatherMax3,
            NSImageView iconWeatherMin4, NSImageView iconWeatherMax4, NSImageView iconWeatherMin5, NSImageView iconWeatherMax5)
        {
            try
            {
                // API calling for tomorrow and 5 days weather
                var tomorrowWeather =
                    await Http.RetrieveTomorrowWeather(
                        $"https://api.openweathermap.org/data/2.5/forecast?q={city}&units=metric&appid=8e014226e54b820df5acf0071d7e889b");

                // Tomorrow Forecast
                var nextDay = DateTime.Now.AddDays(1).ToString("yyyy-MM-dd");
                var splitNextDay = Regex.Split(nextDay, @"\s+");
                for (var i = 0; i < tomorrowWeather.list.Count; i++)
                {
                    var tomorrowDate = tomorrowWeather.list[i].dt_txt;
                    var splitTomorrowDate = Regex.Split(tomorrowDate, @"\s+");
                    if (splitTomorrowDate[0] != splitNextDay[0]) continue;
                    midnight.StringValue = (int)tomorrowWeather.list[i].main.temp + "°";
                    threeAm.StringValue = (int)tomorrowWeather.list[i + 1].main.temp + "°";
                    sixAm.StringValue = (int)tomorrowWeather.list[i + 2].main.temp + "°";
                    nineAm.StringValue = (int)tomorrowWeather.list[i + 3].main.temp + "°";
                    midday.StringValue = (int)tomorrowWeather.list[i + 4].main.temp + "°";
                    threePm.StringValue = (int)tomorrowWeather.list[i + 5].main.temp + "°";
                    sixPm.StringValue = (int)tomorrowWeather.list[i + 6].main.temp + "°";
                    ninePm.StringValue = (int)tomorrowWeather.list[i + 7].main.temp + "°";
                    iconWeatherOne.Image = new NSImage($"{tomorrowWeather.list[i].weather[0].icon}.png");
                    iconWeatherTwo.Image = new NSImage($"{tomorrowWeather.list[i+1].weather[0].icon}.png");
                    iconWeatherThree.Image = new NSImage($"{tomorrowWeather.list[i+2].weather[0].icon}.png");
                    iconWeatherFour.Image = new NSImage($"{tomorrowWeather.list[i+3].weather[0].icon}.png");
                    iconWeatherFive.Image = new NSImage($"{tomorrowWeather.list[i+4].weather[0].icon}.png");
                    iconWeatherSix.Image = new NSImage($"{tomorrowWeather.list[i+5].weather[0].icon}.png");
                    iconWeatherSeven.Image = new NSImage($"{tomorrowWeather.list[i+6].weather[0].icon}.png");
                    iconWeatherEight.Image = new NSImage($"{tomorrowWeather.list[i+7].weather[0].icon}.png");
                    break;
                }

                // 5 Days Forecast
                var date1 = DateTime.Now.AddDays(1).ToString("yyyy-MM-dd");
                var splitDate1 = Regex.Split(date1, @"\s+");
                var date2 = DateTime.Now.AddDays(2).ToString("yyyy-MM-dd");
                var splitDate2 = Regex.Split(date2, @"\s+");
                var date3 = DateTime.Now.AddDays(3).ToString("yyyy-MM-dd");
                var splitDate3 = Regex.Split(date3, @"\s+");
                var date4 = DateTime.Now.AddDays(4).ToString("yyyy-MM-dd");
                var splitDate4 = Regex.Split(date4, @"\s+");
                var date5 = DateTime.Now.AddDays(5).ToString("yyyy-MM-dd");
                var splitDate5 = Regex.Split(date5, @"\s+");
                var minTempOne = new List<double>();
                var minTempTwo = new List<double>();
                var minTempThree = new List<double>();
                var minTempFour = new List<double>();
                var minTempFive = new List<double>();
                var maxTempOne = new List<double>();
                var maxTempTwo = new List<double>();
                var maxTempThree = new List<double>();
                var maxTempFour = new List<double>();
                var maxTempFive = new List<double>();
                foreach (var t in tomorrowWeather.list)
                {
                    var date = t.dt_txt;
                    var splitDate = Regex.Split(date, @"\s+");
                    if (splitDate[0] == splitDate1[0])
                    {
                        minTempOne.Add(t.main.temp_min);
                        maxTempOne.Add(t.main.temp_max);
                    }
                    else if (splitDate[0] == splitDate2[0])
                    {
                        minTempTwo.Add(t.main.temp_min);
                        maxTempTwo.Add(t.main.temp_max);
                    }
                    else if (splitDate[0] == splitDate3[0])
                    {
                        minTempThree.Add(t.main.temp_min);
                        maxTempThree.Add(t.main.temp_max);
                    }
                    else if (splitDate[0] == splitDate4[0])
                    {
                        minTempFour.Add(t.main.temp_min);
                        maxTempFour.Add(t.main.temp_max);
                    }
                    else if (splitDate[0] == splitDate5[0])
                    {
                        minTempFive.Add(t.main.temp_min);
                        maxTempFive.Add(t.main.temp_max);
                    }
                }

                for (var j = 0; j < tomorrowWeather.list.Count; j++)
                {
                    var date = tomorrowWeather.list[j].dt_txt;
                    var splitDate = Regex.Split(date, @"\s+");
                    if ((int)minTempOne.Min() == (int)tomorrowWeather.list[j].main.temp_min & splitDate[0] == splitDate1[0])
                    {
                        iconWeatherMin1.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempOne.Max() == (int)tomorrowWeather.list[j].main.temp_max & splitDate[0] == splitDate1[0])
                    {
                        iconWeatherMax1.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempTwo.Min() == (int)tomorrowWeather.list[j].main.temp_min & splitDate[0] == splitDate2[0])
                    {
                        iconWeatherMin2.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempTwo.Max() == (int)tomorrowWeather.list[j].main.temp_max & splitDate[0] == splitDate2[0])
                    {
                        iconWeatherMax2.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempThree.Min() == (int)tomorrowWeather.list[j].main.temp_min & splitDate[0] == splitDate3[0])
                    {
                        iconWeatherMin3.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempThree.Max() == (int)tomorrowWeather.list[j].main.temp_max & splitDate[0] == splitDate3[0])
                    {
                        iconWeatherMax3.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempFour.Min() == (int)tomorrowWeather.list[j].main.temp_min & splitDate[0] == splitDate4[0])
                    {
                        iconWeatherMin4.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempFour.Max() == (int)tomorrowWeather.list[j].main.temp_max & splitDate[0] == splitDate4[0])
                    {
                        iconWeatherMax4.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempFive.Min() == (int)tomorrowWeather.list[j].main.temp_min & splitDate[0] == splitDate5[0])
                    {
                        iconWeatherMin5.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                    else if ((int)minTempFive.Max() == (int)tomorrowWeather.list[j].main.temp_max & splitDate[0] == splitDate5[0])
                    {
                        iconWeatherMax5.Image = new NSImage($"{tomorrowWeather.list[j].weather[0].icon}.png");
                    }
                }
                minOne.StringValue = (int)minTempOne.Min() + "°";
                minTwo.StringValue = (int)minTempTwo.Min() + "°";
                minThree.StringValue = (int)minTempThree.Min() + "°";
                minFour.StringValue = (int)minTempFour.Min() + "°";
                minFive.StringValue = (int)minTempFive.Min() + "°";
                maxOne.StringValue = (int)maxTempOne.Max() + "°";
                maxTwo.StringValue = (int)maxTempTwo.Max() + "°";
                maxThree.StringValue = (int)maxTempThree.Max() + "°";
                maxFour.StringValue = (int)maxTempFour.Max() + "°";
                maxFive.StringValue = (int)maxTempFive.Max() + "°";
            }
            catch (HttpRequestException)
            {
                midnight.StringValue = "N/A";
                threeAm.StringValue = "N/A";
                sixAm.StringValue = "N/A";
                nineAm.StringValue = "N/A";
                midday.StringValue = "N/A";
                threePm.StringValue = "N/A";
                sixPm.StringValue = "N/A";
                ninePm.StringValue = "N/A";
                minOne.StringValue = "N/A";
                minTwo.StringValue = "N/A";
                minThree.StringValue = "N/A";
                minFour.StringValue = "N/A";
                minFive.StringValue = "N/A";
                maxOne.StringValue = "N/A";
                maxTwo.StringValue = "N/A";
                maxThree.StringValue = "N/A";
                maxFour.StringValue = "N/A";
                maxFive.StringValue = "N/A";
                errorCity.Hidden = false;
            }
        }
    }
}