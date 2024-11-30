
class counter
{
private:
    int counter_number{};
public:
    counter():counter_number(1){}
    counter(int setCounter) : counter_number(setCounter){}

   void counter_add() { ++counter_number; }
   void counter_subtrack() { --counter_number; }
   int get_counter(){ return counter_number;}
};

