#ifndef SENSORSTUB_H
#define SENSORSTUB_H

#include "IWeatherSensor.h"

class SensorStub : public IWeatherSensor {
 public:
    SensorStub(double temp, int precip, int hum, int wind);

    double TemperatureInC() const override;
    int Precipitation() const override;
    int Humidity() const override;
    int WindSpeedKMPH() const override;

 private:
    double temperature;
    int precipitation;
    int humidity;
    int windSpeed;
};

#endif // SENSORSTUB_H
