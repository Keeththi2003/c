#include <stdio.h>
int fun(int n)
{
    if (n<=1) {
        return n;
    }
    else{
        return n*fun(n-2);
    }
}
int main() 
{
    printf("anser is %d",fun(4));
    printf("hjghjkhkkh\n");
}

