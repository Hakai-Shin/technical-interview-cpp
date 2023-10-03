#include<vector>
#include<iostream>

using namespace std;

int main(){
    vector<int> v;
    while(true){
        v.push_back(1);
        cout<<v.size()<<" "<<v.capacity()<<endl;
    }
    return 0;
}