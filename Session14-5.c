#include<stdio.h>
#include<string.h>
int main(){
	// Khai bao chuoi va bien
    char word[1000];
    int count =0;
    int n = sizeof(word)/sizeof(char);
    // Gan gia tri tu nguoi nhap vao
    printf("hay nhap vao mot chuoi bat ky: ");
    fgets(word,sizeof(word),stdin);
    for (int i = 0; word[i] != '\0'; i++) {
        if (word[i] != ' ' && word[i+1] == ' ' || word[i+1] == '\0') {
            count++;
        }
    }
    // In ra man hinh
    printf("So tu trong chuoi: %d\n", count);
    return 0;
}
