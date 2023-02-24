#pragma once
#include <iostream>
#include <fstream>
using namespace std;

void citire(int v[], int& dim) {

	ifstream f("numere.txt");

	f >> dim;
	for (int i = 0; i < dim; i++) {

		f >> v[i];
	}

	f.close();
}
void afisare(int v[], int dim) {
	for (int i = 0; i < dim; i++) {
		cout << v[i] << " ";
	}
	cout << endl;

}
void frecventaCifre(int f[], int nr) {
	while (nr != 0) {
		f[nr % 10]++;
		nr = nr / 10;
	}
}
void frecventaVector(int v[], int dim, int f[]) {
	for (int i = 0; i < dim; i++) {
		f[v[i]]++;
	}
}
void frecventaMaxCifreVector(int v[], int dim) {
	int max = -1;
	int min = 9999;
	int cMax = 0;
	int cMin = 0;
	int f[10]{};
	frecventaVector(v, dim, f);
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			if (f[i] > max) {
				max = v[i];
				cMax = i;
			}
			if (f[i] < min) {
				min = v[i];
				cMin = i;
			}
		}
	}
	cout << "Cifra cu frecventa maxima este: " << cMax << endl;
	cout << "Cifra cu frecventa minima este: " << cMin << endl;
}
void afisareCifreCareNuApar(int v[], int dim) {
	int f[10]{};
	frecventaVector(v, dim, f);
	cout << "Cifrele care nu apar in vector sunt: ";
	for (int i = 0; i < 10; i++) {
		if (f[i] == 0) {
			cout << i << ", ";
		}
	}
	cout << endl;
}
void frecventaCifreAlNr(int nr) {
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			cout << i << " apare de " << f[i] << " ori." << endl;
		}
	}
}
void cifreCareAparMaiMultDeKOri(int nr, int k) {
	int f[10]{};
	frecventaCifre(f, nr);
	cout << "Cifrele care apar mai mult de " << k << " ori:" << endl;
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			if (f[i] > k) {
				cout << "Cifra " <<i << " care apare de " << f[i] << " ori." << endl;
			}
		}
	}
}
int numarDinFrecventaSol5(int nr) {
	int nrNou = 0;
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		if (i % 2 != 0 && f[i] == 0) {
			nrNou = nrNou * 10 + i;
		}
	}
	return nrNou;
}
int oglindit(int n) {
	int ogl = 0;
	while (n != 0) {
		int cifra = n % 10;
		ogl = ogl * 10 + cifra;
		n = n / 10;
	}
	return ogl;
}
int numarDinFrecventaSol6(int nr) {
	int nrNou = 0;
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0 && f[i] >= 2) {
			nrNou = nrNou * 10 + i;
			nrNou = nrNou * 10 + i;
		}
		else if (f[i] != 0 && f[i] < 2) {
			nrNou = nrNou * 10 + i;
		}
	}
	int nrF = oglindit(nrNou);
	return nrF;
}
int frecventaMax(int nr) {
	int f[10]{};
	frecventaCifre(f, nr);
	int max = -1;
	int cMax = 0;
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			cout << f[i] << endl;
			if (f[i] > max) {
				max = f[i];
				cMax = i;
			}
		}
	}
	return cMax;
}
int rezolvareSol7(int nr) {
	int nrn = 0;
	int max = frecventaMax(nr);
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		int d = 0;
		if (f[i] != 0) {
			if (f[i] < max) {
				d = max - i;
				nrn = nrn + d;
			}
		}
	}
	return nrn;
}
bool nrPrim(int n) {
	int nrdiv = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			nrdiv++;
		}
	}
	if (nrdiv == 2) {
		return true;
	}
	else if (nrdiv != 2) {
		return false;
	}
}
void vectorNouSOol8(int nr, int v[], int& dim) {
	dim = 0;
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		int d = 0;
		if (f[i] == 0 && nrPrim(i) == true) {
			v[dim] = i;
			dim++;
		}
	}
}
int nrMinNouSol9(int nr) {
	int nrNou = 0;
	int f[10]{};
	frecventaCifre(f, nr);
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			nrNou = nrNou * 10 + i;
		}
	}
	return nrNou;
}
