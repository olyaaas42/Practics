#include <iostream>
#include <cassert> // для assert()
#include <initializer_list> // для std::initializer_list
#include "dynamicArray.h"

using std::cout;

Array::Array(int number) 
{
    this->number = number;
    this->dynamicArray = new int[this->number];
}

Array::~Array() 
{
    delete[] this->dynamicArray;
}


int& Array::operator[] (int index)
{
    assert(index >= 0 && index < number);
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

void Array::randz(int minz, int maxz)
{
    for(int i = 0; i < this->number; i++)
    {
        this->dynamicArray[i] = minz + rand()%(maxz - minz); 
    }
}

Array::Array(std::initializer_list<int> list) 
    : Array::Array(static_cast<int>(list.size())) 
{
    int count{ 0 };
    for (auto element : list)
    {
        dynamicArray[count] = element;
        ++count;
    }
};

int main()
{
    int number = 5;
    //Array array(number); 
    int index = 4;
    int minz = -10;
    int maxz = 100;

    Array array{2, 5, 7, 8, 3}; // список инициализации

    //array.randz(minz, maxz);
    
    cout << "Dynamic array: " << array << std::endl;

    cout << "Element dynamic array №" << index+1 << " " << array[index] << std::endl;

    array.insertSort();

    cout << "Sorted dynamic array: " << array << std::endl;

    cout << "Element sorted dynamic array №" << index+1 << " " << array[index] << std::endl;
}