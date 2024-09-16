/* 
square root a^2 + b^2 - 2ab cos




*/ 


#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    double a, b, angle;
    
    cout << "Give side a: " << endl;
    cin >> a;
    cout << "Give side b: " << endl;
    cin >> b;
    cout << "Give angle C: " << endl; 
    cin >> angle;
    
    double sign = cos(angle);
    
    double sideC2 = 2 * a * b * sign;
    double sideC1 = (a*a) + b*b - sideC2;
    double sideC = sqrt(sideC1);
    cout << "The answer is: " << sideC;
    
    return 0;
}