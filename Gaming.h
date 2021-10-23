#ifndef __Gaming__
#define __Gaming__

#include"Film.h"
// Игровой фильм.
class Gaming: public Film {
public:
// Файловый ввод игрового фильма
	void In(ifstream& ifst) override;

// Случайный ввод игрового фильма
	void InRnd() override;

// Вывод параметров игрового фильма в форматируемый поток
	void Out(ofstream& ofst) override;
private:
	char producer[30];
	int len;
};

#endif