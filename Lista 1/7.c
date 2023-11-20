#include <stdio.h>

	int main (){
		int t, c, f, a;
		puts("1 para celsius 2 para fahrenheit");
		scanf ("%d", &a);
		puts ("temperatura");
		scanf ("%d", &t);
		switch (a){
			case 1: 
			f=t*1.8+32;
			printf("conversão em fahrenheit%df\n",f);
			break;
			case 2:
			c=(t-32)/1.8;
			printf("conversão em celsius%dc\n",c);
			break;
		}

	}