#include "../src/palindrom.h"
#include <gtest/gtest.h>

TEST(PalindromTest, EmptyString) {
    EXPECT_TRUE(checkPalindrom(""));
}

TEST(PalindromTest, SingleCharacter) {
    EXPECT_TRUE(checkPalindrom("a"));
}

TEST(PalindromTest, SimplePalindrom) {
    EXPECT_TRUE(checkPalindrom("radar"));
}

TEST(PalindromTest, NotPalindrom) {
    EXPECT_FALSE(checkPalindrom("hello"));
}

TEST(PalindromTest, WithRegistr) {
    EXPECT_TRUE(checkPalindrom("Radar")); // палиндром не зависит от регистра
}

TEST(PalindromTest, WithSpaces) {
    EXPECT_TRUE(checkPalindrom("a man a plan a canal panama")); // палиндром не зависит от пробелов
}