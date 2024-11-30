#include <iostream>
#include "mathematicalFunctions.h"

int main () {
    int number1{0};
    int number2{0};
    int operation{0};
    std::cout << "Введите первое число: ";
    std::cin >> number1;
    std::cout << "Введите второе число: ";
    std::cin >> number2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):";
    std::cin >> operation;
    switch (operation)
    {
    case 1:
        std::cout<< "Addition: "    << number1 
                                    << " + " 
                                    << number2 
                                    << " = " 
                                    << addition(number1, number2);
        break;
    case 2:
        std::cout<< "Subtraction : "    << number1 
                                        << " - " 
                                        << number2 
                                        << " = " 
                                        << subtraction(number1, number2);
        break;
    case 3:
        std::cout<< "Multiplication : " << number1 
                                        << " * " 
                                        << number2 
                                        << " = " 
                                        << multiplication(number1, number2);
        break;
    case 4:
        std::cout<< "Division : "   << number1 
                                    << " / " 
                                    << number2 
                                    << " = " 
                                    << division(number1, number2);
        break;
    case 5:
        std::cout<< "Возведение в степень : "   << number1 
                                                << " в степени " 
                                                << number2 
                                                << " = " 
                                                << exponentiation(number1, number2);
        break;
    
    default:
        break;
    }

    return 0;
}