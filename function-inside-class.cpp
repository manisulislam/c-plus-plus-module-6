#include<bits/stdc++.h>
using namespace std;
class Person{
    public:
    string name;
    int age;
    int marks1;
    int marks2;

    Person(string nm, int ag, int m1, int m2){
        name=nm;
        age= ag;
        marks1=m1;
        marks2=m2;
        
    
    }
    void hello(){
        cout<<name<<" "<<age<<endl;
    }
    int total_marks(){
        return marks1+marks2;
    }

};
int main(){
    Person anis("anisul islam", 22,98,54);
    //cout<<anis.age<<" "<<anis.name<<endl;
    anis.hello();
    cout<<anis.total_marks()<<endl;
    return 0;
}