#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>

using namespace std;

int main()
{
    string name, term, SY, collegeProg, level, studentNum;
    int unit;
    
    cout << "Enter Name (Last name, First name, Middle name): ";
    getline(cin, name);
    cout << "Enter Student Number: ";
    getline(cin, studentNum);
    cout << "Enter Term: ";
    getline(cin, term);
    cout << "Enter School Year: ";
    getline(cin, SY);
    cout << "Enter College Program: ";
    getline(cin, collegeProg);
    cout << "Enter Year level: ";
    getline(cin, level);
    cout << "Enter number of Units: ";
    cin >> unit;
    system("cls");
    
    cout << "ENROLLMENT STATUS: Enrolled\n" << endl;
    cout << "Term: " << term << setw(15) << "School Year: " << SY << endl << endl;
    
    cout << "Student #: " << studentNum << setw(83) << "College   : COMPUTER STUDIES" << setw(11) << "Program: " << collegeProg << endl;
    cout << "Name     : " << name << setw(56) << "Year Level: " << level << setw(16) << " 1st term, SY " << SY << "\n" << endl;
    
    cout << "Courses" << setw(30) << "Title" << setw(30) << "Section" << setw(15) << "Units" << setw(15) << "Days" << setw(30) << "Time" << setw(30) << "Room" << endl;
   
    cout << "CCS0001" << setw(37) << "INTRODUCTION TO COMPUTING (LEC)" << setw(21) << "TN05" << setw(15) << "2" << setw(15) << "T"; 
    cout << setw(38) << "07:00:00-09:40:00" << setw(25) << "Online" << endl;
    cout << "CCS0001L" << setw(36) << "INTRODUCTION TO COMPUTING (LAB)" << setw(21) << "TN05" << setw(15) << "1" << setw(15) << "W"; 
    cout << setw(38) << "07:00:00-09:50:00" << setw(24) << "E401" << endl;
    cout << "CCS0003" << setw(34) << "COMPUTER PROGRAMMING 1 (LEC)" << setw(24) << "TN05" << setw(15) << "2" << setw(15) << "F"; 
    cout << setw(38) << "07:00:00-09:40:00" << setw(25) << "Online" << endl;
    cout << "CCS0003L" << setw(33) << "COMPUTER PROGRAMMING 1 (LAB)" << setw(24) << "TN05" << setw(15) << "1" << setw(15) << "M"; 
    cout << setw(38) << "07:00:00-09:50:00" << setw(24) << "E401" << endl;
    cout << "GED0004" << setw(26) << "PHYSICAL EDUCATION 1" << setw(32) << "TN05" << setw(15) << "2" << setw(17) << "S / W"; 
    cout << setw(46) << "13:00:00-14:50:00 / 13:00:00-14:50:00" << setw(16) << "F301/F301" << endl;
    cout << "GED0006" << setw(45) << "PERSONAL AND PROFESSIONAL EFFECTIVENESS" << setw(13) << "TN05" << setw(15) << "2" << setw(17) << "F / T"; 
    cout << setw(46) << "11:00:00-12:20:00 / 11:00:00-12:20:00" << setw(18) << "Online/Online" << endl;
    cout << "GED0009" << setw(36) << "READINGS IN PHILIPPINE HISTORY" << setw(22) << "TN05" << setw(15) << "2" << setw(17) << "S / W"; 
    cout << setw(46) << "11:00:00-12:50:00 / 11:00:00-12:50:00" << setw(16) << "F505/F505" << endl;
    cout << "GED0011" << setw(37) << "SCIENCE, TECHNOLOGY AND SOCIETY" << setw(21) << "TN05" << setw(15) << "2" << setw(17) << "F / T"; 
    cout << setw(46) << "13:00:00-14:50:00 / 13:00:00-14:50:00" << setw(18) << "Online/Online" << endl;
    cout << "Total Units: " << unit << "\n" << endl;
    
    cout << fixed << setprecision(2);
    double tuitionFee = 2058 * unit;
    const float misc = 9865;
    const float admissionFee = 500;
    const float labFee = 3914;
    const float idFee = 380;
    const float installFee = 500;
    double totalFee = tuitionFee + misc + admissionFee + labFee * 2;
    
    
    cout << "Tuition Fee(" << unit << ")" << setw(125) << "" << tuitionFee << endl;
    cout << "Miscellaneous Fee " << setw(122) << "" << misc << endl;
    cout << "Admission Fee" << setw(127) << "" << admissionFee << endl;
    cout << "ITE Computer Laboratory Fee (CCS0003)" << setw(103) << "" << labFee << endl;
    cout << "ITE Computer Laboratory Fee (CCS0001)" << setw(103) << "" << labFee << endl;
    cout << "TOTAL ASSESSMENT" << setw(124) << "" << totalFee << "\n" << endl;
    
    double discounted = totalFee * 0.75;
    double netTotal = totalFee - discounted;
    double totalAmnt = netTotal + idFee;
    cout << "Presidents Scholar with High Honors (75% of Tuition and Miscelleneous Fee)" << setw(66) << "(" << discounted << ")" << "\n" << endl;
    cout << "NET TOTAL ASSESSEMENT" << setw(119) << "" << netTotal << "\n" << endl;
    cout << "ID Fee" << setw(134) << "" << idFee << endl;
    cout << "TOTAL AMOUNT" << setw(128) << "" << totalAmnt << "\n" << endl << endl;
    
    double downPay = totalAmnt * 0.4;
    double midTerm = totalAmnt * 0.3;
    double final = totalAmnt * 0.3;
    
    cout << "Down Payment (Upon Enrollment) 40%" << setw(106) << "" << downPay << endl;
    cout << "Midterm (Oct 14 - Oct 16 2024) 30%" << setw(106) << "" << midTerm << endl;
    cout << "Final (Nov 29 - Dec 04 2024) 30%" << setw(108) << "" << final << endl;
    cout << "Add on: Installment Fee" << setw(117) << "" << installFee << endl;
    
    return 0;
}
