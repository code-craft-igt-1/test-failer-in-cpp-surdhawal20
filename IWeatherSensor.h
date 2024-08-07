#ifndef IWEATHERSENSOR_H
#define IWEATHERSENSOR_H

class IWeatherSensor {
 public:
    virtual double TemperatureInC() const = 0;
    virtual int Precipitation() const = 0;
    virtual int Humidity() const = 0;
    virtual int WindSpeedKMPH() const = 0;
    virtual ~IWeatherSensor() = default;
};

#endif // IWEATHERSENSOR_H
