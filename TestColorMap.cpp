#include <vector>
#include <string>
#include <gtest/gtest.h>
#include "ColorMap.h"

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
        "0 | White | Blue\n"
        "1 | White | Orange\n"
        "2 | White | Green\n"
        "3 | White | Brown\n"
        "4 | White | Slate\n"
        "5 | Red | Blue\n"
        "6 | Red | Orange\n"
        "7 | Red | Green\n"
        "8 | Red | Brown\n"
        "9 | Red | Slate\n"
        "10 | Black | Blue\n"
        "11 | Black | Orange\n"
        "12 | Black | Green\n"
        "13 | Black | Brown\n"
        "14 | Black | Slate\n"
        "15 | Yellow | Blue\n"
        "16 | Yellow | Orange\n"
        "17 | Yellow | Green\n"
        "18 | Yellow | Brown\n"
        "19 | Yellow | Slate\n"
        "20 | Violet | Blue\n"
        "21 | Violet | Orange\n"
        "22 | Violet | Green\n"
        "23 | Violet | Brown\n"
        "24 | Violet | Slate\n";

    EXPECT_EQ(result, expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
