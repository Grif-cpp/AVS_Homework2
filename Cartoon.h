#ifndef __Cartoon__
#define __Cartoon__

#include"Film.h"
using namespace std;

// Мультфильм
class Cartoon: public Film {
public:
	// Файловый ввод мультфильма
	void In(ifstream& ifst) override;

// Случайный ввод мультфильма
	void InRnd() override;

// Сортировка контейнера по отношению даты фильма к длине его названия
	void Out(ofstream& ofst) override;
private:
	enum Type_of_cartoon { DRAWN, DOLLHOUSE, PLASTILINE };
	Type_of_cartoon type;
};

#endif