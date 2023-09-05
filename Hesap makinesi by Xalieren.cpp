#include <iostream>

using namespace std;

int main()
{
	int sayi1, sayi2;
	int sonuc;
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

	switch(islem){
		case "T":
			sonuc = sayi1 + sayi2;
			break;
		case "C":
			sonuc = sayi1 - sayi2;
			break;
		case "P":
			sonuc = sayi1 * sayi2;
			break;
		case "B":
			sonuc = sayi1 / sayi2;
			break;
		default:
			cout << "Lutfen programi yeniden baslatin!" << endl;
			exit();
			break;
	}
	
	cout << "Sonuc: " << sonuc << endl;
	cout << "by Xalieren" << endl;
	system("PAUSE");
	return 0;
}
