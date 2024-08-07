#include <gtest/gtest.h>
#include <utility>
#include <vector>
#include <string>

#include "./ColorMap.h"

TEST(ColorMapTest, TestGetColorPairs) {
    ColorMap colorMap;
    auto colorPairs = colorMap.getColorPairs();

    std::vector<std::pair<std::string, std::string>> expectedPairs = {
        {"White", "Blue"}, {"White", "Orange"},
        {"White", "Green"}, {"White", "Brown"},
        {"White", "Slate"}, {"Red", "Blue"},
        {"Red", "Orange"}, {"Red", "Green"},
        {"Red", "Brown"}, {"Red", "Slate"},
        {"Black", "Blue"}, {"Black", "Orange"},
        {"Black", "Green"}, {"Black", "Brown"},
        {"Black", "Slate"}, {"Yellow", "Blue"},
        {"Yellow", "Orange"}, {"Yellow", "Green"},
        {"Yellow", "Brown"}, {"Yellow", "Slate"},
        {"Violet", "Blue"}, {"Violet", "Orange"},
        {"Violet", "Green"}, {"Violet", "Brown"},
        {"Violet", "Slate"}
    };

    EXPECT_EQ(colorPairs, expectedPairs);
}

TEST(ColorMapTest, TestFormatColorMap) {
    ColorMap colorMap;
    std::string result = colorMap.formatColorMap();
    std::string expected =
        "1 | White | Blue\n"
        "2 | White | Orange\n"
        "3 | White | Green\n"
        "4 | White | Brown\n"
        "5 | White | Slate\n"
        "6 | Red | Blue\n"
        "7 | Red | Orange\n"
        "8 | Red | Green\n"
        "9 | Red | Brown\n"
        "10 | Red | Slate\n"
        "11 | Black | Blue\n"
        "12 | Black | Orange\n"
        "13 | Black | Green\n"
        "14 | Black | Brown\n"
        "15 | Black | Slate\n"
        "16 | Yellow | Blue\n"
        "17 | Yellow | Orange\n"
        "18 | Yellow | Green\n"
        "19 | Yellow | Brown\n"
        "20 | Yellow | Slate\n"
        "21 | Violet | Blue\n"
        "22 | Violet | Orange\n"
        "23 | Violet | Green\n"
        "24 | Violet | Brown\n"
        "25 | Violet | Slate\n";

    EXPECT_EQ(result, expected);
}

