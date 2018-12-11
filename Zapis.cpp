#include "Zapis.h"


void Zapis::save(Klient* k, Polisa* p, Zgłoszenie* z) {
	ofstream plik;

	plik.open("Baza.txt", ios::in | ios::app);
	plik << k->imie << setw(15) << right << k->nazwisko << setw(15) << right << p->numer << setw(10) << right <<p->data << setw(15) << right << p->zawartosc <<setw(6)<<right <<z->Id_zgłoszenia<< setw(10)<<right << z->opis <<setw(50)<<right<<endl;

	plik.close();
}