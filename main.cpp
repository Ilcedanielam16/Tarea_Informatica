// <Ilce Daniela Morales Areaga, 1650521>
#include <iostream>
using namespace std;
int Inverso(int numero)
{
	int res;
	int invertir = 0;
	while (numero > 0 )
	{
		res = numero % 10;
		numero = numero / 10;
		invertir = invertir * 10 + res;

	}
	
	return invertir;
}
int main() {

	int numero;
	cout << "ingrese una cantidad que desea invertir" << endl;
	cin >> numero;

	cout << "El numero invertido es: " << Inverso(numero) << endl;

	
}
