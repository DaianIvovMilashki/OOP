#include <iostream>

//Напишете шаблонна функция, която връща индекса на най-големия елемент на масив.
template <typename T>
int indexOfTheBiggestNumber(T arr[] , size_t size)
{
    T maxelement = arr[0];
    int maxelementIndex = 0;
    for(int i = 1  ; i < size ; i++)
    {
        if(maxelement < arr[i])
        {
            maxelement = arr[i];
            maxelementIndex = i;
        }
    }
    return maxelementIndex;
}

template <typename T>
void readArray(T arr[] , size_t size)
{
    for(int i = 0 ; i < size ; i++)
    {
        std::cin >> arr[i];
    }
    
}

int main()
{   
    size_t size;
    std::cin >> size;

    int arr[size];
    char arr2[size];

    readArray(arr , size);
    std::cout << indexOfTheBiggestNumber(arr , size);

    readArray(arr2 , size);
    std::cout << indexOfTheBiggestNumber(arr2 , size);

    return 0;
}