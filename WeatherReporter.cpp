#include "WeatherReporter.h"

WeatherReporter::WeatherReporter(const IWeatherSensor& sensor) : sensor(sensor) {}

std::string WeatherReporter::Report() const {
    int precipitation = sensor.Precipitation();
    std::string report = "Sunny day";

    if (sensor.TemperatureInC() > 25 && sensor.WindSpeedKMPH() > 50) {
        report = "Alert, Stormy with heavy rain";
    } else if (sensor.TemperatureInC() > 25 && precipitation >= 20 && precipitation < 60) {
        report = "Partly cloudy with rain";
    } else if (precipitation >= 20) {
        report = "Rainy day";
    }
    return report;
}
