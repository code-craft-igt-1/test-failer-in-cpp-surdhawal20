#include <gtest/gtest.h>
#include "TshirtsSize.h"

// Test case for TshirtSize class
class TshirtSizeTest : public ::testing::Test {
    protected:
        TshirtSize tshirtSize;
};

// Test small size
TEST_F(TshirtSizeTest, SmallSize) {
    // Less than 38 should return 'S'
    EXPECT_EQ(tshirtSize.getSizeInCms(37), 'S');
}

// Test medium size, including boundary
TEST_F(TshirtSizeTest, MediumSize) {
    // Exactly 38 should return 'M'
    EXPECT_EQ(tshirtSize.getSizeInCms(38), 'M');
    // Between 38 and 42 should return 'M'
    EXPECT_EQ(tshirtSize.getSizeInCms(40), 'M');
    // Exactly 42 should return 'M'
    EXPECT_EQ(tshirtSize.getSizeInCms(42), 'M');
}

// Test large size
TEST_F(TshirtSizeTest, LargeSize) {
    // Greater than 42 should return 'L'
    EXPECT_EQ(tshirtSize.getSizeInCms(43), 'L');
    // Well above 42 should return 'L'
    EXPECT_EQ(tshirtSize.getSizeInCms(50), 'L');
}

// Test invalid input (boundary cases)
TEST_F(TshirtSizeTest, InvalidInput) {
    // Handle small input case, default to 'S'
    EXPECT_EQ(tshirtSize.getSizeInCms(0), 'S');
    // Negative input, treated as invalid and returns 'S'
    EXPECT_EQ(tshirtSize.getSizeInCms(-10), 'S'); 
}
