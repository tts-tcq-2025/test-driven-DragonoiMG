#include "StringCalculator.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <numeric>


int sum_numbers(const std::string& numbers)
{
    std::vector<int> int_numbers;
    std::istringstream iss(numbers);
    std::string segment;
    int sum = 0;

    while (std::getline(iss, segment, ',')) {
        int_numbers.push_back(std::stoi(segment));
    }

    for(int i = 0; i < int_numbers.size(); i++)
    {
        sum = sum + int_numbers[i];
    }

    return sum;
}

int StringCalculator::Add(const std::string& numbers) {

    if (numbers.empty()) {
        return 0;
    }

    return sum_numbers(numbers);
}
