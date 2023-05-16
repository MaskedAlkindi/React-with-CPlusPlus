// calculation.cpp
#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

double compute_f(double x) {
    return pow(x, 2) + 5 * x - sqrt(abs(x));
}

double lagrange(double x, double x0, double x1) {
    if (x < x0 || x > x1) {
        cerr << "The inputted x does not fall between x0 and x1. Please try again.\n";
        exit(1);
    }

    double f0 = compute_f(x0);
    double f1 = compute_f(x1);
    return ((x - x1) / (x0 - x1)) * f0 + ((x - x0) / (x1 - x0)) * f1;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Expected three arguments, but got " << (argc - 1) << endl;
        return 1;
    }

    double x0 = atof(argv[1]);
    double x1 = atof(argv[2]);
    double x = atof(argv[3]);

    if (x0 == 0 && argv[1][0] != '0') {
        cerr << "Failed to parse '" << argv[1] << "' as a number" << endl;
        return 1;
    }

    if (x1 == 0 && argv[2][0] != '0') {
        cerr << "Failed to parse '" << argv[2] << "' as a number" << endl;
        return 1;
    }

    if (x == 0 && argv[3][0] != '0') {
        cerr << "Failed to parse '" << argv[3] << "' as a number" << endl;
        return 1;
    }

    double Lx = lagrange(x, x0, x1);

    cout << "The Lagrange approximation L(X) is: " << Lx << endl;

    return 0;
}
