#include "TshirtsSize.h"

class TshirtSize {
public:
    // Function to get the size based on cms
    char getSizeInCms(int sizeInCms) const {
        if (sizeInCms < 38) {
            return 'S';
        } else if (sizeInCms <= 42) {  // This simplifies the logic for M
            return 'M';
        } else {
            return 'L';
        }
    }
};

