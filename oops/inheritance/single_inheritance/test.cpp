#include<iostream>

using namespace std;

class parent{
    public:
    virtual void fun(){
        cout<<"parent called"<<endl;
    }

    parent(int x){
        cout<<"parent parameter constructor called"<<endl;
    }
};

class child1: public parent{
    public:
    void fun(){
        cout<<"child1 called"<<endl;
    }
    child1(int x): parent(x){
        cout<<"child1 parameter constructor called"<<endl;
    }
};

class base2{
    public:
    virtual void fun(){
        cout<<"base2 called"<<endl;
    }

    base2(){
        cout<<"base2 parameter constructor called"<<endl;
    }
};

class d2: public base2{
    public:
    void fun(){
        cout<<"d2 called"<<endl;
    }
    d2(){
        cout<<"d2 default constructor called"<<endl;
    }
};


int main(){

    //are these there functions callable?
    int x =0;
    parent* b1 = new child1(x); //yes
    base2* b2 = new d2(); //yes
    
    return 0;
}
