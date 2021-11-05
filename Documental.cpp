#include "Documental.h"
#include<iostream>
// Файловый ввод документального фильма
	void Documental::In(ifstream& ifst) {
		ifst >> name_length;
		for (int i = 0; i < name_length; i++) {
			ifst >> name[i];
		}
		ifst >> date;
		ifst >> length;
	}

	// Случайный ввод доументального фильма
	void Documental::InRnd() {
		name_length = rand() % 28 + 1;
		for (int i = 0; i < name_length; i++) {
			name[i] = rand() % 26 + 'a';
		}
		date = rand() % 100 + 1920;

		length = rand() % 120 + 40;
	}

	// Вывод параметров документального фильма в форматируемый поток
	void Documental::Out(ofstream& ofst) {
		ofst << "Film name: " << name
			<< "  Date of film: " << date << ' ';
		ofst << "It's Documental film: length of film in minutes = " << length
			<< "\n";
	}
