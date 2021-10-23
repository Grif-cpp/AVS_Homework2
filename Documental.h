#ifndef __Documental__
#define __Documental__

#include"Film.h"

// Документальный фильм
class Documental: public Film {
public:
// Файловый ввод игрового фильма
	void In(ifstream& ifst) override;

// Случайный ввод игрового фильма
	void InRnd() override;

// Вывод параметров игрового фильма в форматируемый поток
	void Out(ofstream& ofst) override;
private:
	int length;
};
#endif