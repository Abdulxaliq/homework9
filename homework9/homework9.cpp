#include <iostream>

using namespace std;

int main()
{
	int sayi2 = 0;
	int reservednum2 = 0;
	int o_num2 = 0;
	int artiq2 = 0;
	cout << "eded daxil edin: ";
	cin >> sayi2;

	o_num2 = sayi2;

	do
	{
		artiq2 = sayi2 % 10;
		reservednum2 = reservednum2 * 10 + artiq2;
		sayi2 /= 10;
	} while (sayi2 != 0);
	cout << "ededin tersi" << reservednum2 << endl;
	return 0;
}