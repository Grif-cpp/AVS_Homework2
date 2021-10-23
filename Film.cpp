#include "Film.h"
//// Ввод фильма
//    virtual Film::Film* In(ifstream& ifdt) = 0;
//
//    // Случайный ввод фильма
//    virtual Film::Film* InRnd() = 0;
//
//    // Вывод фильма
//    virtual Film::void Out(ofstream& ofst) = 0;

    // Вычисление отношения даты к длине названия фильма 
    double Film::value() {
        return (double(date) / double(name_length));
    }