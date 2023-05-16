#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

double f(double x) {    
    return sin(x);
}

double trapezoidal(double a, double b, int n) {    
    double h = (b - a) / n;    
    double sum = f(a) + f(b);    
    for (int i = 1; i < n; i++) {
        double x = a + i*h;
        sum += 2*f(x);    
    }
    return h*sum/2;
}

double simpson(double a, double b, int n) {    
    double h = (b - a) / n;    
    double sum = f(a) + f(b);    
    for (int i = 1; i < n; i++) {
        double x = a + i*h;
        if (i % 2 == 0) {
            sum += 2*f(x);    
        } else {
            sum += 4*f(x);    
        }
    }
    return h*sum/3;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cerr << "Expected three arguments, but got " << (argc - 1) << endl;
        return 1;
    }
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    int n = atoi(argv[3]);

    double I_trapezoidal = trapezoidal(a, b, n);
    double error_trapezoidal = abs(I_trapezoidal - (-cos(b) + cos(a)));
    cout << "Trapezoidal Rule:" << endl;
    cout << "I = " << I_trapezoidal << endl;
    cout << "Error = " << error_trapezoidal << endl;

    double I_simpson = simpson(a, b, n);
    double error_simpson = abs(I_simpson - (-cos(b) + cos(a)));
    cout << "Simpson's Rule:" << endl;
    cout << "I = " << I_simpson << endl;
    cout << "Error = " << error_simpson << endl;

    return 0;
}
