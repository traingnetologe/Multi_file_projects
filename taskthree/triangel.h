#pragma once
#include <iostream>
#include "figurebase.h"

class quadrange{
    public:
    quadrange(std::string set_type_figure, 
                int set_a,
                int set_b,
                int set_c,
                int set_d,
                int set_A,
                int set_B,
                int set_C,
                int set_D);
    void print_info();
};

class rectangel{
    public:
    rectangel(std::string set_type_figure,
                int set_a,
                int set_b,
                int set_c,
                int set_d,
                int set_A,
                int set_B,
                int set_C,
                int set_D);

    void print_info();
}

class  parallelogram {
    public:
    parallelogram(int set_size_side_ac,
                int set_size_side_bd,
                int set_cornersAC,
                int set_cornersBD);
    void print_info();
    
}

