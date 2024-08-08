#include <gtest/gtest.h>
#include <utility>
#include <sstream>
#include <vector>
#include "./ColorMap.h"

// Helper function to generate the expected output dynamically
std::string generateExpectedOutput(const ColorMap& colorMap) {
    std::vector<std::pair<std::string, std::string>> colorPairs = colorMap.getColorPairs();
    std::ostringstream colorPairStream;
    for (size_t i = 1; i < colorPairs.size(); ++i) {
        colorPairStream << i << " | "
            << colorPairs[i].second << " | "
            << colorPairs[i].first << '\n';
    }
    return colorPairStream.str();
}

// Test Case 1: Verify the formatColorMap output
TEST(ColorMapTest, TestFormatColorMap) {
    ColorMap colorMap;
    std::string result = colorMap.formatColorMap();
    std::string expected = generateExpectedOutput(colorMap);

    EXPECT_EQ(result, expected);
}

// Test Case 2: Verify specific color pair formatting
TEST(ColorMapTest, TestSpecificColorPairFormatting) {
    ColorMap colorMap;
    std::vector<std::pair<std::string, std::string>> colorPairs = colorMap.getColorPairs();

    // Check specific color pair formatting
    std::ostringstream colorPairStream;
    for (size_t i = 1; i < colorPairs.size(); ++i) {
        colorPairStream << i << " | "
            << colorPairs[i].second << " | "
            << colorPairs[i].first << '\n';
    }
    std::string formattedOutput = colorPairStream.str();

    std::string result = colorMap.formatColorMap();
    std::string expected = formattedOutput;

    EXPECT_EQ(result, expected);
}


