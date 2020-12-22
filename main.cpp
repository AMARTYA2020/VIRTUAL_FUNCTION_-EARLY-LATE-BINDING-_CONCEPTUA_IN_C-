#include <iostream>

using namespace std;

/* CONTRIBUTE BY AMARTYA PANDEY 22ND DECEMBER 2020:
    THE MOST CONCEPTUAL VIEW ABOUT LATE BINDING AND EARLY BINDING :)
*/


class A{
public:
    void display(){
    cout<<"Base class A is called:"<<endl;
    }
};

class B:public A{
public:
    void display(){
    cout<<"derived class B is called: "<<endl;
    }
};

int main()
{

    A *a_obj;
    B b_obj;
    a_obj=&b_obj;
    a_obj->display();
    return 0;
}
 /*
 HERE THIS ABOVE PROGRAM ADDREESS OF OBJECT B IS PASSED TO A AND DISPLAY FUNCTION IS CALLED BUT THE OUTPUT WE GET IS THE METHOD DISPLAY
 OF BASE CLASS "A" INSTEAD OF CLASS "B"
 THIS IS NOT ANY KIND OF AMBIGUITY..........HERE COMES THE ROLE OF LATE AND EARLY BINDING


 CONSIDER THE BELOW PRAGMATIC SCENARIO FOR BETTER GRASP OF THE CONCEPT::
 Assume that you are a chef and you have your daily routine of cooking various receipes every month since you are habituated....you ignore
 time constraint because the dish to be prepared is well known beforehand  --> ANALOGUS TO LATE BINDING

 But if the chef is supposed to take part in any cooking competation then the time period is the major defining criteria as the dish to be
 prepared in the competation is not known --> ANALOGUS TO EARLY BINDING:

   */


   /*
     Thus to display the function in class B when the address of class B object is passed to the object of class A we add vitual keyword infront
     of the return type of the function:
     */
         class A{
     public:
        virtual void display(){
        cout<<"Derived class B is called"<<endl;
        }
         };
