#include <stdio.h>
#include <string.h>

void abertura() {
	printf("******************************\n");
	printf("*       Jogo da Forca        *\n");
	printf("******************************\n");
}

void chuta(int* tentativas, char chutes[26]) {
	char chute;
	scanf(" %c", &chute);
	chutes[*tentativas] = chute;
	(*tentativas)++;
}

int jaChutou(char letra, char chutes[26], char tentativas) {
	int achou = 0;

	for(int j = 0; j < tentativas; j++) {
		if (chutes[j] == letra) { 
			achou = 1;
			break;
		}
	}

	return achou;
}

void desenhaForca(char palavraSecreta[20], char chutes[20], int tentativas) {
	for (int i = 0; i < strlen(palavraSecreta); ++i) {

		int achou = jaChutou(palavraSecreta[i], chutes, tentativas);

		if (achou) {
			printf("%c ", palavraSecreta[i]);
		} else {
			printf("_ ");
		}

	}

}

void escolhaPalavra(char palavraSecreta[20]) {
	// ultimo caracter tem que ser \0
	sprintf(palavraSecreta, "MELANCIA");
}

int main() {
	char palavraSecreta[20];
	char chutes[26];
	int tentativas = 0;
	int acertou = 0;
	int enforcou = 0;
	
	escolhaPalavra(palavraSecreta);
	abertura();

	do {
		desenhaForca(palavraSecreta, chutes, tentativas);
		chuta(&tentativas, chutes);

	} while(!acertou && !enforcou);
}

