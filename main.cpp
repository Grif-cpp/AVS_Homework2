#include <cstdlib>
#include <iostream>
#include <ctime>
#include <cstring>
#include <time.h>
#include "Container.h"
using namespace std;

void errMessage1() {
    cout << "incorrect command line!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}

void errMessage2() {
    cout << "incorrect qualifier value!\n"
        "  Waited:\n"
        "     command -f infile outfile01 outfile02\n"
        "  Or:\n"
        "     command -n number outfile01 outfile02\n";
}


int main(int argc, char* argv[]) {
    clock_t start = clock();
    if (argc != 5) {
        errMessage1();
        return 1;
    }
    cout << "Start" << endl;
    Container c;
    c.Init();
    if (!strcmp(argv[1], "-f")) {
        ifstream ifst(argv[2]);
        c.In(ifst);
    }
    else if (!strcmp(argv[1], "-n")) {
        auto size = atoi(argv[2]);
        if ((size < 1) || (size > 10000)) {
            cout << "incorrect numer of Films = "
                << size
                << ". Set 0 < number <= 10000\n";
            return 3;
        }
        // системные часы в качестве инициализатора
        srand(static_cast<unsigned int>(time(0)));
        // Заполнение контейнера генератором случайных чисел
        c.InRnd(size);
    }
    else {
        errMessage2();
        return 2;
    }
    // Вывод содержимого контейнера в файл
    ofstream ofst1(argv[3]);
    ofst1 << "Filled Container:\n";
    c.Out(ofst1);
    // The 2nd part of task
    ofstream ofst2(argv[4]);
    ofst2 << "Sorted Container: \n";
    c.Film_sort();
    c.Out(ofst2);

    c.Clear();
    cout << "Stop" << endl;
    clock_t end = clock();
    double seconds = (double)(end - start) / CLOCKS_PER_SEC;
    cout << seconds << endl;
    return 0;
}
