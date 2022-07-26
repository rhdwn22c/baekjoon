#include <stdio.h>
#include <string.h>

int main() {
    int num, renum;
	char arr[20];
	
    	scanf("%d", &num);
	
	for(int i = 0; i < num; i++) {
				
		scanf("%d %s", &renum, arr);
		
		for(int j = 0; j < strlen(arr); j++) 
			for(int k = 0; k < renum; k++) {
                printf("%c", arr[j]);
            }
		
		printf("\n");
	}
}