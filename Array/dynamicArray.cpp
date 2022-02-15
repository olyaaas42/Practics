#include <iostream>
#include "dynamicArray.h"

using std::cout;

Array::Array(int number)
{
    this->number = number;
    this->dynamicArray = new int[this->number];
    for(int i = 0; i < this->number; i++)
    {
        this->dynamicArray[i] = rand()%100;
    }
}

Array::~Array()
{
    delete[] this->dynamicArray;
}


int& Array::operator[] (int index)
{
    return dynamicArray[index];
}

std::ostream& operator<<(std::ostream &os, const Array &array) 
{
    for(int i = 0; i < array.number; i++)
    {
        os << array.dynamicArray[i] << '\t';
    }
    return os;
}

void Array::insertSort()
{
    for(int i = 1; i < this->number; i++)
    {    
        for(int j = i; j > 0 && this->dynamicArray[j-1] > this->dynamicArray[j]; j--)   
        {
            std::swap(this->dynamicArray[j-1], this->dynamicArray[j]);                       
        } 
    }
}

int main()
{
    int number = 10;
    Array array(number);
    int index = 8;
    
    cout << "Dymanic array: " << array << std::endl;

    cout << "Element dynamic array №" << index+1 << " " << array[index] << std::endl;

    array.insertSort();

    cout << "Sorted dymanic array: " << array << std::endl;

    cout << "Element sorted dynamic array №" << index+1 << " " << array[index] << std::endl;
}