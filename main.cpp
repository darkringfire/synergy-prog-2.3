#include <iostream>

int main() {
    long long int n1, n2;
    printf("n1=");
    scanf("%lli", &n1);
    printf("n2=");
    scanf("%lli", &n2);

    if (
        (n1 == 111 && n2 == 222) ||
        (n1 == 3 && n2 == 4) ||
        (n1 == 55 && n2 == 66)
    ) {
        printf("Access granted!");
    } else {
        printf("Access denied");
    }
    return 0;
}
