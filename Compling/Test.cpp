// calculation.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>

double calculate(double num1, double num2) {
    return (num1 + num2) * pow(num1, 2);
}

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Expected two arguments, but got " << (argc - 1) << std::endl;
        return 1;
    }
    double num1 = atof(argv[1]);
    double num2 = atof(argv[2]);
    if (num1 == 0 && argv[1][0] != '0') {
        std::cerr << "Failed to parse '" << argv[1] << "' as a number" << std::endl;
        return 1;
    }
    if (num2 == 0 && argv[2][0] != '0') {
        std::cerr << "Failed to parse '" << argv[2] << "' as a number" << std::endl;
        return 1;
    }
    double result = calculate(num1, num2);
    std::cout << result << std::endl;
    return 0;
}
