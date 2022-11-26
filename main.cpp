#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2==0) printf("%d", 1<<(n/2));
	else printf("0");
	return 0;
}