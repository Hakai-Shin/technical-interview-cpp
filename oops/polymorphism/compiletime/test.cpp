#include<iostream>

using namespace std;

class base{
    public:

    // is there any difference between two functions with different return type

    
    // int add(int a ,int b){
    //     cout<<"void add called"<<endl;
    // }

    void add(int a ,int b){
        cout<<"void add called"<<endl;
    }

    void add(int* a ,int* b){
        cout<<"void add* called"<<endl;
    }
};


int main(){
    int x = 5;
    int y = 6;
    base b;

    b.add(x,y);
    b.add(&x,&y);
    return 0;
}