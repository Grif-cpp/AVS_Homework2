Доброго времени суток, моя вторая домашка по АВС (Иванов Григорий БПИ201)                                                         
К сожалению с CMake я не дружу, поэтому собирал проект так:                                                               
Команды для консоли Windows:                                                                        
g++ -c Cartoon.cpp Gaming.cpp Documental.cpp Film.cpp Container.cpp main.cpp                                                    
g++ Cartoon.o Gaming.o Documental.o Film.o Container.o main.o -o hw1                                            
.\hw1 -f test05.txt Out.txt Out1.txt                                                    
Описание ввода в файле Description                                                  
время выполнение на слцчайных данных(количество фильмов 10000) 0.240-0.250 сек                          
время выполнения программы на каждом тесте (количество фильмов от 5-1000) 0.001-0.010 сек, замерял время так:                                           
#include<time.h>                                          
clock_t start = clock();                                              
// программа                                              
clock_t end = clock();                                                      
double seconds = (double)(end - start) / CLOCKS_PER_SEC;                                          
cout << seconds;                                              
                                                                              
Программа написанная в стиле ООП работает немного быстрее, чем программа написанная процедурным подходом.                                         
