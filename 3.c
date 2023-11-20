#include <stdio.h>

void main(){
	int hora, min,seg;
	char a,b,c;
	while(1){
		scanf("%d%c%d%c%d%c",&hora,&a,&min,&b,&seg,&c);
		if(hora==-1){
	break;
}
	if(hora>=12){
	printf("%d:%d:%d\n",hora-12,min,seg );
}else {
	printf("%d:%d:%d\n",12+hora,min,seg );
}


}

}

