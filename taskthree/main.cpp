#include <iostream>
#include "ractangel.h"
#include "triangel.h"
#include "figurebase.h"

int main(){
    std::setlocale(LC_ALL, "Russian");
    // четырех гранники
    quadrange qu("Четырехуголник",10,20, 10,40, 50,60,70,80);
    qu.print_info();

    parallelogram par(20,30,30,40);
    par.print_info(); 

    // треуголоники
    // triangel tri; straing_angle_triangel st; equal_third_party_triangel eq;
    // std::cout << "hello world!!!!";
    return 0;
}