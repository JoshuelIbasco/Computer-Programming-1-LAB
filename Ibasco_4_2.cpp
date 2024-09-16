/* 
lates and absences - convert minutes to hours (divide by 60)
2250 minutes?





codes to be used:
    string date, ID, name;
    float salary, late;
    
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


    cout << "Employee ID: " << ID << "\tPayroll Period: " << date << endl;
    cout << "Employee name: " << name << endl;
    cout << "\nINCOME\t\tDEDUCTIONS";
    cout << "Monthly Salary Php" << salary;
    
cout << "\t\tFEU-Institute of Technology";

*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    string date, ID, name;
    float salary, late, health, ibig, sss, tax;
    health = 1000;
    ibig = 800;
    sss = 1200;
    
    
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
    
    
    cout << setw(44) << "FEU-Institute of Technology" << endl;
    cout << "Employee ID: " << ID << setw(47) << "Payroll Period: " << date << endl;
    cout << "Employee name: " << name << endl;
    cout << "\nINCOME" << setw(49) << "DEDUCTIONS" << endl;
    cout << "Monthly Salary Php " << salary << setw(45) << "Lates and absences\t " << late << endl;
    cout << setw(57) << "Philhealth\t " << health << endl;
    cout << setw(55) << "Pag-ibig\t " << ibig << endl;
    cout << setw(50) << "SSS\t " << sss << endl;
    cout << setw(61) << "Witholding tax\t " << endl;
    
    cout << "Total Earnings: " << endl;
    cout << "Total Deductions: " << endl;
    cout << "Net Pay: ";
    
    
    return 0;
}