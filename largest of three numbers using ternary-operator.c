#include<stdio.h>
void main(){
	int n1,n2,n3,large;
	printf("Enter the 3 number: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	large = (n1 > n2)? (n1 > n3)? n1:n3 : (n2 > n3) ? n2 : n3;
	printf("Largest of three number is = %d",large) ;
}
