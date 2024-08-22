#include "SensorStub.h"

SensorStub::SensorStub(double temp, int precip, int humid, int wind)
    : temperature(temp), precipitation(precip), humidity(humid), windSpeed(wind) {}

double SensorStub::TemperatureInC() const {
    return temperature;
}

int SensorStub::Precipitation() const {
    return precipitation;
}

int SensorStub::Humidity() const {
    return humidity;
}

int SensorStub::WindSpeedKMPH() const {
    return windSpeed;
}
