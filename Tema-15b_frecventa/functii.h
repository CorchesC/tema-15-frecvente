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