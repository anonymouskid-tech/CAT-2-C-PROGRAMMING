/*
A 2D ARRAY ,NAMED SCORES WITH 2 MATRIXES OF TWO ROWS AND TWO COLUMNS.
AUTHOR;MUTHEE ANTONY KARIUKI.
REG NO:CT101/G/23600/24.
DATE:07/11/24.
*/
#include<stdio.h>
int main(){
	int i,j;
	// 1st 2D array
	int scores[2][2]={ {65,92},{84,72}};
	// 2nd 2D array
	int scores1[2][2]={{35,70},{59,67}};
	
	for(i=0;i<2;i++){
	for(j=0;j<2;j++){
	printf("scores[%d][%d]= %d \n",i,j,scores[i][j]);
}
}

for(i=0;i<2;i++){
	for(j=0;j<2;j++){
		printf("scores[%d][%d] = %d \n",i,j,scores1[i][j]);
	}
}
return 0;
}