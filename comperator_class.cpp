#include<iostream>
using namespace std;

class Person{
    public:
    int age;
    string name;
    double height;

    Person(){

    }

    Person(int age, string name, double height){
        this->age = age;
        this->name = name;
        this->height = height;
    }

    void print(){
        cout<<name<<" "<<age<<" "<<height<<" ";
    }
};

bool compareHeight(Person a, Person b){
    return a.height < b.height;
}

int main(){
    Person a[3];
    a[0] = Person(5, "abhay", 5.9);
    a[1] = Person(10, "raj", 5.4);
    a[2] = Person(15, "Arnav", 6.0);
    
    sort(a, a+3, compareHeight);

    a->print();
    return 0;
}