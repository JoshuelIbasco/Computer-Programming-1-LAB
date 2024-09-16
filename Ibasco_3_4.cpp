#include <iostream>
using namespace std;

int main()
{
	double peso, dollar, euro, yuan, koruna, krone, shegel, dinar;
	cout << "Enter Philippine peso: ";
	cin >> peso;
	
	dollar = peso / 43.33089;
	euro = dollar * 0.734719;
	yuan = dollar * 6.346934;
	koruna = dollar * 18.77263;
	krone = dollar * 5.449007;
	shegel = dollar * 3.726334;
	dinar = dollar * 0.274588;

	cout << "This amount\'s equivalent to: \n";
	cout << "US\t:\t" << dollar << endl;
	cout << "Euro\t:\t" << euro << endl;
	cout << "Yuan\t:\t" << yuan << endl;
	cout << "Koruna\t:\t" << koruna << endl;
	cout << "Krone\t:\t" << krone << endl;
	cout << "Shegel\t:\t" << shegel << endl;
	cout << "Dinar\t:\t" << dinar << endl;
	return 0;
}
