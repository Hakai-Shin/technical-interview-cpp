#include<iostream>

using namespace std;

class base{
    public:
    virtual void fun(){
        cout<<"base called"<<endl;
    }
};

class d1: public base{
    public:
    void fun(){
        cout<<"d1 called"<<endl;
    }
};

class d2: public base{
    private:
    void fun(){
        cout<<"d2 called"<<endl;
    }
};

class d3: public base{
    protected:
    void fun(){
        cout<<"d3 called"<<endl;
    }
};

class base2{
    private:
    void fun(){
        cout<<"base2 called"<<endl;
    }
};

int main(){

    //are these there functions callable?
    int x =0;
    base* b1 = new d1(); //yes
    base* b2 = new d2(); //yes
    base* b3 = new d3(); //yes

    b1->fun();
    b2->fun();
    b3->fun();

    base2* b4 = new base2();
    // b4->fun(); //no
    return 0;
}
