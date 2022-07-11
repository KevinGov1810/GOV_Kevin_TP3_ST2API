using System;
using AppKit;

namespace TP3
{
    public partial class ViewController : NSViewController
    {
        
        public ViewController(IntPtr handle) : base(handle)
        {
        }

        public override void ViewDidLoad()
        {
            base.ViewDidLoad();
            errorCity.Hidden = true;
            dateTomorrow.StringValue = DateTime.Now.AddDays(1).ToString("MM/dd");
            dateOne.StringValue = DateTime.Now.AddDays(1).ToString("MM/dd");
            dateTwo.StringValue = DateTime.Now.AddDays(2).ToString("MM/dd");
            dateThree.StringValue = DateTime.Now.AddDays(3).ToString("MM/dd");
            dateFour.StringValue = DateTime.Now.AddDays(4).ToString("MM/dd");
            dateFive.StringValue = DateTime.Now.AddDays(5).ToString("MM/dd");
        }
        
        partial void FindInformation(NSButton sender)
        {
            View.Window.Title = "Weather App";
            errorCity.Hidden = true;
            
            // Information for the actual weather
            ActualWeather.GetInfo(choiceCity.StringValue, actualTemp, description, pressure, pressureInterpretation,
                windSpeed, windSpeedInterpretation,sunriseTime, sunsetTime, errorCity);
            
            // Information for the next weather
            NextDayWeather.GetInfo(choiceCity.StringValue, midnight, threeAM, sixAM, nineAM, midday, threePM, sixPM, ninePM,
                minOne, maxOne, minTwo, maxTwo, minThree, maxThree, minFour, maxFour, minFive, maxFive, errorCity);
            
            // Information for the air pollution
            AirPollutionWeather.GetInfo(choiceCity.StringValue, airCriteria, airCriteriaInterpretation, errorCity);
        }
        
    }
}