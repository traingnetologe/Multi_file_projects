#include <iostream>
#include "figurebase.h"

//////////////////////////////////////////////////////////////////////////////////////////////////
// треугольники
class triangel : public figure_base {
protected:
    // a, b, c - стороны
    // A, B, C - углы 
    int a{}, b{}, c{}, A{}, B{}, C{};

public:
    //  основной конструктор класса здесь вся магия.
    triangel(std::string set_type_figure, int set_a, int set_b, int set_c, int set_A, int set_B, int set_C)
    :figure_base(set_type_figure),
    a(set_a),
    b(set_b),
    c(set_c),
    A(set_A),
    B(set_B),
    C(set_C) { }

int get_a() {return a;}
int get_b() {return b;}
int get_c() {return c;}

int get_A() {return A;}
int get_B() {return B;}
int get_C() {return C;}

};

class straing_angle_triangel : public triangel {
    public: 
    straing_angle_triangel() 
    :triangel("Прямоуголный треугольник", 10, 20, 30, 50, 60, 90) {} 
};

class equal_third_party_triangel :public triangel { 
    public: 
    equal_third_party_triangel(int set_size_abc, int set_corners) 
    :triangel("Равносторонний треугольник", set_size_abc, set_size_abc, set_size_abc, set_corners, set_corners, set_corners) {} 
};