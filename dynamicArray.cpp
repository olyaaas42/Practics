#include <iostream>

using namespace std;

int main()
{
    int number = 5;

    int* dynamicArray = new int[number];
    dynamicArray[0] = 15;
    dynamicArray[1] = 8;
    dynamicArray[2] = 3;
    dynamicArray[3] = 7;
    dynamicArray[4] = 12;
    
    cout << "Dymanic array: " << endl;
    for (int i = 0; i < number; i++)
    {
        cout << dynamicArray[i] << '\t';
    }
    cout << endl;

    //сортировка вставками
    for(int i = 1; i < number; i++)
    {    
        for(int j = i; j > 0 && dynamicArray[j-1] > dynamicArray[j]; j--)   // пока j>0 и элемент j-1 > j
        {
            swap(dynamicArray[j-1], dynamicArray[j]);          // меняем местами элементы j и j-1                   
        } 
    }

    cout << "Sorted dymanic array: " << endl;
    for (int i = 0; i < number; i++)
    {
        cout << dynamicArray[i] << '\t';
    }
    cout << endl;

    delete [] dynamicArray;
}