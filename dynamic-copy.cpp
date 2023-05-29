#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    Person (string name, int age){
        this->name=name;
        this->age=age;
    }

};
int main(){
    Person* anis= new Person("anisul islam", 21);
    Person* ahad = new Person("ahad bin",23);
    //anis->name= ahad->name;
    *anis=*ahad;
    delete ahad;
    cout<<anis->name<<" "<<anis->age<<endl;
    
    return 0;
}