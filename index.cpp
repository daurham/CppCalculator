// This program is a simple C++ calculator that takes user input and
//  logs the response.
#include <iostream>

using namespace std;

int calculator(int a, string op, int b)
{
  int result = 0;

  // if exponent
  if (op == "^" || op == "**") {
    result = a ^ b;
    // else if multiplication
  }
  else if (op == "*" || op == "x") {
    result = a * b;
    // else if division
  }
  else if (op == "/") {
    result = a / b;
    // else if addition
  }
  else if (op == "+") {
    result = a + b;
    // else if subtraction
  }
  else if (op == "-") {
    result = a - b;
  }
  else {
    throw std::runtime_error("Invalid input");
  }
  return result;
}

int main()
{
  std::cout << "Welcome to your simple C++ Calculator!" << std::endl;

  int operand1;
  int operand2;
  string operator1;
  int result;

  std::cout << "Enter your first operand: ";
  std::cin >> operand1;

  std::cout << "Enter your operator: ";
  std::cin >> operator1;

  std::cout << "Enter your second operand: ";
  std::cin >> operand2;

  try {
    result = calculator(operand1, operator1, operand2);

    std::cout << operand1 << " " << operator1 << " " << operand2 << " = " << result << std::endl;
  }
  catch (const std::runtime_error &error) {
    std::cerr << "Error: " << error.what() << std::endl;
  }

  return 0;
}