#include<stdio.h>

union Ponto{
	struct P1{
		int x;
		int y;
		int z;
	};
	int P2[3];
};

int main (void){
	union Ponto pt;
	pt.x=10;
	pt.y=20;
	pt.z=30;
	printf("(%d,%d,%d)\n", pt.P2[0], pt.P2[1], pt.P2[2]);	
	return 0;
}

