
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

void insertSort(int array[], int array_size)
{
	for(int i = 1; i < array_size; i++)
	{
		int key = array[i];
		int j = 0;
		for(j = i-1; j >= 0 && array[j] > key; j--)
		{
			array[j+1] = array[j];
		}
		array[j+1] = key;
		printElementInArray(array, array_size);
	}
}

int main()
{
    int data_source[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int data_size = sizeof(data_source)/sizeof(int);
    printElementInArray(data_source, data_size);
    insertSort(data_source, data_size);
    printElementInArray(data_source, data_size);

}
