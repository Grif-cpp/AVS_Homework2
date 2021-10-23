#ifndef __Container__
#define __Container__

#include "Cartoon.h"
#include "Documental.h"
#include "Gaming.h"
//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class Container {
public:
    // Инициализация контейнера
    void Init();

    // Очистка контейнера от элементов (освобождение памяти)
    void Clear();

    // Ввод содержимого контейнера из указанного потока
    void In(ifstream& ifst);

    // Случайный ввод содержимого контейнера
    void InRnd(int size);

    // Вывод содержимого контейнера в указанный поток
    void Out(ofstream& ofst);

    // Сортировка контейнера по отношению даты фильма к длине его названия
    void Film_sort();
private:
    enum { max_len = 10000 }; // максимальная длина
    int len; // текущая длина
    Film *cont[max_len];
};

#endif