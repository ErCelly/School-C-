#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main ()
{
	const int DIM = 12;
	int v[DIM];
	int num;
	
    srand (time(NULL));
	
	for( int i=0; i<DIM; i++){
		num=rand()%10+1;
		v[i]=num;		
	}	
		
		
		
		
	}


	return 0;
}
