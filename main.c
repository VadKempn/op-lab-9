#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    char chislition[10][10] = {"zero", "one", "two", "three", "four", "five", "six",
                               "seven", "eight", "nine"};
    gets(str);
    int n = strlen(str);
    int count_symb = 0;
    int count_numbers = 0;
    for (int i = 0; i < n; i++) {
        int asci_code = (int) str[i];
        if (48 <= asci_code && asci_code <= 57) {
            count_numbers++;
        }
        if (65 <= asci_code && asci_code <= 122) {
            count_symb++;
        }
    }
    printf("Count of symbols: %d\nCount of numbers: %d\n", count_symb, count_numbers);
    int numb;
    scanf("%d", &numb);
    printf("Your number in numeral: %s", chislition[numb]);
    return 0;
}