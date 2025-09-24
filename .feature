Feature: String Calculator
  As a developer
  I want a string calculator that can sum numbers from a string
  So that I can perform calculations with various input formats

  Background:
    Given I have a StringCalculator

  Scenario: Empty string returns zero
    When I add ""
    Then the result should be 0

  Scenario: Single zero returns zero
    When I add "0"
    Then the result should be 0

  Scenario: Single number returns that number
    When I add "1"
    Then the result should be 1

  Scenario: Multiple numbers with comma delimiter
    When I add "0,1,2"
    Then the result should be 3

  Scenario: Numbers with mixed delimiters (newline and comma)
    When I add "1\n2,3"
    Then the result should be 6

  Scenario: Custom delimiter
    When I add "//;\n1;2"
    Then the result should be 3

  Scenario: Negative numbers with comma delimiter throw exception
    When I add "1,-2,3"
    Then it should throw an exception with message "negatives not allowed: -2"

  Scenario: Negative numbers with mixed delimiters throw exception
    When I add "1\n-2,3"
    Then it should throw an exception with message "negatives not allowed: -2"

  Scenario: Negative numbers with custom delimiter throw exception
    When I add "//;\n1;-2;3"
    Then it should throw an exception with message "negatives not allowed: -2"

  Scenario: Numbers greater than 1000 are ignored
    When I add "2,1001,6"
    Then the result should be 8

  Scenario: Multiple negatives show all in exception message
    When I add "1,-2,-3,4"
    Then it should throw an exception with message "negatives not allowed: -2, -3"

  Scenario: Multi-character custom delimiter
    When I add "//[***]\n1***2***3"
    Then the result should be 6