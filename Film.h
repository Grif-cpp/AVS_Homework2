#ifndef __Film__
#define __Film__
#include<cstdlib>
#include<fstream>
using namespace std;
//------------------------------------------------------------------------------
// класс, обобщающий все имеющиеся фильмы
class Film {
public:
// Ввод фильма
    virtual void In(ifstream& ifst) = 0;
//
//// Случайный ввод фильма
    virtual void InRnd() = 0;
//
//// Вывод фильма
    virtual void Out(ofstream& ofst) = 0;

// Вычисление отножения даты к длине названия фильма 
    double value();

public:  
    int name_length = 1;
    char name[30];
    int date = 1990;
};
#endif