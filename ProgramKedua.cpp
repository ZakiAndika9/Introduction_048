#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputData(){
	cout <<"Masukkan panjangnya:";
	cin >> panjang;

	cout <<"Masukkan lebarnya:";
	cin >> lebar;
}

float hitungluas(){
	luas = panjang * lebar;
	return luas;
}

float hitungluasBerparameter(float a, float b){
return luas = a * b;

}

void tampilkanluas()
{
	cout <<"luas persegi panjang" <<luas<<endl;
}

int main()
{
inputData();
// hitungluas();
hitungluasBerparameter(panjang, lebar);
tampilkanluas();
}
