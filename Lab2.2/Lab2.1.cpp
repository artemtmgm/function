#include <iostream>
using namespace std;

int massNsearch(int, int[], int);


int main(int argc, char* argv[])
{
    int n, length;
    cout << "Enter n: ";
    cin >> n;
    int arr[] = { 1, 3, 2, 5, 7, 10, 8, 4, 11, 14, 13, 12, 15 };
    length = sizeof(arr) / sizeof(arr[0]);
    cout << "indeks n:" << massNsearch(n, arr, length) << endl;
    system("pause");
    return 0;
}

int massNsearch(int n, int arr[], int length) {
    int ret = -1;
    for (int i = 0; i < length; i++) {
        if (arr[i] == n)
            ret = i + 1;
    }
    return ret;
}