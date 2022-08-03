#include <stdio.h>

 int main() {
    char arr[100];    
    scanf("%s", arr);    
    for (int i = 97; i <= 122; i++) {        
        int j = 0;        
        while (arr[j] != 0) {            
            if (arr[j] == (char)i) break;            
            j++;        
        }        
        if (arr[j] == (char)i) printf("%d ", j); 

        else printf("-1 ");    
    }
}