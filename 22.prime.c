#include <stdio.h>

int main() {
int n =4;
int i;
int count=0 ;
for (i=1;i<=n;i++){
    if (n%i==0){
        count ++;
    }
}
if (count>2 ){
    printf (" it is not prime");
}
else {
    printf ("it is  prime");
}
    return 0;
}