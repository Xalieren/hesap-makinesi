#include <iostream>

using namespace std;

int main()
{
	int anan1, anan2;
	char anan;
	cout << "Hesap makinesine hosgeldiniz!" << endl << "Birinci sayiyi giriniz: " << endl;
	cin >> anan1;
	cout << "Ikinci sayiyi giriniz: " << endl;
	cin >> anan2;
	cout << "T: Toplama" << endl;
	cout << "C: Cikartma" << endl;
	cout << "P: Carpma" << endl;
	cout << "B: Bolme" << endl;
	cout << "Islem seciniz: " << endl;
	cin >> anan;

	if (anan == 'T')
	{
		cout << "Sonuc: " << anan1 + anan2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (anan == 'C')
	{
		cout << "Sonuc: " << anan1 - anan2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (anan=='P')
	{
		cout << "Sonuc: " << anan1 * anan2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (anan == 'B')
	{
		cout << "Sonuc: " << anan1 / anan2 << endl;
		cout << "by Xalieren" << endl;
	}

	else
	{
		cout << "Lutfen programi yeniden baslatin!" << endl;
		cout << "by Xalieren" << endl;
	}
	system("PAUSE");
	return 0;
}
