#include <iostream>

using namespace std;

class Demo {
// The variable in the private area can only be accessed using the getter and
// setter method
private:
    double length;
// The methods in the public area can be accessed by directly calling the
// method
public:
    int getLength () {
        return length;
    }
    char * setLength (int num) {
        length = num;
        return "You have successfully set the variable length";
    }
};

int main () {
    // Create and instance of the class "Demo"
    Demo demo;
    char * result = demo.setLength(10);
    cout << "The return value of the setter method is: " << result << endl;
    int verification = demo.getLength();
    cout << "Verify that the length is as wanted: " << verification << endl;
    return 0;
}
