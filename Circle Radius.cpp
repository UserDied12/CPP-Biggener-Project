#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, area;

    // takes input for radius
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate area
    area = 3.14159 * (radius*2);

    // Display result
    cout << "The area of the circle is: " << area << endl;

    return 0;
}



