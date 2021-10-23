#include "Cartoon.h"
#include<iostream>
	// Файловый ввод мультфильма
	void Cartoon::In(ifstream& ifst) {
		ifst >> name_length;
		for (int i = 0; i < name_length; i++) {
			ifst >> name[i];
		}
			ifst >> date;
		int t;
		ifst >> t;
		switch (t) {
		case 1:
			type = DRAWN;
			break;
		case 2:
			type = DOLLHOUSE;
			break;
		case 3:
			type = PLASTILINE;
			break;
		}
	}

	// Случайный ввод мультфильма
	void Cartoon::InRnd() {
		name_length = rand() % 20 + 1;
		for (int i = 0; i < name_length; i++) {
			name[i] = rand() % 26 + 'a';
		}
		int t = rand() % 3 + 1;
		switch (t) {
		case 1:
			type = DRAWN;
			break;
		case 2:
			type = DOLLHOUSE;
			break;
		case 3:
			type = PLASTILINE;
			break;
		}
	}

	// Вывод параметров мультфильма в форматируемый поток
	void Cartoon::Out(ofstream& ofst) {
		ofst << "Film name: " << name
			<< "  Date of film: " << date << ' ';
		ofst << "Type of Cartoon: ";
		switch (type) {
		case DRAWN:
			ofst << "drawn \n";
			break;
		case DOLLHOUSE:
			ofst << "dollhouse \n";
			break;
		case PLASTILINE:
			ofst << "plastiline \n";
			break;
		}
	}