﻿#include <iostream>

void Swap(int* pa, int* pb)                            // Метод для перемены местами содержимого указателей
{
    int c = *pa;                                       // Объявляем переменну и инициализируем её значением разъименованного указателя
    *pa = *pb;                                         // Разъименованному указателю присваиваем значение другого разъименнованщгщ указателя 
    *pb = c;                                           // Второму разъименнованному укказателю присваиваем значение объявленной переменной
}

int main()
{
    int a = 5;
    int b = 10;
    Swap(&a, &b);

    std::cout << ' ' << a << ' ' << b << std::endl;   
}