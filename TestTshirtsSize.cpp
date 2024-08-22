#include <gtest/gtest.h>
#include "TshirtsSize.h"

// Test case for TshirtSize class
class TshirtSizeTest : public ::testing::Test {
protected:
    TshirtSize tshirtSize;
};

// Test small size
TEST_F(TshirtSizeTest, SmallSize) {
    EXPECT_EQ(tshirtSize.getSizeInCms(37), 'S');  // Less than 38 should return 'S'
}

// Test medium size, including boundary
TEST_F(TshirtSizeTest, MediumSize) {
    EXPECT_EQ(tshirtSize.getSizeInCms(38), 'M');  // Exactly 38 should return 'M'
    EXPECT_EQ(tshirtSize.getSizeInCms(40), 'M');  // Between 38 and 42 should return 'M'
    EXPECT_EQ(tshirtSize.getSizeInCms(42), 'M');  // Exactly 42 should return 'M'
}

// Test large size
TEST_F(TshirtSizeTest, LargeSize) {
    EXPECT_EQ(tshirtSize.getSizeInCms(43), 'L');  // Greater than 42 should return 'L'
    EXPECT_EQ(tshirtSize.getSizeInCms(50), 'L');  // Well above 42 should return 'L'
}

// Test invalid input (boundary cases)
TEST_F(TshirtSizeTest, InvalidInput) {
    EXPECT_EQ(tshirtSize.getSizeInCms(0), 'S');  // Handle small input case, default to 'S'
    EXPECT_EQ(tshirtSize.getSizeInCms(-10), 'S'); // Negative input, treated as invalid and returns 'S'
}

