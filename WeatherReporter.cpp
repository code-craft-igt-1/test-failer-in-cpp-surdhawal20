#include "WeatherReporter.h"

WeatherReporter::WeatherReporter(const IWeatherSensor& sensor) : sensor(sensor) {}

std::string WeatherReporter::Report() const {
    int precipitation = sensor.Precipitation();
    std::string report = "Sunny day";

    // Stormy conditions with heavy rain and strong winds
    if (sensor.TemperatureInC() > 25 && sensor.WindSpeedKMPH() > 50) {
        report = "Alert, Stormy with heavy rain";
    }
    // Partly cloudy conditions with moderate precipitation
    else if (sensor.TemperatureInC() > 25 && precipitation >= 20 && precipitation < 60) {
        report = "Partly cloudy with rain";
    }
    // Rainy conditions without stormy winds
    else if (precipitation >= 20) {
        report = "Rainy day";
    }
    return report;
}
