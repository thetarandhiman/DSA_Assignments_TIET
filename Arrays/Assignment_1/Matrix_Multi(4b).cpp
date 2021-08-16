#include<iostream>
using namespace std;

int main() {
   int row1, row2, col1, col2, m1[100][100], m2[100][100], product[100][100], i, j, k;

   //First Matrix input
   cout<<"Number of rows for 1st(>1 & <100): "<<endl;
   cin>>row1;
   cout<<"Number of columns for 1st(>1 & <100): "<<endl;
   cin>>col1;

   cout<< "Enter the elements of first 1st matrix: "<<endl;
   for(int i=0; i<row1; i++) 
   {
     for(int j= 0; j<col1; j++)
     {
       cin>>m1[i][j];
     }
   }

   //Second Matrix Input
   cout<<"Number of rows for 2nd(>1 & <100): "<<endl;
   cin>>row2;
   cout<<"Number of columns for 2nd(>1 & <100): "<<endl;
   cin>>col2;

   cout<< "Enter the elements of first 2nd matrix: "<<endl;
   for(int i=0; i<row2; i++)
   {
     for(int j=0; j<col2; j++)
     {
       cin>>m2[i][j];
     }
   }
   
   if (col1!=row2)
   {
      cout<<"Column of first matrix should be equal to row of second matrix"<<endl;
   }
   else
   {
      cout<<"\nThe first matrix is:"<<endl;
      for(i=0; i<row1; ++i)
      {
         for(j=0; j<col1; ++j)
         {
            cout<<m1[i][j]<<" ";
         }   
         cout<<endl;
      }
      cout<<endl;


      cout<<"The second matrix is:"<<endl;
      for(i=0; i<row2; ++i)
      {
         for(j=0; j<col2; ++j)
         {
             cout<<m2[i][j]<<" ";
         }    
         cout<<endl;
      }
      cout<<endl;


      for(i=0; i<row1; ++i)
      {
          for(j=0; j<col2; ++j)
          {
            product[i][j] = 0;
         }
      }
         
      for(i=0; i<row1; ++i)
      {
          for(j=0; j<col2; ++j)
          {
              for(k=0; k<col1; ++k)
              {
               product[i][j]+=m1[i][k]*m2[k][j];
              }
          }   
      }
         
      //OUTPUT
      cout<<"Product of the two matrices is:"<<endl;
      for(i=0; i<row1; ++i)
      {
         for(j=0; j<col2; ++j)
         {
             cout<<product[i][j]<<" ";
         }
         cout<<endl;
      }
   }

return 0;
}