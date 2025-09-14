
#include "../src/palindrom.h"
#include <gtest/gtest.h>

TEST(PalindromTest, EmptyString) {
    EXPECT_TRUE(checkPalindrom(""));
}

TEST(PalindromTest, SingleChar) {
    EXPECT_TRUE(checkPalindrom("a"));
}

TEST(PalindromTest, SimpleCase) {
    EXPECT_TRUE(checkPalindrom("radar"));
}

TEST(PalindromTest, NotPalindrom) {
    EXPECT_FALSE(checkPalindrom("hello"));
}

TEST(PalindromTest, DifferentCase) {
    EXPECT_TRUE(checkPalindrom("Radar"));
}

TEST(PalindromTest, WithSpaces) {
    EXPECT_TRUE(checkPalindrom("a man a plan a canal panama"));
}

TEST(PalindromTest, Numbers) {
    EXPECT_TRUE(checkPalindrom("12321"));
}

// Тесты с разным регистром
TEST(PalindromTest, AllUpperCase) {
    EXPECT_TRUE(checkPalindrom("RADAR"));
}

TEST(PalindromTest, MixedCase) {
    EXPECT_TRUE(checkPalindrom("RaDaR"));
}

TEST(PalindromTest, LowerCase) {
    EXPECT_TRUE(checkPalindrom("racecar"));
}

// Тесты с пробелами
TEST(PalindromTest, SpacesAtEnds) {
    EXPECT_TRUE(checkPalindrom(" radar "));
}

TEST(PalindromTest, MultipleSpaces) {
    EXPECT_TRUE(checkPalindrom("a  man  a  plan  a  canal  panama"));
}

TEST(PalindromTest, SpacesInMiddle) {
    EXPECT_TRUE(checkPalindrom("race car"));
}

TEST(PalindromTest, OnlySpaces) {
    EXPECT_TRUE(checkPalindrom("   "));
}

// Числовые палиндромы
TEST(PalindromTest, SingleDigit) {
    EXPECT_TRUE(checkPalindrom("5"));
}

TEST(PalindromTest, TwoDigits) {
    EXPECT_TRUE(checkPalindrom("11"));
}

TEST(PalindromTest, ThreeDigits) {
    EXPECT_TRUE(checkPalindrom("121"));
}

TEST(PalindromTest, FourDigits) {
    EXPECT_TRUE(checkPalindrom("1221"));
}

TEST(PalindromTest, FiveDigits) {
    EXPECT_TRUE(checkPalindrom("12321"));
}

TEST(PalindromTest, SixDigits) {
    EXPECT_TRUE(checkPalindrom("123321"));
}

TEST(PalindromTest, NotNumberPalindrom) {
    EXPECT_FALSE(checkPalindrom("12345"));
}

// Смешанные символы
TEST(PalindromTest, LettersAndNumbers) {
    EXPECT_TRUE(checkPalindrom("a1b2b1a"));
}

TEST(PalindromTest, MixedChars) {
    EXPECT_TRUE(checkPalindrom("a1a"));
}

TEST(PalindromTest, NotMixedPalindrom) {
    EXPECT_FALSE(checkPalindrom("a1b2c"));
}

// Длинные палиндромы
TEST(PalindromTest, LongPalindrome) {
    EXPECT_TRUE(checkPalindrom("abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba"));
}

TEST(PalindromTest, VeryLongPalindrome) {
    EXPECT_TRUE(checkPalindrom("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba"));
}

// Короткие палиндромы
TEST(PalindromTest, TwoChars) {
    EXPECT_TRUE(checkPalindrom("aa"));
}

TEST(PalindromTest, ThreeChars) {
    EXPECT_TRUE(checkPalindrom("aba"));
}

TEST(PalindromTest, FourChars) {
    EXPECT_TRUE(checkPalindrom("abba"));
}

TEST(PalindromTest, FiveChars) {
    EXPECT_TRUE(checkPalindrom("abcba"));
}

// Не палиндромы
TEST(PalindromTest, NotTwoChars) {
    EXPECT_FALSE(checkPalindrom("ab"));
}

TEST(PalindromTest, NotThreeChars) {
    EXPECT_FALSE(checkPalindrom("abc"));
}

