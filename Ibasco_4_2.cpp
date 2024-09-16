#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string date, ID, name;
    float salary, late, tax, hourly, LateSolved, TotalDeduct, net;
    const float health = 1000;
    const float ibig = 800;
    const float sss = 1200;
    
    cout << "Payroll Period: ";
    getline (cin, date);
    
    cout << "Employee ID: ";
    getline (cin, ID);
    
    cout << "Employee name: ";
    getline (cin, name);
    
    cout << "Monthly Salary: ";
    cin >> salary;
    
    cout << "Lates and absences: ";
    cin >> late;
    cout << "\v";
        
    cout << fixed << setprecision(2);
    
    cout << setw(53) << "FEU-Institute of Technology\n" << endl;
    cout << "Employee ID: " << ID << setw(39) << "Payroll Period: " << date << endl;
    cout << "Employee name: " << name << endl;
    cout << "\nINCOME" << setw(49) << "DEDUCTIONS" << endl;
    
    
    late /= 60;
    hourly = (salary / 30) / 8;
    LateSolved = hourly * late;
    tax = salary * 0.12;
    TotalDeduct = LateSolved + health + ibig + sss + tax;
    net = salary - TotalDeduct;
    
    cout << "Monthly Salary Php " << salary << setw(38) << "Lates and absences\t " << LateSolved << endl;
    cout << setw(58) << "Philhealth\t\t " << health << endl;
    cout << setw(56) << "Pag-ibig\t\t " << ibig << endl;
    cout << setw(51) << "SSS\t\t " << sss << endl;
    cout << setw(60) << "Witholding tax\t" << tax << endl;
    
    
    cout << "Total Earnings: " << salary << endl;
    cout << "Total Deductions: " << TotalDeduct << endl;
    cout << "Net Pay: " << net;
    
    
    return 0;
}
