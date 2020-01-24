#include<iostream>
using namespace std;
int permutation(int n, int r)
{
  if( r==0 )
  {
  	return 1;
  }
  else
  {							
	return n*permutation(n-1,r-1);
  } 
}

int combination(int n, int r)
{
  if( r==0 )
  {
  	return 1;
  }
  else
  {
  	return (n*1.0/r)*combination( n-1,r-1 );		
  }
}

int main()
{
  int n,r;
  cout<<"Enter values of N and R: ";
  cin>>n>>r;
  try
  {
  	if( n<0 || r<0 || n<r )
  	{
  		throw "Invalid Arguements";
	}
	else
	{
		cout<<"\nPermutation ="<<permutation( n,r );
		cout<<"\nCombination ="<<combination( n,r );
	}
  }
  catch( const char* s)
  {
  	cout<<"\n"<<s;
  }
  return 0;
}
