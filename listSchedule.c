#include <stdio.h>

int tampilkanSchedule (){
	int i, j, k;
	printf ("\n\n\t|--------------------|----------|----------|----------|----------|\n");
	printf ("\t|   Ruang Praktikum   |   Lab 1  |   Lab 2  |   Lab 3  |    LSS   |\n");
	printf ("\t|---------------------|----------|----------|----------|----------|\n");
	printf ("\t|  Minggu  |   Hari   |----------|----------|----------|----------|\n");
	printf ("\t|----------|----------|----------|----------|----------|----------|\n");
	for (i=0 ; i<12 ; i++)
		{
			for (j=0 ; j<5 ; j++)
			{
				printf ("\t|\t%d\t|", [i+3]);
				printf ("\t%s\t|", getHari(j));
				for (k=1 ; k=4 ; k++)
				{
					printf ("\t%s\t|", listPraktikum[i][j][k]);
				}
				printf ("\n");
			}
			printf ("\t|-----------------------------------------------------------------|\n");
		}
	}