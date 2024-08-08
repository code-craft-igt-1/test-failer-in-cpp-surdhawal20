#include <gtest/gtest.h>
#include "SensorStub.h"
#include "WeatherReporter.h"

TEST(WeatherReporterTest, TestRainy) {
    SensorStub sensor(26, 70, 72, 52);
    WeatherReporter reporter(sensor);
    std::string report = reporter.Report();
    EXPECT_NE(report.find("rain"), std::string::npos);
}

TEST(WeatherReporterTest, TestHighPrecipitationAndLowWindspeed) {
    SensorStub sensor(26, 70, 72, 40);
    WeatherReporter reporter(sensor);
    std::string report = reporter.Report();
    EXPECT_NE(report.find("rain"), std::string::npos);
}
