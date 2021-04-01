#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

const int r = 101;
const int c = 101;

//Task B
void populateArray (int (*A)[101], int N)
{

  for (int l = 0; l < N; l++)
    {
      int i = (rand () % (100)) + 1;
      int j = (rand () % (100)) + 1;

      // check if A[i][j] is undefined (i.e. = -1)
      if (A[i][j] == -1) {
          A[i][j] = 1;
      }  else {
          A[i][j] += 1;
      } 

    }
  
}


//Task C
void searchValidEntries(int x_1,int y_1,int x_2,int y_2, int (*A)[101]){
  for(int i=x_1;i<=x_2;++i){
    for(int j=y_1;j<=y_2;++j){
      if(A[i][j] != -1){
        cout<<"("<<i<<","<<j<<")"<<":"<<A[i][j]<<endl;
      }
    }
  }
}


int main ()
{
  int A[101][101] = { };
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  A[i][j] = -1;
	}
    }
 
  populateArray (A, 2000);


    /*Question D*/
  cout<<"\n First result"<<endl<<endl;
  searchValidEntries(80,1,100,10,A);

  cout<<"\n Second result"<<endl<<endl;
  searchValidEntries(10,20,40,79,A);

  cout<<"\n Third result"<<endl<<endl;
  searchValidEntries(1,90,100,100,A);

  cout<<"\n Fourth result"<<endl<<endl;
  searchValidEntries(40,30,70,60,A);

  cout<<"\n Fifth result"<<endl<<endl;
  searchValidEntries(50,50,70,70,A);

return 0;
}






  

