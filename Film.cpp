#include "Film.h"

    // Вычисление отношения даты к длине названия фильма 
    double Film::value() {
        return (double(date) / double(name_length));
    }
