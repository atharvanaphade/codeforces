#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    double h, l;
    cin >> h >> l;
    printf("%.10lf", (l * l - h * h) / (2 * h));
}