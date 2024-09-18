#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << "Day" << setw(14) << "Time" << setw(25) <<  " Course Code" << setw(15) << "Section" << setw(10) << "Room" << endl;
	cout << "Monday" << setw(16) << "7:00-9:50" << setw(17) << "CCS0003L" << setw(15) << "TN05" << setw(14) << "E401\n" << endl;
	
	cout << "Tuesday" << setw(15) << "7:00-9:40" << setw(16) << "CCS0001" << setw(16) << "TN05" << setw(15) << "Online" << endl;
	cout << setw(24) << "11:00-12:20" << setw(14) <<  "GED0006" << setw(16) << "TN05" << setw(15) << "Online" << endl;
	cout << setw(24) << "13:00-14:50" << setw(14) << "GED0011" << setw(16) << "TN05" << setw(16) << "Online\n" << endl;
	
	cout << "Wednesday" << setw(13) << "7:00-9:50" << setw(17) << "CCS0001L" << setw(15) << "TN05" << setw(13) << "E401" << endl;
	cout << setw(24) << "11:00-12:50" << setw(14) << "GED0009" << setw(16) << "TN05" << setw(13) << "F505" << endl;
	cout << setw(24) << "13:00-14:50" << setw(14) << "GED0004" << setw(16) << "TN05" << setw(14) << "F301\n" << endl;
	
	cout << "Friday" << setw(16) << "7:00-9:50" << setw(16) << "CCS0003" << setw(16) << "TN05" << setw(13) << "E401" << endl;
	cout << setw(24) << "11:00-12:50" << setw(14) << "GED0006" << setw(16) << "TN05" << setw(13) << "F505" << endl;
	cout << setw(24) << "13:00-14:50" << setw(14) << "GED0011" << setw(16) << "TN05" << setw(14) << "F301\n" << endl;
	
	cout << "Saturday" << setw(16) << "11:00-12:50" << setw(14) << "GED0009" << setw(16) << "TN05" << setw(13) << "E401" << endl;
	cout << setw(24) << "13:00-14:50" << setw(14) << "GED0004" << setw(16) << "TN05" << setw(13) << "F505" << endl;
	return 0;
}
