#include<iostream>
#include<exception>
//untuk objek exception yang akan digunakan
#include<array>//untuk objek array yang akan kita gunakan
using namespace std;

int main() {
	cout << "Awal Program" << endl;//penanda 1...
	try {
		array<int, 3>data = { 1,2,3 };
		//pesan array integer 3 element
		//cout<<data.at(5)<<endl;
		//memanggil array elemntke 5
	}
	catch (exception& e) {
		//perangkap menggunakan objek exception
		cout << e.what() << endl;
		/*akan dieksekusi karena array data hanya memiliki 3 element*/
	}
	cout << "Baris program yang terakhir" << endl;
}