#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	char alphabet[] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char *ciphered = malloc(sizeof(alphabet) * sizeof(char));
	int shift_key;
    char string[20];
	printf("Type a number: \n");
	scanf("%d", &shift_key);
	for (int i = 0; i < 26; i++) {
		ciphered[(i + shift_key) % 26] = alphabet[i];
	}

    printf("Type a string: \n");
	scanf("%s", string);
    for (int i = 0; i < 20; i++){
        for(int j = 0; j < 26; j++){
            if(string[i] == alphabet[j]){
                string[i] = ciphered[j];
                break;
            }
        }
    }

    printf("%s", string);
    free(ciphered);
	return 0;
}
