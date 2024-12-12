#include <stdio.h>
#include <string.h>
int main() {
    // Khai bao va gan gia tri cho chuoi bat ky
    char string[] = "an bun cha nem khong.";
    int count = 0;
    // Duyet tung ky tu trong chuoi
    for (int i = 0; i < strlen(string); i++) {
        // Kiem tra ky tu co phai la chu cai
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z')) {
            count++;
        }
    }
    // In ket qua
    printf("So ky tu la chu cai trong chuoi la: %d\n", count);
    return 0;
}
