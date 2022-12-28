#include <iostream>
#include <cmath>
#include <numeric> 
#include "Sum.h"
#include "Sub.h"
#include "Mul.h"
#include "Div.h"
#include "Square.h"
#include "Pow.h"
#include "Sin.h"
#include "Cos.h"
#include "Tang.h"
#include "Log.h"
#include "Cbrt.h"




int main()
{
    setlocale(LC_ALL, "Ru-ru");

    std::cout << "28 декабря 2022\n" << std::endl;

    short int numberA = 5;
    unsigned short int numberB = 10;
    int numberC = -350;
    unsigned int numberD = 760;
    long numberE = -870;
    unsigned long numberF = 475;
    long long numberG = 899;

    float numberX = -10.99;
    double numberY = 0.00599;
    long double numberZ = 30.9999999;

    long double resultOfSum = numberSum(numberA, numberB, numberC, numberD);
    std::cout << "Сложение = " << resultOfSum << std::endl;

    long double resultOfSubtr = numberSubtr(numberA, numberB, numberC, numberD);
    std::cout << "Вычетания = " << resultOfSubtr << std::endl;

    long double resultOfMulti = numberMulti(numberA, numberB);
    std::cout << "Умножение = " << resultOfMulti << std::endl;

    long double resultOfDiv = numberDiv(numberA, numberB);
    std::cout << "Деление = " << resultOfDiv << std::endl;

    long double resultOfSquare= numberSquare(numberA);
    std::cout << "Возведение в квадрат = " << resultOfSquare << std::endl;

    long double resultOfPow = numberPow(numberA, numberB);
    std::cout << "Возведение в степень = " << resultOfPow << std::endl;

    long double resultOfSin = numberSin(numberA);
    std::cout << "Вычисление синуса = " << resultOfSin<< std::endl;

    long double resultOfCos = numberCos(numberA);
    std::cout << "Вычисление косинуса = " << resultOfCos<< std::endl;

    long double resultOfTang = numberTang(numberA);
    std::cout << "Вычисление тангенса = " << resultOfTang << std::endl;

    long double resultOfLog = numberLog(numberA);
    std::cout << "Вычисление логарифма = " << resultOfLog << std::endl;

    long double resultOfCbrt = numberCbrt(numberA);
    std::cout << "Вычисление куба = " << resultOfCbrt << std::endl;

    std::cout << std::endl;
    std::cout << "Вычисления закончены!" << std::endl;
    std::cout << std::endl;

    system("pause");
}