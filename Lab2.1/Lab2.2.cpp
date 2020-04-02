#include <iostream>
using namespace std;

int simple( int);


int main(int argc, char* argv[])
{
    int arr[] = { 1, 3, 2, 5, 7, 10, 8, 4, 11, 14, 13, 12, 15 };
    cout << "mass: "<<endl;
    for (int i = 0; i < 13; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
    cout << "simple mass: " << endl;
    for (int i = 0; i < 13; i++) {
        if (simple(arr[i]) == 1)
            cout << arr[i] << "\t";
    }
    system("pause");
    return 0;
}


int simple(int n) {
    int i, sq;


    if (n % 2 == 0) { return 0; }
    sq = (int)sqrt(n);
    for (i = 3; i <= sq; i++) {
        if ((n % i) == 0) { return 0; }
    }
    return 1;
}