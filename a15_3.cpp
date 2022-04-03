/*
5/12/2019
Joel Rechin
CS10b
Assignment 10.3

Program sorts an integer array using a recursive function.
*/

#include <iostream>

using namespace std;

int smallestIndex(int* numbers, int left, int SIZE);
void arraySort(int* numbers, int left, int SIZE);

int main()
{
    int indexNum, SIZE = 10, left = 0;

    int numbers[] = {10,8,9,9,6,5,4,3,2,1};
    arraySort(numbers, left, SIZE);

    for(int i = 0; i < SIZE; i++)
    {
        cout << numbers[i] << " ";
    }

    return 0;
}






//Function sorts the integer array.
void arraySort(int* numbers,int left, int SIZE)
{
    int index, temp;

    index = smallestIndex(numbers, left, SIZE);
    temp = numbers[index];
    numbers[index] = numbers[left];
    numbers[left] = temp;

    if(left == SIZE)
        return;
    arraySort(numbers, left+1, SIZE);
}






//Function finds the index with the smallest number.
int smallestIndex(int* numbers, int left, int SIZE)
{
    int smallestNum = numbers[left], smallestIndex = left;

    for(int i = left+1; i < SIZE; i++)
    {
        if(numbers[i] < smallestNum)
        {
            smallestNum = numbers[i];
            smallestIndex = i;
        }
    }

    return smallestIndex;
}

/*
1 2 3 4 5 6 8 9 9 10
Process returned 0 (0x0)   execution time : 0.119 s
Press any key to continue.
*/
