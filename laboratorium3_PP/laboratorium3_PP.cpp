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

//ZADANIE 2 - pominiete
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
	cout << endl << "Suma: " << c;
}
*/

//ZADANIE 5
/* #include <iostream>
using namespace std;
int main() {  
	int i = 0;
	while (1) {
		cout << i;
	}
	return 0;
}
*/

//ZADANIE 6 - pominiete
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
	cout << endl << "Suma: " << c;
}
*/

//ZADANIE 7 - nieskonczone
#include <iostream>
using namespace std;
int main() {
	char x;
	for (int i = 1; ; i++) {
		if (i % 2 == 1) {
			cout << endl << i;
		}
		if (i == 200) {
			cout << endl << "Czy przerwac dzialanie petli? ";
			cin >> x;
			if (x == 'tak') {
				return 0;;
			}
			else if (x == 'nie') {
				continue;
			}
			else {
				cout << "Podano zla odpowiedz. Przerywam petle. " << endl;
				return 0;
			}
			/*switch (x) {
			case 'tak':
				return 0;
			case 'nie':
				continue;
			default: {
				cout << "Podano zla odpowiedz. Przerywam petle. " << endl;
				break;
			}
			}*/
		}
	}
}


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