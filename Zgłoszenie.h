#include <iostream>
#include <string>
#include "Klient.h"

using namespace std;

class Zgłoszenie :public Klient
{

	static int Id_zgłoszenia;
	string opis;
public:
	Zgłoszenie();
	void opisz_zdarzenie();
};


