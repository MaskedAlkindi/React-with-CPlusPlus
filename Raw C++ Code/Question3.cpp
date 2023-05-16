
#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {    // define the function to be integrated
    return sin(x) - exp(x);
}

double trapezoidal(double a, double b, int n) {    // trapezoidal rule
    double h = (b - a) / n;    // subinterval width
    double sum = f(a) + f(b);    // first and last terms of the sum
    for (int i = 1; i < n; i++) {
        double x = a + i*h;

        sum += 2*f(x);    // add 2 times the odd terms
        cout << "x = " << x << "  , 2*f(x) = " << 2*f(x) << endl;
    }
    return h*sum/2;
}

double simpson(double a, double b, int n) {    // Simpson's rule
    double h = (b - a) / n;    // subinterval width
    double sum = f(a) + f(b);    // first and last terms of the sum
    cout << "x = 5,  f(x): " << f(0) << "\n";
    for (int i = 1; i < n; i++) {
        double x = a + i*h;
        if (i % 2 == 0) {
            sum += 2*f(x);    // add 2 times the even terms
            cout << "x =  "<< x << "  2*f(x)" << 2*f(x) <<  "\n";
        } else {
            sum += 4*f(x);    // add 4 times the odd terms
            cout << "x =  "<< x << "  4*f(x)" << 4*f(x) <<  "\n";
        }
    }
    return h*sum/3;
}

int main() {
    // get input values from user
    double a, b;    // interval [a,b]
    int n;    // number of subintervals
    cout << "Enter the interval [a]:";
    cin >> a;
    cout << "Enter the interval [b]:";
    cin >> b;
    cout << "Enter the number [n]:";
    cin >> n;
    // calculate and display results for trapezoidal rule
    double I_trapezoidal = trapezoidal(a, b, n);
    double error_trapezoidal = abs(I_trapezoidal - (-cos(b) + cos(a)));    // exact value of integral is -cos(b) + cos(a)
    cout << "Trapezoidal Rule:" << endl;
    cout << "I = " << I_trapezoidal << endl;
    cout << "Error = " << error_trapezoidal << endl;

    // calculate and display results for Simpson's rule
    double I_simpson = simpson(a, b, n);
    double error_simpson = abs(I_simpson - (-cos(b) + cos(a)));    // exact value of integral is -cos(b) + cos(a)
    cout << "Simpson's Rule:" << endl;
    cout << "I = " << I_simpson << endl;
    cout << "Error = " << error_simpson << endl;

    return 0;
}
