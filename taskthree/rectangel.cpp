#include <iostream>
#include "figurebase.h"

//////////////////////////////////////////////////////////////////////////////////////////////////

// прямоугольники
class quadrange : public figure_base{
protected:
    // a, b, c, d - стороны
    // A, B, C, D - углы 
    int a{}, b{}, c{}, d{}, A{}, B{}, C{}, D{};

public:
    //  основной конструктор класса здесь вся магия.
    quadrange(std::string set_type_figure, int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D)
    :figure_base(set_type_figure),
    a(set_a),
    b(set_b),
    c(set_c),
    d(set_d),
    A(set_A),
    B(set_B),
    C(set_C),
    D(set_D) { }
//........................................
    int get_a() {return a;}
    int get_b() {return b;}
    int get_c() {return c;}
    int get_d() {return d;}


    int get_A() {return A;}
    int get_B() {return B;}
    int get_C() {return C;}
    int get_D() {return D;}
//........................................

    void print_info() override{
            std::cout << get_type_figure()
            << ":\nСтороны "
            << "a=" << a
            << " b=" << b
            << " c=" << c
            << " d=" << d
            << "\nУглы: "
            << "A=" << A
            << " B=" << B
            << " C=" << C
            << " D=" << D
            << "\n";
        }

};

class rectangel : public quadrange {
    public:
    rectangel(std::string set_type_figure, int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D)
    :quadrange(
        set_type_figure,
        set_a,
        set_b,
        set_c,
        set_d,
        set_A,
        set_B,
        set_C,
        set_D) {}
};

class  parallelogram : public rectangel { 
    public: parallelogram(int set_size_side_ac,int set_size_side_bd,int set_cornersAC, int set_cornersBD):
    rectangel("Параллелограм",
    set_size_side_ac,
    set_size_side_bd,
    set_size_side_ac,
    set_size_side_bd,
    set_cornersAC,
    set_cornersBD,
    set_cornersAC,
    set_cornersBD) { } };

class  square : public rectangel {
    private:
    int cornerc_this_figure = 90;

    public: square( int set_size_side):
    rectangel("Квадрат", 
    set_size_side,
    set_size_side,
    set_size_side,
    set_size_side,
    cornerc_this_figure, cornerc_this_figure, cornerc_this_figure, cornerc_this_figure) { } };

class  rhombus : public rectangel {

    public: rhombus(int set_size_side, int set_corners):
    rectangel("Ромб",
    set_size_side,
    set_size_side,
    set_size_side,
    set_size_side,
    set_corners,
    set_corners,
    set_corners,
    set_corners) { } };