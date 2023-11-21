#include <iostream>

//Напишете шаблонна функция, която отпечатва елементите на масив.

template <typename T>
void printArray(T arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

template <typename T>
void readArray(T arr[] , int size)
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cin >> arr[i];
    }
    
}



int main()
{
   
    int size;
    std::cin >> size;
    int arr[size];
    char arr2[size];

    readArray(arr , size);
    printArray(arr , size);

    readArray(arr2, size);
    printArray(arr2, size);
    return 0;
}
