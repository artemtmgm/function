#include <iostream>
using namespace std;

void frame( int x, int y, int z) {
    
    for (int i = 0; i < x; i++) {
        if (i < z)
            cout << string(x,'*') << endl;
        else if (i >= x - z)
            cout << string(x, '*') << endl;
        else 
            cout << string(z, '*')+ string(x-2*z, ' ') + string(z, '*') << endl;

   }
}

int main(void)
{
    int width, length, thickness;
    cout << "Enter width: " << endl;
    cin >> width;
    cout << "Enter length: " << endl;
    cin >> length;
    cout << "Enter thickness: " << endl;
    cin >> thickness;
    frame(width, length, thickness);
    return 0;
}