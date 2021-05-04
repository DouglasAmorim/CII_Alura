# Curso C II Alura
Estudos dos módulos introdutórios ao C do curso: "C II: Avançando na linguagem" da Alura.
Link para as aulas:  [Alura](https://cursos.alura.com.br/course/introducao-a-programacao-com-c-parte-2 "Cursos Alura")

## Assuntos revisados nesse curso: 
Assustos tratados nessa revisão: 
- Manipulação de Arrays
~~~C
	int notas[10];
~~~
- sprintf
~~~C
	#include <stdio.h>

	char palavraSecreta[20];
	sprintf(palavraSecreta, "MELANCIA");
~~~
- strlen
~~~C
	for(int i = 0; i < strlen(palavraSecreta); i ++) {
		
	}
~~~

- Ler um char com Scanf
	Ao ler um char com o scanf lembrar de sempre usar espaço %c, para ignorar o enter
~~~C
	char chute
	scanf(" %c", &chute)
~~~

- Ponteiro.
~~~C

void calcula(int* c) {
	(*c)++;
	printf("%d\n", *c);
}
[...]
	int c = 10;
	calcula(&c);
[...]
~~~




### Revisão da linguagem Markdown
*Refazer o MD desse readme*
Guia basico de uso de [MarkDown](https://docs.pipz.com/central-de-ajuda/learning-center/guia-basico-de-markdown#open "guia")