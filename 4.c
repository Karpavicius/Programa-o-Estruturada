#include <stdio.h>

void main (){
	int comp, folhas, fcomp;
	while(1){
		scanf ("%d%d%d", &comp, &folhas, &fcomp);
	if(comp==0 && folhas==0 && fcomp==0){
		break;
	}else if ((comp*fcomp)<=folhas){
		puts("S");
	}else{
		puts("N");
	}
}
}