using System;
using System.Net.Http;
using System.Threading.Tasks;
using Newtonsoft.Json;

namespace TP3
{
    public static class Http
    {
        public static async Task<TodayWeather.Root> RetrieveTodayWeather(string url)
        {
            var client = new HttpClient();
            var request = new HttpRequestMessage
            {
                Method = HttpMethod.Get,
                RequestUri =
                    new Uri(url)
            };
            using (var response = await client.SendAsync(request))
            {
                response.EnsureSuccessStatusCode();
                var stringResult = await response.Content.ReadAsStringAsync();
                var obj = JsonConvert.DeserializeObject<TodayWeather.Root>(stringResult);
                return obj ?? throw new HttpRequestException();
            }
        }
        
        public static async Task<AirPollution.Root> RetrieveAirPollution(string url)
        {
            var client = new HttpClient();
            var request = new HttpRequestMessage
            {
                Method = HttpMethod.Get,
                RequestUri =
                    new Uri(url)
            };
            using (var response = await client.SendAsync(request))
            {
                response.EnsureSuccessStatusCode();
                var stringResult = await response.Content.ReadAsStringAsync();
                var obj = JsonConvert.DeserializeObject<AirPollution.Root>(stringResult);
                return obj ?? throw new HttpRequestException();
            }
        }
        
        
        public static async Task<TomorrowWeather.Root> RetrieveTomorrowWeather(string url)
        {
            var client = new HttpClient();
            var request = new HttpRequestMessage
            {
                Method = HttpMethod.Get,
                RequestUri =
                    new Uri(url)
            };
            using (var response = await client.SendAsync(request))
            {
                response.EnsureSuccessStatusCode();
                var stringResult = await response.Content.ReadAsStringAsync();
                var obj = JsonConvert.DeserializeObject<TomorrowWeather.Root>(stringResult);
                return obj ?? throw new HttpRequestException();
            }
        }
    }
}