TEST(PalindromTest, NotFourChars) {
    EXPECT_FALSE(checkPalindrom("abcd"));
}

TEST(PalindromTest, NotFiveChars) {
    EXPECT_FALSE(checkPalindrom("abcde"));
}

// Специальные символы
TEST(PalindromTest, SpecialChars) {
    EXPECT_TRUE(checkPalindrom("a!a"));
}

TEST(PalindromTest, Punctuation) {
    EXPECT_TRUE(checkPalindrom("a.a"));
}

TEST(PalindromTest, MixedSpecial) {
    EXPECT_TRUE(checkPalindrom("a!@#@!a"));
}

// Тесты с повторяющимися символами
TEST(PalindromTest, AllSameChars) {
    EXPECT_TRUE(checkPalindrom("aaaa"));
}

TEST(PalindromTest, RepeatedPattern) {
    EXPECT_TRUE(checkPalindrom("abababa"));
}

TEST(PalindromTest, NotRepeatedPattern) {
    EXPECT_FALSE(checkPalindrom("ababab"));
}

// Тесты с пробелами и регистром
TEST(PalindromTest, SpacesAndCase) {
    EXPECT_TRUE(checkPalindrom("A Man A Plan A Canal Panama"));
}

TEST(PalindromTest, ComplexSpaces) {
    EXPECT_TRUE(checkPalindrom("  A  Man  A  Plan  A  Canal  Panama  "));
}

TEST(PalindromTest, MixedSpacesCase) {
    EXPECT_TRUE(checkPalindrom("RaCe CaR"));
}

// Граничные случаи
TEST(PalindromTest, OneSpace) {
    EXPECT_TRUE(checkPalindrom(" "));
}

TEST(PalindromTest, TwoSpaces) {
    EXPECT_TRUE(checkPalindrom("  "));
}

TEST(PalindromTest, TabChar) {
    EXPECT_TRUE(checkPalindrom("\t"));
}

TEST(PalindromTest, NewlineChar) {
    EXPECT_TRUE(checkPalindrom("\n"));
}

// Тесты с цифрами и буквами
TEST(PalindromTest, DigitLetterMix) {
    EXPECT_TRUE(checkPalindrom("1a1"));
}

TEST(PalindromTest, LetterDigitMix) {
    EXPECT_TRUE(checkPalindrom("a1a"));
}

TEST(PalindromTest, ComplexMix) {
    EXPECT_TRUE(checkPalindrom("1a2b3c3b2a1"));
}

// Тесты с символами разных языков
TEST(PalindromTest, Cyrillic) {
    EXPECT_TRUE(checkPalindrom("level"));
}

TEST(PalindromTest, CyrillicMixed) {
    EXPECT_TRUE(checkPalindrom("Level"));
}

TEST(PalindromTest, NotCyrillic) {
    EXPECT_FALSE(checkPalindrom("hello"));
}

// Тесты с символами
TEST(PalindromTest, SymbolPalindrome) {
    EXPECT_TRUE(checkPalindrom("!@#@!"));
}

TEST(PalindromTest, SymbolNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("!@#$"));
}

TEST(PalindromTest, MixedSymbols) {
    EXPECT_TRUE(checkPalindrom("a!@#@!a"));
}

// Тесты производительности
TEST(PalindromTest, MediumLength) {
    EXPECT_TRUE(checkPalindrom("abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba"));
}

TEST(PalindromTest, MediumNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"));
}

// Тесты с нулями
TEST(PalindromTest, ZeroPalindrome) {
    EXPECT_TRUE(checkPalindrom("000"));
}

TEST(PalindromTest, ZeroNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("001"));
}

TEST(PalindromTest, MixedZeros) {
    EXPECT_TRUE(checkPalindrom("010"));
}

// Тесты с большими числами
TEST(PalindromTest, BigNumberPalindrome) {
    EXPECT_TRUE(checkPalindrom("12345678987654321"));
}

TEST(PalindromTest, BigNumberNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("12345678987654320"));
}

// Тесты с символами ASCII
TEST(PalindromTest, ASCIIPalindrome) {
    EXPECT_FALSE(checkPalindrom("!@#$%^!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~*())*!\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~^%$#@!"));
}

