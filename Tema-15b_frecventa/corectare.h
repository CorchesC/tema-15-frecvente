#pragma once
#include <iostream>
#include "functii.h"
using namespace std;

int pozMax(int v[], int dim) {
	int max = -1;
	int pMax = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] > max) {
			max = v[i];
			pMax = i;
		}
	}
	return pMax;
}
int pozMin(int v[], int dim) {
	int min = 99999999;
	int pMin = 0;
	for (int i = 0; i < dim; i++) {
		if (v[i] < min) {
			min = v[i];
			pMin = i;
		}
	}
	return pMin;
}
void cr7() {
	//2e) Care este numarul minim de cifre care ar trebui sa le mai adaugam numarului citit, astfel incat numarul rezultat sa aibe exact acelasi numar de cifre din fiecare. //?
	cout << "Introduceti numarul: " << endl;
	int n;
	cin >> n;
	int f[10]{};
	frecventaCifre(f, n);
	int cifra = pozMax(f, 10);
	int ct = 0;
	for (int i = 0; i < 10; i++) {
		if (f[i] != 0) {
			ct += f[cifra] - f[i];
		}
	}
	cout << ct << endl;
}