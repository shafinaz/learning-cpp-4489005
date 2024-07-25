#include <iostream>

using namespace std;

class test_base{
    public:
        virtual void show() = 0;
        test_base(int in_x) : x(in_x){ cout << "Base" << endl; }

    protected:
        int x;
};

class test_derived: public test_base{
    public: 
        void show() { cout << "HI" << endl;}
        test_derived(int i, int j) : test_base(i), y(j) { cout << "Derived" << endl;}
    private:
        int y;
};

/*int main()
{
    test_base* obj_derived = new test_derived(4, 7);
    obj_derived->show();

    test_derived obj_two(6, 8);
    obj_two.show();

    delete obj_derived;


    return 0;
}*/