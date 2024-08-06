// TestTshirtsSize.cpp
#include <gtest/gtest.h>
#include "TshirtsSize.h"

TEST(SizeTest, HandlesSmallSize) {
	EXPECT_EQ(tshirtsSize(37), 'S');
}

TEST(SizeTest, HandlesMediumSizeLowerBoundary) {
	EXPECT_EQ(tshirtsSize(38), 'M');
}

TEST(SizeTest, HandlesMediumSizeMiddle) {
	EXPECT_EQ(tshirtsSize(40), 'M');
}

TEST(SizeTest, HandlesMediumSizeUpperBoundary) {
	EXPECT_EQ(tshirtsSize(42), 'M');
}

TEST(SizeTest, HandlesLargeSize) {
	EXPECT_EQ(tshirtsSize(43), 'L');
}

int main(int argc, char **argv) {
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
