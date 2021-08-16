#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int arr[100], n;
	cout<<"Enter the size of an array :"<<endl;
	cin>>n;
	
    cout<<"Enter the elements of the array :"<<endl;
    for (int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
	
	cout<<"Created Array is:"<<endl;
    for(int i=0; i<n; i++)
    {
        cout<< arr[i]<< " ";
    }                
    cout << endl;

	if (n == 0 || n == 1)
		cout<< "No Duplicates";
	sort(arr, arr + n);
	int temp[n];

	int j = 0;
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]!=arr[i+1])
		{
			temp[j++]=arr[i];
		}
	}

	temp[j++]=arr[n-1];	

	for(int i=0;i<j;i++)
	{
		arr[i]=temp[i];
	}

	cout<<"Array with unique elements is"<<endl;
	
	for(int i=0;i<j;i++) 
	{
		cout<< arr[i]<< " ";
	}

return 0;
}

