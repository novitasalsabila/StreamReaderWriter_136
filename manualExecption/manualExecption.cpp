#include<iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5; //melemparkan sebuah intger maka
		cout << "Peryataan akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok int akan dieksekusi
		cout << "Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		//jika slain integer maka block ini akan disematkan 
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}