// Тесты с повторяющимися паттернами
TEST(PalindromTest, PatternPalindrome) {
    EXPECT_TRUE(checkPalindrom("abccba"));
}

TEST(PalindromTest, PatternNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("abccab"));
}

TEST(PalindromTest, ComplexPattern) {
    EXPECT_TRUE(checkPalindrom("abcdeedcba"));
}

// Тесты с пробелами в разных позициях
TEST(PalindromTest, SpaceAtStart) {
    EXPECT_TRUE(checkPalindrom(" radar"));
}

TEST(PalindromTest, SpaceAtEnd) {
    EXPECT_TRUE(checkPalindrom("radar "));
}

TEST(PalindromTest, SpacesInMiddle2) {
    EXPECT_TRUE(checkPalindrom("ra dar"));
}

// Тесты с символами разных типов
TEST(PalindromTest, AlphaNumeric) {
    EXPECT_TRUE(checkPalindrom("a1b2c3c2b1a"));
}

TEST(PalindromTest, AlphaNumericNot) {
    EXPECT_FALSE(checkPalindrom("a1b2c3d4e5"));
}

TEST(PalindromTest, NumericAlpha) {
    EXPECT_TRUE(checkPalindrom("1a2b3b2a1"));
}

// Тесты с длинными строками
TEST(PalindromTest, LongStringPalindrome) {
    EXPECT_TRUE(checkPalindrom("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcbazyxwvutsrqponmlkjihgfedcba"));
}

TEST(PalindromTest, LongStringNotPalindrome) {
    EXPECT_FALSE(checkPalindrom("abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyz"));
}

// Тесты с символами разных регистров
TEST(PalindromTest, AlternatingCase) {
    EXPECT_TRUE(checkPalindrom("AbCdEfFfEdCbA"));
}

TEST(PalindromTest, RandomCase) {
    EXPECT_TRUE(checkPalindrom("RaCeCaR"));
}

TEST(PalindromTest, MixedCaseComplex) {
    EXPECT_TRUE(checkPalindrom("A1B2C3C2B1A"));
}

// Тесты с символами и пробелами
TEST(PalindromTest, SymbolSpaceMix) {
    EXPECT_TRUE(checkPalindrom("a ! @ # @ ! a"));
}


// Тесты с повторяющимися символами
TEST(PalindromTest, RepeatedChars) {
    EXPECT_TRUE(checkPalindrom("aaaaa"));
}

TEST(PalindromTest, RepeatedPatternLong) {
    EXPECT_TRUE(checkPalindrom("ababababa"));
}

TEST(PalindromTest, NotRepeatedPatternLong) {
    EXPECT_FALSE(checkPalindrom("abababab"));
}

// Тесты с символами разных типов
TEST(PalindromTest, MixedTypes) {
    EXPECT_TRUE(checkPalindrom("a1!@#@!1a"));
}

TEST(PalindromTest, MixedTypesNot) {
    EXPECT_FALSE(checkPalindrom("a1!@#$%1a"));
}

// Тесты с символами ASCII таблицы
TEST(PalindromTest, ASCIIRange) {
    EXPECT_TRUE(checkPalindrom("abcdefghijklmnopqrstuvwxyzyxwvutsrqponmlkjihgfedcba"));
}

// Тесты с символами разных языков
TEST(PalindromTest, Multilingual) {
    EXPECT_TRUE(checkPalindrom("a1b2c3c2b1a"));
}

// Тесты с символами и пробелами
TEST(PalindromTest, SpaceSymbolMix) {
    EXPECT_TRUE(checkPalindrom("a ! b @ c # c @ b ! a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, TypeMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3c2b1a"));
}

// Тесты с символами разных регистров
TEST(PalindromTest, CaseSymbolMix) {
    EXPECT_TRUE(checkPalindrom("A!B@C#C@B!A"));
}

// Тесты с символами разных типов
TEST(PalindromTest, ComplexMixTypes) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, VeryComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, UltraComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, MegaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, GigaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, TeraComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, PetaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, ExaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, ZettaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}

// Тесты с символами разных типов
TEST(PalindromTest, YottaComplexMix) {
    EXPECT_TRUE(checkPalindrom("a1b2c3d4e5f6g7h8i9j0j9i8h7g6f5e4d3c2b1a"));
}