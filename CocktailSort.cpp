
#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void printElementInArray(int array[], int array_size)
{
    for(int i = 0; i < array_size; i++)
    {
        std::cout <<  array[i]  << " ";
    }
    std::cout << std::endl;
}

void CocktailSort(int array[], int size)
{
	int left = 0, right = size-1;
	while (left < right)
	{
		for(int i = left; i < right; i++)
		{
			if(array[i] > array[i+1])
			{
				swap(array[i], array[i+1]);
			}
			printElementInArray(array, size);
		}
		right--;
		for(int i = right; i > left; i--)
		{
			if(array[i-1] > array[i])
			{
				swap(array[i-1], array[i]);
			}
			printElementInArray(array, size);
		}
		left++;
	}
}

int main()
{
    int data_source[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int data_size = sizeof(data_source)/sizeof(int);
    printElementInArray(data_source, data_size);
    CocktailSort(data_source, data_size);
    printElementInArray(data_source, data_size);

}

/*

output:

6 5 3 1 8 7 2 4 
5 6 3 1 8 7 2 4 
5 3 6 1 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 8 7 2 4 
5 3 1 6 7 8 2 4 
5 3 1 6 7 2 8 4 
5 3 1 6 7 2 4 8 
5 3 1 6 7 2 4 8 
5 3 1 6 2 7 4 8 
5 3 1 2 6 7 4 8 
5 3 1 2 6 7 4 8 
5 1 3 2 6 7 4 8 
1 5 3 2 6 7 4 8 
1 3 5 2 6 7 4 8 
1 3 2 5 6 7 4 8 
1 3 2 5 6 7 4 8 
1 3 2 5 6 7 4 8 
1 3 2 5 6 4 7 8 
1 3 2 5 4 6 7 8 
1 3 2 4 5 6 7 8 
1 3 2 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8

*/