#include <iostream>

/*

冒泡排序，核心算法是让最大的元素像气泡一样飘到最后。
算法复杂度 O(n^2)

*/

void printElementInArray(int array[], int array_size)
{
    for(int i = 0; i < array_size; i++)
    {
        std::cout <<  array[i]  << " ";
    }
    std::cout << std::endl;
}

void BubbleSort_v1(int input[], int size)
{
    int temp = 0;
    for(int i = size - 1; i > 0; i--)
    {
        for(int j = 0; j < i; j++)
        {
            if(input[j] > input[j+1])
            {
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
            printElementInArray(input, size);
        }
    }
}

void BubbleSort_v2(int input[], int size)
{
    int temp = 0;
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size - i -1; j++)
        {
            if(input[j] > input[j+1])
            {
                temp = input[j];
                input[j] = input[j+1];
                input[j+1] = temp;
            }
            printElementInArray(input, size);
        }
    }
}

int main()
{
    int data_source[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int data_size = sizeof(data_source)/sizeof(int);
    printElementInArray(data_source, data_size);
    BubbleSort_v2(data_source, data_size);
    printElementInArray(data_source, data_size);
}




/*

V1 output:
6 5 3 1 8 7 2 4 
5 6 3 1 8 7 2 4 
5 3 6 1 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 7 8 2 4 
5 3 1 6 7 2 8 4 
5 3 1 6 7 2 4 8 
3 5 1 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 2 7 4 8 
3 1 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 2 6 4 7 8 
1 3 5 2 4 6 7 8 
1 3 5 2 4 6 7 8 
1 3 5 2 4 6 7 8 
1 3 2 5 4 6 7 8 
1 3 2 4 5 6 7 8 
1 3 2 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 

v2 output 
6 5 3 1 8 7 2 4 
5 6 3 1 8 7 2 4 
5 3 6 1 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 7 8 2 4 
5 3 1 6 7 2 8 4 
5 3 1 6 7 2 4 8 
3 5 1 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 7 2 4 8 
3 1 5 6 2 7 4 8 
3 1 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 6 2 4 7 8 
1 3 5 2 6 4 7 8 
1 3 5 2 4 6 7 8 
1 3 5 2 4 6 7 8 
1 3 5 2 4 6 7 8 
1 3 2 5 4 6 7 8 
1 3 2 4 5 6 7 8 
1 3 2 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 


*/