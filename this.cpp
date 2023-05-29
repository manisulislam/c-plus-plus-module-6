#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person(string nm, int ag){
        (*this).name=nm;
        (*this).age=ag;

    }
    void hello(){
        cout<<"hello world"<<endl;
    }
};
int main(){
    Person anis("anisul islam", 21);
    cout<<anis.name<<" "<<anis.age<<endl;
    
    return 0;
}