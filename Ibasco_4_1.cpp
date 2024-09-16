#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double side1, side2, hypo;
    cout << "Enter the two sides of the triangle: " << endl;
    cin >> side1 >> side2;
    hypo = sqrt(pow(side1,2) + pow(side2,2));
    cout << "Hypotenuse: " << hypo << endl;
    
    return 0;
}
