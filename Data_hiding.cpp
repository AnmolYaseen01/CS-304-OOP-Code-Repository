//								Information hiding and Encapsulation
//State --> a)data members --> variables with in class
//behaviour --> b)member functions --> functions with in class


// Hiding the object details (state and behaviuor) from the users is called Information hiding or Data hiding.
//here by user we mean "an object" of another class that is calling functions of this class using the reference of this class object.

//Advantages --> a) It simplifies our object oriented model
//			--> b) It is a barrier against change Propogation


//	Encapsulation --> Enclosing all the characteristics (member functions or Data members) of an object (class) in the object (class) itself.
//			e.g: defining functions of a class with in the class.

// Encapsulation and information hiding are much related concepts(Information hiding is achieved using Encapsulation).

//Advantages: a) Simplicity & clarity
//			  b) low complexity
//			  c) Better understanding

#include <iostream>

using namespace std;

class Student {
private:
    // Data members
    int a;

public:
    // Member functions
    void setId() {
        a = 25;
    }
    
    void getId() {
        cout << "\n\n" << a; // This line should print the value of 'a'
    }
};

int main() {
    // Create an object of the Student class
    Student obj;

    // Call setId() to set the value of 'a'
    obj.setId();

    // Call getId() to get and print the value of 'a'
    obj.getId();

    getch(); // This function waits for a key press before the program exits
    return 0;
}

