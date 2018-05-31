

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

void dichotomySort(int array[], int array_size)
{
	int key, mid;
	for(int i = 1; i < array_size; i++)
	{
		key = array[i];
		int left = 0;
		int right = i - 1;
		while(left <= right)
		{
			mid = right + left / 2;
			if(array[mid] > key)
			{
				right = mid - 1;
			}
			else
			{
				left = mid + 1;
			}
		}
		for(int j = i - 1; j >= left; j--)
		{
			array[j+1] = array[j];
		}
		array[left] = key;
		printElementInArray(array, array_size);
	}
}

int main()
{
    int data_source[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int data_size = sizeof(data_source)/sizeof(int);
    printElementInArray(data_source, data_size);
    dichotomySort(data_source, data_size);
    printElementInArray(data_source, data_size);

}