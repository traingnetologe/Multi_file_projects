#pragma once
#include <iostream>

class figure_base{
    public:
    figure_base();
    figure_base(int set_number_of_sides);
    figure_base(std::string set_type_figure);
    figure_base(std::string set_type_figure,int set_number_of_sides);
    virtual void print_info();
    virtual bool check();
    std::string get_type_figure();

}