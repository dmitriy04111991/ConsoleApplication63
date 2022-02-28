#include <iostream>
using namespace std;
const int ARR_LEN = 6;

void main()
{
    setlocale(LC_CTYPE, "Russian");

    float arr[ARR_LEN];
    float sum = 0;    

    for (int i = 0; i < ARR_LEN; i++) {
        cout << "Введите элемент массива " << i << ": ";
        cin >> arr[i]; 
        sum += arr[i]; 
    }

    cout << "Среднее арифметическое чисел в массиве: " << sum / ARR_LEN << endl;

    system("pause");
}