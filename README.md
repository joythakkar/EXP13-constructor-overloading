# EXP13-constructor-overloading


🎯 AIM:
         
         To implement Constructor Overloading in C++ and analyze how different 
    constructors initialize objects in different ways.

🛠 APPARATUS / SOFTWARE USED:
   
    - Visual Studio Code (VS Code)
   

📌 OBJECTIVES:
   
    - To demonstrate constructor overloading with real-life examples.
    - To differentiate between default, parameterized, and copy constructors.
    - To show how constructor overloading provides flexibility in object creation.

--------------------------------------------------------------------------------
📖 THEORY:
--------------------------------------------------------------------------------
    Constructors are special functions in C++ that automatically initialize objects.
    They are invoked when an object of a class is created.

    🔹 Why Constructor Overloading?
        - A single constructor cannot handle all initialization needs.
        - Constructor overloading allows creating multiple constructors with 
          different signatures.
        - Example: In a "Book" class, one constructor can initialize title only,
          another can initialize title and author, and a third can copy details
          from another object.

    Advantages:
    - Provides flexibility in initialization.
    - Reduces code duplication.
    - Makes object-oriented programming more powerful.

================================================================================
*/

#include <iostream>
using namespace std;

class Book {
    string title;
    string author;

public:
    // Default Constructor
    Book() {
        title = "Untitled";
        author = "Unknown";
        cout << "Default Constructor Called!" << endl;
    }

    // Parameterized Constructor
    Book(string t, string a) {
        title = t;
        author = a;
        cout << "Parameterized Constructor Called!" << endl;
    }

    // Copy Constructor
    Book(const Book &b) {
        title = b.title;
        author = b.author;
        cout << "Copy Constructor Called!" << endl;
    }

    void display() {
        cout << "Book Title: " << title << ", Author: " << author << endl;
    }
};

 int main() {
    cout << "Experiment 13: Constructor Overloading (Book Example)\n\n";

    Book b1;                           // Default Constructor
    Book b2("C++ Programming", "Bjarne Stroustrup");  // Parameterized
    Book b3(b2);                       // Copy Constructor

    cout << "\nDisplaying Object Values:\n";
    b1.display();
    b2.display();
    b3.display();

    /*
    ✅ CONCLUSION:
        - Constructor overloading helps initialize objects in multiple ways.
        - The same class can create objects with default, user-defined, or copied data.
        - This experiment demonstrated constructor overloading using a Book class.
    */
    return 0;
}
