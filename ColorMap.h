#ifndef COLORMAP_H
#define COLORMAP_H

#include <vector>
#include <string>

class ColorMap {
public:
    ColorMap();
    std::vector<std::pair<std::string, std::string>> getColorPairs() const;
    std::string formatColorMap() const;

private:
    std::vector<std::string> majorColors;
    std::vector<std::string> minorColors;
};

#endif // COLORMAP_H
