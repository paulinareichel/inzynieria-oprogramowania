#pragma once
#include "Klient.h"
#include "Polisa.h"
#include "Zgłoszenie.h"
#include <fstream>
#include <iomanip>
using namespace std;

class Zapis
{
public:
	static void save(Klient*, Polisa*, Zgłoszenie*);
	//friend class Klient;
};

