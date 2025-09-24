#include "StringCalculator.h"
#include <iostream>
#include <cassert>
#include <string>

// Simple test framework
int test_count = 0;
int test_passed = 0;

void ASSERT_EQ(int expected, int actual, const std::string& test_name) {
    test_count++;
    if (expected == actual) {
        test_passed++;
        std::cout << "PASS: " << test_name << std::endl;
    } else {
        std::cout << "FAIL: " << test_name << " - Expected: " << expected << ", Got: " << actual << std::endl;
    }
}

void run_tests() {
    StringCalculator calculator;
    
    // Test 1: Empty string returns zero
    ASSERT_EQ(0, calculator.Add(""), "Empty string returns zero");
    
    // Test 2: Single zero returns zero
    ASSERT_EQ(0, calculator.Add("0"), "Single zero returns zero");
    
    // Test 3: Single number returns that number
    ASSERT_EQ(1, calculator.Add("1"), "Single number returns that number");

    // Test 4: Multiple numbers with comma
    ASSERT_EQ(3, calculator.Add("0,1,2"), "Multiple numbers with comma");
    
    std::cout << "\nTest Results: " << test_passed << "/" << test_count << " tests passed" << std::endl;
    if (test_passed == test_count) {
        std::cout << "All tests passed!" << std::endl;
    }
}

int main() {
    std::cout << "Running StringCalculator Tests..." << std::endl;
    run_tests();
    return 0;
}
