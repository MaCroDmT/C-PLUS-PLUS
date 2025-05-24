#include<iostream>
using namespace std;
int main ()
{

int arr[4][4]={{1,2,3,4},{5,6,7,8},{33,66,88,89},{55,78,89,90}};


  for (int r=0;r<4;r++)
  {
    for (int c=0;c<4;c++)
    {

        cout<<arr[r][c]<<'\t';

    }
    cout<<endl<<endl;
  }

  int arr2[4][4]={{1,1,1,1},{1,1,1,1},{1,1,1,1},{1,1,1,1}};
  for (int r=0;r<4;r++)
  {
    for (int c=0;c<4;c++)
    {

        cout<<arr2[r][c]<<'\t';

    }
    cout<<endl<<endl;
  }
 for (int r=0;r<4;r++)
  {
      for (int c=0;c<4;c++)
      {
          cout<<arr[r][c]+arr2[r][c]<<'\t';
      }
      cout<<endl<<endl;
  }
  for (int r=0;r<4;r++)
  {
      for (int c=0;c<4;c++)
      {
          cout<<arr[c][r]+arr2[c][r]<<'\t';
      }
      cout<<endl;
  }


}

