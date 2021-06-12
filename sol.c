#include <stdio.h>
#include <stdlib.h>

int main(){
    char a[10] = {'a', 't', 'h', 'a', 'r', 'v', 'a'};
    int size = 0;
    while (a[size] != '\0'){
        size++;
    }
    printf("%d", size);   
}