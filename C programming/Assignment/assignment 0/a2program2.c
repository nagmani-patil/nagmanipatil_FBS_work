#include <stdio.h>
int main() {
    int num, rev=0, rem, temp;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    temp = num;
    while(num > 0) {
        rem = num % 10;
        rev = rev * 10 + rem;
        num /= 10;
    }
    if(temp == rev)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");
    return 0;
}
