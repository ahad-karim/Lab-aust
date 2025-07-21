#include <stdio.h>

int problem5() {
    int a, result = 0;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        if (i < a) {
            printf("%d+", i*i*i);
            result+=i*i*i;
        } else {
            printf("%d=", i*i*i);
            result+=i*i*i;
        }
    }

    printf("%d", result);
    return 0;
}

int prob7() {
    int a, prime = 1;
    scanf("%d", &a);

    if (a == 0 || a == 1 || a == 2) {
        prime = 1;
    } else if (a%2==0) {
        prime = 0;
    } else {
        for (int i = 3; i <= a/2; i++) {
            if (a%i==0) {
                prime = 0;
                break;
            }
        }
    }

    if (prime) {
        printf("Prime");
    } else {
        printf("Not prime");
    }

    return 0;
}

int prob11() {
    int a, num = 1;
    scanf("%d", &a);

    for (int i = 1; i <=a; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", num++);
        }
        printf("\n");
        num = 1;
    }

    return 0;
}

int prob13() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= (2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int prob14() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = a-i; j >0; j--) {
            printf(" ");
        }

        for (int j = 1; j <= (2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int prob15() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = a-i; j > 0; j--) {
            printf(" ");
        }

        for (int j = 1; j <= (2*i)-1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = a-1; i > 0; i--) {
        for (int j = 1; j <= a-i; j++) {
            printf(" ");
        }

        for (int j = 1; j<=(2*i)-1;j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

int prob16() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= a-i; j++) {
            printf(" ");
        }

        for (int j = i; j < 2*i; j++) {
            printf("%d", j);
        }

        for (int j = (2*i)-2; j >= i; j--) {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}

int prob17() {
    int a;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 0; j <i; j++) {
            printf("%c", 'A'+i-1);
        }
        printf("\n");
    }

    for (int i = a-1; i > 0; i--) {
        for (int j = i; j > 0; j--) {
            printf("%c", 'A'+i-1);
        }
        printf("\n");
    }
    return 0;
}

int prob18() {
    int a, num = 1;
    scanf("%d", &a);

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }

        for (int j = 1; j <= 2*(a-i+1)-1;j++) {
            if (num <= 9) {
                printf("%d", num++);
            } else {
                num = 1;
                printf("%d", num++);
            }
        }

        printf("\n");
    }

    return 0;
}

int main() {
    //problem5();
    //prob7();
    //prob11();
    //prob13();
    //prob14();
    //prob15();
    //prob16();
    //prob17();
    prob18();

    return 0;
}