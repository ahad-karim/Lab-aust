#include <stdio.h>
#include <math.h>

int prob1(int n, int p) {
    if (p < 0) {
        return 0;
    }
    printf("%d ", n-p);
    prob1(n, p-1);
    
}

int prob2(int n) {
    if (n==0) {
        return 0;
    }
    printf("%d ", n);
    prob2(n-1);
}

int prob3(int n) {
    int i = 1;
    if (n%10 != 0) {
        return i + prob3(n/10);
    } else {
        return 0;
    }
}

int prob4(int n) {
    int i = n%10;
    if (n % 10 != 0) {
        return i + prob4(n/10);
    }
}

int prob5(int n, int count) {
    int i = n%10;
    if (n % 10 != 0) {
        return i*pow(10, count-1) + prob5(n/10, count-1);
    }
}

int prob6(int n) {
    int i = n;
    if (n==1) {
        return 1;
    }
    return i * prob6(n-1);
}

int prob8(int n,int i,int j, int p) {
    if (n == 1) {
        return 0;
    } else if (n == 2) {
        return 1;
    }
    if (p == n) {
        return j;
    }
    int temp = i+j;
    prob8(n, j, temp, p+1);
    
}

int prob9(int n, int p) {
    if (n == 2 || n==3) {
        printf("Prime");
    }
    if (p == n/2) {
        printf("Prime");
        return 0;
    } else if (n%p == 0) {
        printf("Not prime");
        return 0;
    }
    prob9(n, p+1);
    
    
}

int prob10(int n, int p) {
    if (p == 0) {
        return 1;
    }
    return n*prob10(n, p-1);
}

int prob11(int n, int p) {
    if (n%p==0) {
        return p;
    }
    
    prob11(p, n%p);
}

int prob12(int n, int p) {
    int gcd = prob11(n, p);
    return (n*p)/gcd;
}

int main () {
    int n;
    scanf("%d", &n);
    
    //prob1(n, n-1);
    //prob2(n);
    //printf("%d", prob3(n));
    //printf("%d", prob4(n));
    
    
    // int count = 0;
    // int temp = n;
    // while (temp%10 != 0) {
    //     count++;
    //     temp/=10;
    // }
    // printf("%d", prob5(n, count));
    
    
    //printf("%d", prob6(n));
    //printf("%d", prob8(n,0,1,2));
    //prob9(n, 2);
    
    int p;
    scanf("%d", &p);
    //printf("%d", prob10(n, p));
    //printf("%d", prob11(n,p));
    printf("%d", prob12(n,p));
    
}
