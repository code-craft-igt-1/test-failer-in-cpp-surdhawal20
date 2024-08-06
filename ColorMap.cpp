#include "ColorMap.h"
#include <sstream>
#include <utility>

ColorMap::ColorMap() {
    majorColors = { "White", "Red", "Black", "Yellow", "Violet" };
    minorColors = { "Blue", "Orange", "Green", "Brown", "Slate" };
}

std::vector<std::pair<std::string, std::string>> ColorMap::getColorPairs() const {
    std::vector<std::pair<std::string, std::string>> colorPairs;
    for (const auto& major : majorColors) {
        for (const auto& minor : minorColors) {
            colorPairs.emplace_back(major, minor);
        }
    }
    return colorPairs;
}

std::string ColorMap::formatColorMap() const {
    std::vector<std::pair<std::string, std::string>> colorPairs = getColorPairs();
    std::ostringstream colorPairStream;
    for (size_t i = 0; i < colorPairs.size(); ++i) {
        colorPairStream << i << " | "
            << colorPairs[i].second << " | "
            << colorPairs[i].first << '\n';
    }
    return colorPairStream.str();
}
