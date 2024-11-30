#include <iostream>
#include "counter.h"

int main(){

    counter count;
    std::string answer = "Нет";
    char typeOperation;
  std::cout<< "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
  std::cin >> answer;
  if (answer == "да" || answer == "Да"|| answer == "ДА"){
    std::cout << "Введите начальное значение счётчика: ";
    int initial_value_counter{0};
    std::cin >> initial_value_counter;
    counter count(initial_value_counter);
  }
  else 
  {counter count();}

while( typeOperation == 'x'){

std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
std::cin >> typeOperation;
switch (typeOperation)
    {
    case '+':
        count.counter_add();
        break;
    case '-':
        count.counter_subtrack();
        break;
    case '=':
        std::cout << count.get_counter();
        break;
    }
}

    return 0;
}