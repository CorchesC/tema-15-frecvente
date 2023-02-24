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
//ex2 \/
void sol3() {
	//2a) Cate cifre din fiecare are nr citit?
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	frecventaCifreAlNr(n);
}
void sol4() {
	//2b) Care sunt cifrele care apar de mai mult de k ori in numarul citit (k citit de la tastatura).
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	cout << "Introduceti k: " << endl;
	int k;
	cin >> k;
	cifreCareAparMaiMultDeKOri(n, k);
}
void sol5() {
	//2c) Realizati cel mai mic numar din cifrele impare care nu apar in numarul citit.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nr = numarDinFrecventaSol5(n);
	cout << "Numarul nou formant din cifrele impare care nu apar in numarul citit este: " << nr << endl;
}
void sol6() {
	//2d) Realizati cel mai mare numar care se poate forma din cifrele ce apar in numarul citit luate de maxim 2 ori.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nr = numarDinFrecventaSol6(n);
	cout << "Numarul maxim format din cifrele ce apar in numarul citit luate de maxim 2 ori este: " << nr << endl;
}
void sol7() {
	//2e) Care este numarul minim de cifre care ar trebui sa le mai adaugam numarului citit, astfel incat numarul rezultat sa aibe exact acelasi numar de cifre din fiecare. //?
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nrn = rezolvareSol7(n);
	cout << "Numarul minim de cifre care ar trebui sa le mai adaugam numarului citit, astfel incat numarul rezultat sa aibe exact acelasi numar de cifre din fiecare este: " << nrn << endl;
}
void sol8() {
	//2f) Realizati un nou vector care sa contina toate cifrele prime ce nu apar in numarul initial.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int v[100], d = 0;
	vectorNouSOol8(n, v, d);
	afisare(v, d);
}
void sol9() {
	//2g) Realizati cel mai mic numar ce se poate forma din cifrele numarului initial, fara cifra 0.
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int nr = nrMinNouSol9(n);
	cout << "Numarul minim format ce se poate forma din cifrele numarului initial, fara cifra 0 este " << nr << endl;
}