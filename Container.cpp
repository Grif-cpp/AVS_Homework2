#include "Container.h"
#include<iostream>
//------------------------------------------------------------------------------
    // Инициализация контейнера
    void Container::Init() {
        len = 0;
    }

    //------------------------------------------------------------------------------
    // Очистка контейнера от элементов (освобождение памяти)
    void Container::Clear() {
        for (int i = 0; i < len; i++) {
            delete cont[i];
        }
        len = 0;
    }

    //------------------------------------------------------------------------------
    // Ввод содержимого контейнера из указанного потока
    void Container::In(ifstream& ifst) {
        while (!ifst.eof()) {
            int k;
            ifst >> k;
            Film* fl;
            if (k == 1) {
                fl = new Gaming();
            }
            else if (k == 2) {
                fl = new Cartoon();
            }
            else if (k == 3) {
                fl = new Documental();
            }
            cont[len] = fl;
            fl->In(ifst);
            len++;
        }
    }

    //------------------------------------------------------------------------------
    // Случайный ввод содержимого контейнера
    void Container::InRnd(int size) {
        while (len < size) {
            int k = rand() % 3 + 1;
            Film* fl;
            switch (k) {
            case 1:
                fl = new Gaming();
            case 2:
                fl = new Cartoon();
            case 3:
                fl = new Documental();
            }
            cont[len] = fl;
            fl->InRnd();
            len++;
        }
    }

    //------------------------------------------------------------------------------
    // Вывод содержимого контейнера в указанный поток
    void Container::Out(ofstream& ofst) {
        ofst << "Container contains " << len << " elements." << endl;
        for (int i = 0; i < len; i++) {
            ofst << i << ": ";
            (cont[i])->Out(ofst);
        }
    }

    //------------------------------------------------------------------------------
    // Сортировка контейнера по отношению даты фильма к длине его названия
    void Container::Film_sort() {
        int n = len;
        for (int i = 1; i < n; i++)
            for (int j = i; j > 0 && ((cont[j - 1]->value()) > (cont[j]->value())); j--)
                std::swap(cont[j - 1], cont[j]);
    }