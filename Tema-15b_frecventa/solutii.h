#pragma once
#include "functii.h"
using namespace std;

//ex1 \/
void sol1() {
	//1b) Sa se afiseze cifra ce are frecventa cea mai mica, respectiv cea mai mare din vectorul citit.
	int v[100], d = 0;
	citire(v, d);
	frecventaMaxCifreVector(v, d);
}
void sol2() {
	//1d) Sa se afiseze toate cifrele care nu apar in elementele vectorului.
	int v[100], d = 0;
	citire(v, d);
	afisareCifreCareNuApar(v, d);
}