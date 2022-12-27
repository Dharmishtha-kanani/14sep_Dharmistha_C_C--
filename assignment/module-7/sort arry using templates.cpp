#include<iostream>
using namespace std;
#define N 5

template <class T>
    
void sort(T arr[], int SIZE)
{
    
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = i+1; j < SIZE; j++)
		{
			if (arr[i] > arr[j])
			{
				T temp;
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

int main()
{
    int array[N];
	cout<<"Entner integer array elements:"<<endl;
	for (int i = 0; i < N; i++)
	{
		cin>>array[i];
	}
    

    sort(array,N);
    cout<<"After sorting they are :"<<endl;
	for (int i = 0; i < N; i++)
	{
		cout<<array[i]<<", ";
	}
	cout<<endl;
	return 0;
}
