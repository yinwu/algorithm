
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

void selectionSort(int array[], int array_size)
{
	int min = 0;
	for(int i = 0; i < array_size-1; i++)
	{
		min = i;
		for(int j = i+1; j < array_size; j++)
		{
			if(array[min] > array[j])
			{
				min = j;
			}
			
		}
		if(min != i)
		{
			swap(array[i], array[min]);			
		}
		printElementInArray(array, array_size);
	}
}

int main()
{
    int data_source[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int data_size = sizeof(data_source)/sizeof(int);
    printElementInArray(data_source, data_size);
    selectionSort(data_source, data_size);
    printElementInArray(data_source, data_size);

}

/*

output:

6 5 3 1 8 7 2 4 
1 5 3 6 8 7 2 4 
1 2 3 6 8 7 5 4 
1 2 3 6 8 7 5 4 
1 2 3 4 8 7 5 6 
1 2 3 4 5 7 8 6 
1 2 3 4 5 6 8 7 
1 2 3 4 5 6 7 8 
1 2 3 4 5 6 7 8

*/