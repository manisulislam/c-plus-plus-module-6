#include<bits/stdc++.h>
using namespace std;
namespace rakib{
    int age=25;
    void hello(){
        cout<<"rakib namesapce"<<endl;
    }
};
namespace sakib{
    int age2=35;
    void hello2(){
        cout<<"sakib namespace"<<endl;
    }
}
using namespace rakib;
int main(){
    cout<<age<<endl;
    hello();
    
    return 0;
}