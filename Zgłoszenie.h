#include <iostream>
#include <string>
#include "Klient.h"


using namespace std;

class Zgłoszenie 
{

	static int Id_zgłoszenia;
	string opis;
public:
	Zgłoszenie();
	void opisz_zdarzenie();
	friend class Zapis;
};


