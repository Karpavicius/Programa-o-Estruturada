#include <stdio.h>

void main(){
	
	int a[5],b[5],c[10],x,y,i,j;
	for(x=0;x<5;x++){
	printf("Digite um valor pra A e outro para B de forma ordenada:");
	scanf("%d%d",&a[x],&b[x]);
	}

	for(x=0;x<5;x++){
	printf("%d ",a[x]);
}
	puts("");
	for(x=0;x<5;x++){
	printf("%d ",b[x]);
}
	puts("");
	i=j=0;
	
	for(x=0;x<10;x++){

	for(y=0;y<5;y++){
		if(a[i]<b[y]){
		c[x]=a[i];
		if(i<5){
		i++;
}
		break;
	}
	if(b[j]<a[i]){
		c[x]=b[j];
	if(j<5){
		j++;
}
	break;
	}
}
}
	if(a[4]<b[4]){
	c[9]=b[4];
		}else{
			c[9]=a[4];	
}
	for(x=0;x<10;x++){
	printf("%d ",c[x]);
}
}