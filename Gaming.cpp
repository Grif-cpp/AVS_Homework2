#include "Gaming.h"
#include<iostream>
	// Файловый ввод игрового фильма
	void Gaming::In(ifstream& ifst) {
		ifst >> name_length;
		for (int i = 0; i < name_length; i++) {
			ifst >> name[i];
		}
		ifst >> date;

		ifst >> len;
		for (int i = 0; i < len; i++) {
			ifst >> producer[i];
		}
	}

	// Случайный ввод игрового фильма
	void Gaming::InRnd() {
		name_length = rand() % 20 + 1;
		for (int i = 0; i < name_length; i++) {
			name[i] = rand() % 26 + 'a';
		}
		date = rand() % 100 + 1920;
		len = rand() % 9 + 1;
		for (int i = 0; i < len; i++) {
			producer[i] = rand() % ('z' - 'a') + 'a';
		}
	}

	// Вывод параметров игрового фильма в форматируемый поток
	void Gaming::Out(ofstream& ofst) {
		ofst << "Film name: " << name
			<< "  Date of film: " << date << ' ';
		ofst << "It is Gaming film: producer = ";
		for (int i = 0; i < len; i++) {
			ofst << producer[i];
		}
		ofst << "\n";
	}