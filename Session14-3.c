#include<stdio.h>
#include<string.h>
int main(){
	// Khai bao chuoi va mang
	char word[100]="Banh xanh";
	char temp[100];
	int i;
	int size=strlen(word);
	int j=size-1;
	// Xu ly chuoi dao nguoc	
	for(i=0;i<size/2;i++){
		temp[0]=word[j];
		word[j]=word[i];
		word[i]=temp[0];
		j--;
}
	for(i=0;i<strlen(word);i++){
	// In ra man hinh
 		printf("%c\t", word[i]);	
}
   return 0;
}
