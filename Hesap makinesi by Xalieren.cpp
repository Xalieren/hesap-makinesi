#include <iostream>

using namespace std;

int main()
{
	int sayi1, sayi2;
	char islem;
	cout << "Hesap makinesine hosgeldiniz!" << endl << "Birinci sayiyi giriniz: " << endl;
	cin >> sayi1;
	cout << "Ikinci sayiyi giriniz: " << endl;
	cin >> sayi2;
	cout << "T: Toplama" << endl;
	cout << "C: Cikartma" << endl;
	cout << "P: Carpma" << endl;
	cout << "B: Bolme" << endl;
	cout << "Islem seciniz: " << endl;
	cin >> islem;

	if (islem == 'T')
	{
		cout << "Sonuc: " << sayi1 + sayi2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (islem == 'C')
	{
		cout << "Sonuc: " << sayi1 - sayi2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (islem=='P')
	{
		cout << "Sonuc: " << sayi1 * sayi2 << endl;
		cout << "by Xalieren" << endl;
	}

	else if (islem == 'B')
	{
		cout << "Sonuc: " << sayi1 / sayi2 << endl;
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
