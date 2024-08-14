#include<iostream>
using namespace std;

class Car{
    public:
    //Attributes(state)
    string color;
    string model;

    //conctructor 
    Car(string c, string m){
        color = c;
        model = m;
    }

    //method(behaviour)
    void start(){
        cout<<"The"<<" "<< color<<" "<<model <<"is Starting"<<endl;
    }

};

int main(){
    //Creating object for class
    Car car1("Red", "Toyota");
    Car car2("Blue", "Honda");

    //Calling the start method on objects
    car1.start(); //The Red Toyotais Starting
    car2.start(); //The Blue Hondais Starting

    return 0;
}