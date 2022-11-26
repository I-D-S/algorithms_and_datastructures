#include <iostream>

void PrintPrimeNums(int* arr, int len)
{
    for (int i = 2; i < len + 1; i++)
    {
        if (arr[i] != 0)
        {
            std::cout << arr[i] << " ";
            for (int j = i * i; j < len +1; j+= i)
                arr[j] = 0;
        }
    }
}

void FillArray(int * arr, int len)
{
    for( int i =0; i < len+1; i++)
    {
        arr[i] = i;
    }
}

int main() {

    int n;
    std::cout << "enter a number: ";
    std::cin >> n;
    int* numbers = new int[n + 1];
    FillArray(numbers, n);
    PrintPrimeNums(numbers, n);


    return 0;
}