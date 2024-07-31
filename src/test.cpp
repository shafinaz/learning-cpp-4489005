#include <iostream>

using namespace std;

//abstract class
class test_base{
    public:
        virtual void show() = 0;
        test_base(int in_x) : x(in_x){ cout << "Base" << endl; }
        test_base() : x(0) { cout << "default" << endl; }
    
    protected:
        int x;
};

class test_base_2{
    public:
        virtual void show() { cout << "Base class 2" << endl; };

        test_base_2(int int_s) : s(int_s) { }

    protected:
        int s;
};

class test_derived : public test_base, public test_base_2{
    public:
        void show() { cout << "HI" << endl; }
        test_derived(int i, int j) : test_base_2(i), test_base(i), y(j){ cout << "Derived" << endl; }
    private:
        int y;
};
/*
int main()
{
    test_base* obj_derived = new test_derived(4, 7);
    obj_derived->show();

    test_derived obj_two(6, 8);
    obj_two.show();

    delete obj_derived;


    return 0;
}*/