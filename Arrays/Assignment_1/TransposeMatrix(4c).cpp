#include<iostream>
using namespace std;

int main()
{
	int row, col, m[100][100];

   cout<<"Number of rows (>1 & <100): "<<endl;
   cin>>row;
   cout<<"Number of columns (>1 & <100): "<<endl;
   cin>>col;

   cout<< "Enter the elements of matrix: "<<endl;
   for(int i=0; i<row; i++) 
   {
     for(int j= 0; j<col; j++)
     {
       cin>>m[i][j];
     }
   }
   cout<<"\nThe matrix is:"<<endl;
      for(int i=0; i<row; ++i)
      {
         for(int j=0; j<col; ++j)
         {
            cout<<m[i][j]<<" ";
         }   
         cout<<endl;
      }
      cout<<endl;

    int t[row][col];

	for(int a=0; a<row; a++)
    {
        for(int b=0; b<col; b++)
        {
            t[b][a]=m[a][b];
        }
    }

	cout<<"Transpose of the matrix is \n";
	for(int i=0; i<col; i++)
	{
		for(int j=0; j<row; j++)
        {
            cout<< t[i][j]<<" ";
        }
        cout<<endl;
	}

return 0;
}

