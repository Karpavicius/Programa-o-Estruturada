#include <stdio.h>

	void main (){
		int rafa1=0, rafa2=0, rafa3=0, rafa4=0, n=1;
		puts ("Digite valores ou valores negativo");
		do{
			scanf ("%d", &n);
			switch (n){
				case 0 ... 25:
					rafa1++;
					break;
				case 26 ... 50:
					rafa2++;
					break;
				case 51 ... 75:
					rafa3++;
					break;
				case 76 ... 100:
					rafa4++;
					break;		
			}
		}while (n>=0);
		printf ("0 a 25 = %d || 26 a 30 = %d || 51 a 75 = %d || 76 a 100 = %d\n", rafa1, rafa2, rafa3, rafa4);

	}