using System.Diagnostics;
using NUnit.Framework;
using TP3;

namespace Tests
{
    public class Test
    {
        [Test]
        public void Test_Root_AirPollution()
        {
            var rootAirPollution = new AirPollution.Root();
            Assert.IsInstanceOf(typeof(AirPollution.Root),rootAirPollution);
        }
        
        [Test]
        public void Test_Root_TomorrowWeather()
        {
            var rootTomorrowWeather = new TomorrowWeather.Root();
            Assert.IsInstanceOf(typeof(TomorrowWeather.Root),rootTomorrowWeather);
        }
        
        [Test]
        public void Test_Root_TodayWeather()
        {
            var rootTodayWeather = new TodayWeather.Root();
            Assert.IsInstanceOf(typeof(TodayWeather.Root),rootTodayWeather);
        }
    }

}