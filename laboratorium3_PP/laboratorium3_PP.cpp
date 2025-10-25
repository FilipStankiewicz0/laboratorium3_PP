//ZADANIE 1

/* #include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Podaj wartosc liczby a: ";
	cin >> a;
	cout << endl << "Podaj wartosc liczby b: ";
	cin >> b;

	if (a > b) {
		cout << endl << "Liczba a jest wieksza od liczby b. " << endl;
	}
	else if (a < b) {
		cout << endl << "Liczba b jest wieksza od liczby a. " << endl;
	}
	else {
		cout << endl << "Liczby sa rowne. " << endl;
	}
}
*/

//ZADANIE 2
/* #include <iostream>
using namespace std;
int main() {
	int a, b;
	cout << "Podaj wartosc liczby a: ";
	cin >> a;
	cout << endl << "Podaj wartosc liczby b: ";
	cin >> b;

	if (a > b) {
		cout << endl << "Liczba a jest wieksza od liczby b. " << endl;
	}
	else {
		if (a < b) {
			cout << endl << "Liczba b jest wieksza od liczby a. " << endl;
		}
		else {
			cout << endl << "Liczby sa rowne. " << endl;
		}
	}
}
*/

//ZADANIE 3 
/* #include <iostream>
using namespace std;
int main() {
	float r;
	cout << "Podaj wartosc wspolczynnika r (0-1): ";
	cin >> r;

	if (r <= 1 && r >= 0.7) {
		cout << endl << "Bardzo silna korelacja dodatnia. ";
	}
	else if (r < 0.7 && r >= 0.5) {
		cout << endl << "Silna korelacja dodatnia. ";
	}
	else if (r < 0.5 && r >= 0.3) {
		cout << endl << "Umiarkowana korelacja dodatnia. ";
	}
	else if (r < 0.3 && r >= 0.2) {
		cout << endl << "Slaba korelacja dodatnia. ";
	}
	else if (r < 0.2 && r >= 0.0) {
		cout << endl << "Brak korelacji. ";
	}
	else {
		cout << endl << "Podano zla wartosc. ";
	}
}
*/

//ZADANIE 4
/* #include <iostream>
using namespace std;
int main() {
	float a, b, c;
	char dzialanie;
	cout << "Podaj wartosc liczby zmiennoprzecinkowej a: ";
	cin >> a;
	cout << endl << "Podaj znak dzialania: ";
	cin >> dzialanie;
	cout << endl << "Podaj wartosc liczby zmiennoprzecinkowej b: ";
	cin >> b;


	if (dzialanie == '+') {
		c = a + b;
	}
	else if (dzialanie == '-') {
		c = a - b;
	}
	else if (dzialanie == '*') {
		c = a * b;
	}
	else if (dzialanie == '/') {
		if (b == 0) {
			cout << endl << "Nie mozna dzielic przez 0!";
			return 0;
		}
		c = a / b;
	}
	else {
		cout << endl << "Niepoprawne dzialanie. ";
	}
	cout << endl << "Wynik: " << c;
}
*/

//ZADANIE 5
/* #include <iostream>
using namespace std;
int main() {  
	int i = 0;
	bool a = true;
	while (a) {
		cout << i << endl;
		i++;
	}
	return 0;
}
*/


//ZADANIE 6
/* #include <iostream>
using namespace std;
int main() {
	float a, b, c;
	int i = 0; // program pyta czy zakonczyc dzialanie pomimo blednego dzialania lub dzielenia przez 0
	string x;
	char dzialanie;

	while (1) {
		if (i > 0) {
			cout << endl << "Czy zakonczyc swoje dzialanie? ";
			cin >> x;
			if (x == "tak") {
				return 0;
			}
			else if (x == "nie") {
				i = 0;
				continue;
			}
			else {
				cout << "Podano zla odpowiedz. Przerywam petle. " << endl;
				return 0;
			}
		}
		i++;

		cout << endl << "Podaj wartosc liczby zmiennoprzecinkowej a: ";
		cin >> a;
		cout << endl << "Podaj znak dzialania: ";
		cin >> dzialanie;
		cout << endl << "Podaj wartosc liczby zmiennoprzecinkowej b: ";
		cin >> b;


		if (dzialanie == '+') {
			c = a + b;
		}
		else if (dzialanie == '-') {
			c = a - b;
		}
		else if (dzialanie == '*') {
			c = a * b;
		}
		else if (dzialanie == '/') {
			if (b == 0) {
				cout << endl << "Nie mozna dzielic przez 0!" << endl;
				continue;
			}
			c = a / b;
		}
		else {
			cout << endl << "Niepoprawne dzialanie. ";
			continue;
		}
		cout << endl << "Wynik: " << c << endl;
	}
}
*/ 


//ZADANIE 7
/* #include <iostream>
using namespace std;
int main() {
	string x;
	for (int i = 1; ; i++) {
		if (i % 2 == 1) {
			cout << endl << i;
		}
		if (i == 200) {
			cout << endl << "Czy przerwac dzialanie petli? ";
			cin >> x;
			if (x == "tak") {
				return 0;
			}
			else if (x == "nie") {
				// i = 1;    -jesli petla ma sie resetowac po pytaniu
				continue;
			}
			else {
				cout << "Podano zla odpowiedz. Przerywam petle. " << endl;
				return 0;
			}
		}
	}
}
*/

//ZADANIE 8
/* #include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n, d;
	cout << "Podaj liczbe n: ";
	cin >> n;

	for (d = 2; d <= sqrt(n); d++) {
		if (n % d == 0) {
			cout << endl << "Znaleziono dzielnik: " << d;
			break;
		}
		else
			continue;
	}
}
*/