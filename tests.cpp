#include <gtest/gtest.h>
#include "StringCalculator.h"
#include <stdexcept>

class StringCalculatorTest : public ::testing::Test {
protected:
    void SetUp() override {
        calculator = std::make_unique<StringCalculator>();
    }

    std::unique_ptr<StringCalculator> calculator;
};

TEST_F(StringCalculatorTest, EmptyStringReturnsZero) {
    // When I add ""
    int result = calculator->Add("");
    
    // Then the result should be 0
    EXPECT_EQ(0, result);
}

/* TEST_F(StringCalculatorTest, SingleZeroReturnsZero) {
    // When I add "0"
    int result = calculator->Add("0");
    
    // Then the result should be 0
    EXPECT_EQ(0, result);
}

TEST_F(StringCalculatorTest, SingleNumberReturnsThatNumber) {
    // When I add "1"
    int result = calculator->Add("1");
    
    // Then the result should be 1
    EXPECT_EQ(1, result);
}

TEST_F(StringCalculatorTest, MultipleNumbersWithCommaDelimiter) {
    // When I add "0,1,2"
    int result = calculator->Add("0,1,2");
    
    // Then the result should be 3
    EXPECT_EQ(3, result);
}

TEST_F(StringCalculatorTest, NumbersWithMixedDelimiters) {
    // When I add "1\n2,3"
    int result = calculator->Add("1\n2,3");
    
    // Then the result should be 6
    EXPECT_EQ(6, result);
}

TEST_F(StringCalculatorTest, CustomDelimiter) {
    // When I add "//;\n1;2"
    int result = calculator->Add("//;\n1;2");
    
    // Then the result should be 3
    EXPECT_EQ(3, result);
}

TEST_F(StringCalculatorTest, NegativeNumbersWithCommaDelimiterThrowException) {
    // When I add "1,-2,3"
    // Then it should throw an exception with message "negatives not allowed: -2"
    EXPECT_THROW({
        try {
            calculator->Add("1,-2,3");
        } catch (const std::invalid_argument& e) {
            EXPECT_STREQ("negatives not allowed: -2", e.what());
            throw;
        }
    }, std::invalid_argument);
}

TEST_F(StringCalculatorTest, NegativeNumbersWithMixedDelimitersThrowException) {
    // When I add "1\n-2,3"
    // Then it should throw an exception with message "negatives not allowed: -2"
    EXPECT_THROW({
        try {
            calculator->Add("1\n-2,3");
        } catch (const std::invalid_argument& e) {
            EXPECT_STREQ("negatives not allowed: -2", e.what());
            throw;
        }
    }, std::invalid_argument);
}

TEST_F(StringCalculatorTest, NegativeNumbersWithCustomDelimiterThrowException) {
    // When I add "//;\n1;-2;3"
    // Then it should throw an exception with message "negatives not allowed: -2"
    EXPECT_THROW({
        try {
            calculator->Add("//;\n1;-2;3");
        } catch (const std::invalid_argument& e) {
            EXPECT_STREQ("negatives not allowed: -2", e.what());
            throw;
        }
    }, std::invalid_argument);
}

TEST_F(StringCalculatorTest, NumbersGreaterThan1000AreIgnored) {
    // When I add "2,1001,6"
    int result = calculator->Add("2,1001,6");
    
    // Then the result should be 8
    EXPECT_EQ(8, result);
}

TEST_F(StringCalculatorTest, MultipleNegativesShowAllInExceptionMessage) {
    // When I add "1,-2,-3,4"
    // Then it should throw an exception with message "negatives not allowed: -2, -3"
    EXPECT_THROW({
        try {
            calculator->Add("1,-2,-3,4");
        } catch (const std::invalid_argument& e) {
            EXPECT_STREQ("negatives not allowed: -2, -3", e.what());
            throw;
        }
    }, std::invalid_argument);
}

TEST_F(StringCalculatorTest, MultiCharacterCustomDelimiter) {
    // When I add "//[***]\n1***2***3"
    int result = calculator->Add("//[***]\n1***2***3");
    
    // Then the result should be 6
    EXPECT_EQ(6, result);
} */

// Main function to run all tests
int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}