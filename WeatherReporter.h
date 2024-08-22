#ifndef WEATHERREPORTER_H
#define WEATHERREPORTER_H

#include "IWeatherSensor.h"
#include <string>

class WeatherReporter {
 public:
    explicit WeatherReporter(const IWeatherSensor& sensor);

    std::string Report() const;

 private:
    const IWeatherSensor& sensor;
};

#endif // WEATHERREPORTER_H
