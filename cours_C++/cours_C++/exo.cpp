#include <iostream>
#include <string>
using namespace std;

class Line {
private:
    double length;

public:
    // Constructor to initialize the data member "length"
    //Line(double len) : length(len) {}
    // option 2 of param constructor to initialize the data member "length"
    Line(double len) {
        length = len;
    }

    // Destructor
    ~Line() {}

    // Member function to set the value of "length"
    void setLength(double len) {
        length = len;
    }

    // Member function to get the value of "length"
    double getLength() const {
        return length;
    }
};

/*
int main() {
    // Create a Line object
    Line myLine(10.5);

    // Display the initial length
    cout << "Line length: " << myLine.getLength() << endl;

    // Set a new length
    myLine.setLength(20.0);

    // Display the new length
    cout << "Line length: " << myLine.getLength() << endl;

    return 0;
}
*/