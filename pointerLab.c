#include <stdio.h>

int prob1() {
    int a, b, sum;
    int *ptr1, *ptr2;
    
    scanf("%d %d", &a, &b);
    
    ptr1 = &a;
    ptr2 = &b;
    sum = *ptr1 + *ptr2;
    printf("%d", sum);
}

int prob2() {
    int arr[5];
    
    int *i = arr;
    while (i < arr+5) {
        scanf("%d", i);
        i++;
    }
    
    i = arr;
    while (i < arr+5) {
        printf("%d ", *i);
        i++;
    }
}

int prob3() {
    int n, pos = 0, neg = 0, odd = 0, even = 0;
    
    printf("Enter the array length: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int *i = arr; i < arr+n; i++) {
        scanf("%d", i);
    }
    
    for (int *i = arr; i < arr + n; i++) {
        if (*i < 0) {
            neg++;
        } else {
            pos++;
        }
        
        if ((*i)%2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Even: %d, Odd: %d, Positive: %d, Negative: %d", even, odd, pos, neg);
    
}

int prob4() {
    int n, sum = 0;
    
    printf("Enter the array length: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int *i = arr; i < arr+n; i++) {
        scanf("%d", i);
        sum+=*i;
    }
    
    printf("%d", sum);
}

int prob5arr () {
    int n, temp;
    
    printf("Enter the array length: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int *i = arr; i < arr+n; i++) {
        scanf("%d", i);
    }
    
    int p = 1;
    for(int *i = arr; i < arr+(n/2); i++) {
        temp = *(i+n-p);
        *(i+n-p) = *i;
        *i = temp;
        p+=2;
    }
    
    for (int *i = arr; i < arr+n; i++) {
        printf("%d ", *i);
    }
}

int prob6arr() {
    int n, temp;
    
    printf("Enter the array length: ");
    scanf("%d", &n);
    
    int arr[n];
    int arr2[n];
    
    for (int *i = arr; i < arr+n; i++) {
        scanf("%d", i);
    }
    
    int *j = arr2;
    for (int *i = arr; i < arr+n; i++) {
        *j = *i;
        j++;
    }
    
    for (int *i = arr2; i < arr2+n; i++) {
        printf("%d ", *i);
    }
}

int prob7() {
    int n;
    
    printf("Enter the array length: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for (int *i = arr; i < arr+n; i++) {
        scanf("%d", i);
    }
    
    int small = *arr, large = *arr;
    
    for (int *i = arr; i < arr+n; i++) {
        if (small > *i) {
            small = *i;
        }
        
        if (large < *i) {
            large = *i;
        }
    }
    
    printf("%d %d", small, large);
}

int prob8() {
    char str1[200], str2[200];
    
    fgets(str1, sizeof(str1), stdin);
    
    for (char *i = str1; *i != '\0'; i++) {
        if (*i == '\n') {
            *i = '\0';
            break;
        }
    }
    
    fgets(str2, sizeof(str2), stdin);
    
    for (char *i = str2; *i != '\0'; i++) {
        if (*i == '\n') {
            *i = '\0';
            break;
        }
    }
    
    char *p1 = str1, *p2 = str2;
    
    while (*p1 != '\0') {
        p1++;
    }
    
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    
    *p1 = '\0';
    
    printf("%s", str1);
}

int prob9() {
    char str[200];
    int vow = 0, con = 0;
    
    fgets(str, sizeof(str), stdin);
    
    for (char *i = str; *i != '\0'; i++) {
        if (*i == '\n') {
            *i = '\0';
            break;
        }
    }
    
    for (char *i = str; *i != '\0'; i++) {
        if (*i == 'a' || *i == 'e' || *i == 'i' || *i == 'o' || *i == 'u') {
            vow++;
        } else if (*i == ' ') {
            continue;
        } else {
            con++;
        }
    }
    
    printf("Vowel: %d, consonant: %d", vow, con);
}

int prob10() {
    char str[200], str2[200];
    int flag = 1;
    
    fgets(str, sizeof(str), stdin);
    
    char *i = str;
    for (; *i != '\0'; i++) {
        if (*i == '\n') {
            *i = '\0';
            break;
        }
    }
    
    char *j = str2;
    i--;
    for (; i >= str; i--) {
        *j = *i;
        j++;
    }
    
    *j = '\0';
    
    i = str;
    j = str2;
    
    while (*i != '\0') {
        if (*i != *j) {
            flag = 0;
            break;
        }
        i++;
        j++;
    }
    
    if (flag == 1) {
        printf("Pal");
    } else {
        printf("Not pal");
    }
}

int prob15(char *str) {
    int size = 0;
    for (char *i = str; *i != '\0'; i++) {
        size++;
    }
    
    char *i = str;
    char *j = str+size-1;
    char temp;
    while (i < j) {
        temp = *i;
        *i = *j;
        *j = temp;
        i++;
        j--;
    }
}

int prob16(int *num, int *digcount, int *rev) {
    *digcount = 0;
    *rev = 0;
    
    if (*num == 0) {
        *digcount = 1;
        return 0;
    }
    
    while(*num != 0) {
        int digit = (*num)%10;
        *rev = (*rev)*10+digit;
        (*num)/=10;
        (*digcount)++;
    }
}

int main()
{
    //prob1();
    //prob2();
    //prob3();
    //prob4();
    //prob5arr();
    //prob6arr();
    //prob7();
    //prob8();
    //prob9();
    //prob10();
    
    char str[200];
    fgets(str, sizeof(str), stdin);
    
    for (char *i = str; i < str+sizeof(str); i++) {
        if (*i == '\n') {
            *i = '\0';
            break;
        }
    }
    
    prob15(str);
    
    printf("%s", str);
    
    int num, digcount, rev;
    scanf("%d", &num);
    prob16(&num, &digcount, &rev);
    printf("dig: %d, rev: %d", digcount, rev);

    return 0;
}
