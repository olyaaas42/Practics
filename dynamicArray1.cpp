#include <iostream>
#include <stdlib.h>

using namespace std;

class Array
{
    public:
    int number;
    int* dynamicArray = new int[number];

    //перегрузка cout
    friend ostream& operator<<(ostream &os, const Array &array) 
    {
        for (int i = 0; i < array.number; i++)
            {
                os << array.dynamicArray[i] << '\t';
            }
        cout << endl;
        return os;
    }
};

int main()
{
    Array array;
    array.number = 5;

    array.dynamicArray[0] = rand()%100;
    array.dynamicArray[1] = rand()%100;
    array.dynamicArray[2] = rand()%100;
    array.dynamicArray[3] = rand()%100;
    array.dynamicArray[4] = rand()%100;
    
    cout << "Dymanic array: " << array << endl;

    //сортировка вставками
    for(int i = 1; i < array.number; i++)
    {    
        for(int j = i; j > 0 && array.dynamicArray[j-1] > array.dynamicArray[j]; j--)   
        {
            swap(array.dynamicArray[j-1], array.dynamicArray[j]);                       
        } 
    }

    cout << "Sorted dymanic array: " << array << endl;

    delete [] array.dynamicArray;
}

