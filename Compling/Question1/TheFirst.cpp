
#include <iostream>
#include <math.h>

using namespace std;


#define f(x) (x*x*x)-(9*x*x)+(90/3.14159)
#define g(x) (3*x*x)-(18*x)

int bisection(double a, double b, double c)
{
    cout.precision(4);
    cout.setf(ios::fixed);
    float x0, x1, x, f0, f1, f, e;
    int step = 0;
    up:
    cout << "bisection's Method \n";
    x0 = a;
    x1 = b;
    e = c;

    f0 = f(x0);
    f1 = f(x1);


    if (f0 * f1 > 0.0)
    {
        cout << "Incorrect initial guesses." << endl;
        goto up;
    }
    do
    {

        x = (x0 + x1) / 2; //bisection formula
        f = f(x);

        cout << "x0= " << x0 << "     " << "x1= " << x1 << "     " << "x= " << x << "      f(x)= " << f(x) << endl;

        if (f0 * f < 0)
        {
            x1 = x;
        }
        else
        {
            x0 = x;
        }
        step = step + 1;
    } while (fabs(f) > e);

    cout << endl << "Root of the equation is: " << x;
    cout << endl << "Iterations number: " << step << endl;

    return 0;
}

int Secant(double a, double b, double c)
{
    cout.precision(4);  //set the precision example .0000
    cout.setf(ios::fixed); //formating fixing

    float x0, x1, x2, f0, f1, f2, e;
    int step = 0; //Interation number count starting

    cout << "Secant's Method \n";
    x0 = a;
    x1 = b;
    e = c;

    do
    {
        f0 = f(x0);
        f1 = f(x1);
        if (f0 == f1)
        {
            cout << "Mathematical Error.";
            exit(0);
        }

        x2 = x1 - (x1 - x0) * f1 / (f1 - f0); //Secant method formula
        f2 = f(x2);

        cout << "x0= " << x0 << "     " << "x1= " << x1 << "     " << "x2= " << x2 << "     " << "f(x2)= " << f(x2) << endl;

        x0 = x1;
        f0 = f1;
        x1 = x2;
        f1 = f2;

        step = step + 1;

    } while (fabs(f2) > e);

    cout << endl << "Root of the equation is: " << x2;
    cout << endl << "Iterations number: " << step << endl;

    return 0;
}

int Newton(double b, double c)
{
    float x0, x1, f0, f1, g0, e;
    int step = 1, N;

    /* Setting precision and writing floating point values in fixed-point notation. */

    cout << "Newton's Method \n";
    x0 = b;
    e = c;

    do
    {
        g0 = g(x0);
        f0 = f(x0);
        if (g0 == 0.0)
        {
            cout << "Mathematical Error.";
            exit(0);
        }


        x1 = x0 - f0 / g0;


        cout << "Iteration-" << step << ":\t x = " << x1 << " and f(x) = " << f(x1) << endl;
        x0 = x1;

        step = step + 1;

        f1 = f(x1);

    } while (fabs(f1) > e);

    cout << endl << "Root is: " << x1;
    return 0;
}

int main(int argc, char* argv[]) {
    if (argc != 4) {
        cout << "Invalid number of arguments." << endl;
        cout << "Usage: program_name initial_guess_1 initial_guess_2 tolerable_error" << endl;
        return 1;
    }
    
    double a = atof(argv[1]);
    double b = atof(argv[2]);
    double c = atof(argv[3]);
    
    bisection(a, b, c);
    Secant(a, b, c);
    Newton(b, c);
    
    return 0;
}
