#include <stdio.h>

void main (){
	int c1, p1, c2, p2;

	while (1){
		scanf ("%d %d %d %d", &p1,&c1, &p2, &c2);
		if (c1==0 && c2==0 && p1==0 && p2==0)
			break;
	}	if(p1*c1==p2*c2){
		puts ("0");
	}else if (p1*c1>p2*c2){
			puts ("-1");
	}else{
		puts ("1");
	}
}