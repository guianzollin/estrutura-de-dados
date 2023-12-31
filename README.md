# Estrutura de dados

Atividades para o aprendizado de estrutura de dados em  linguagem C.

## Atividade 1

1.1. Escreva uma função em c responsável por imprimir o conteúdo dos n elementos de um array de inteiros, conforme protótipo abaixo:

```
void printvint(int a[], int n);
```

1.2. Escreva uma função em c responsável por comparar o conteúdo dos n elementos de 2 arrays e retornar 1 se forem iguais ou 0 se forem diferentes, conforme protótipo abaixo:

```
int cmpvint(int a1[], int a2[], int n);
```

1.3. Escreva uma função em c responsável por verificar se um caractere c existe em uma string e retornar 1 caso exista ou 0 caso contrário, conforme protótipo abaixo:

```
int instring(char string[], char c);
```

## Atividade 2

Escreva uma função em C que recebe o endereço da posição inicial de uma string e um caractere.

A função deve retornar o endereço da posição do caractere lido, caso o caracterece não exista na string a função deve retornar NULL.

Na função main() solicite uma string e um caractere ao usuário e, utilizando a função anterior, mostre na tela os caracteres da string que se encontram a partir do caractere lido.

## Atividade 3

Escreva um programa que crie um array com 10 registros, sendo que cada registro é uma estrutura conforme a seguir:

```
typedef struct{
    float altura;
    float largura;
    float profundidade;
} REGISTRO;
```
O programa deve apresentar o seguinte menu de funcionalidades:

1. Inserir registro
2. Alterar registro
3. Apagar registro
4. Mostrar registros
5. Sair

## Atividade 4

Adaptar a atividade 3 para que o array de registros não tenha um tamanho pré-definido, sendo que para cada inserção de novo registro deve ser alocada memória dinamicamente.

## Atividade 5

A partir do algoritmo apresentado para implementação de uma estrutura de dados encadeada, crie um programa que permita ao usuário inserir, excluir e visualizar elementos de uma fila.

Utilizando recursividade, crie uma função que retorne a quantidade de elementos da fila e outra que permita buscar na fila uma determinada chave e retornar seu valor.

Adapte a estrutura de dados para funcionar como uma lista e permitir que sejam inseridos e excluídos elementos em qualquer posição.

## Atividade 6

Adapte o programa da atividade anterior para funcionar como uma lista duplamente encadeada e sem o uso de recursividade.

## Atividade 7

Considerando as definições de tipos e função bubbleSort demonstradas na aula crie um programa que permita ao usuário construir uma lista simplesmente encadeada com o seguinte menu de opções:

1. Inserir REGISTRO
2. Excluir REGISTRO
3. Mostrar LISTA
4. Ordenar LISTA
5. Sair

## Atividade 8

Escreva, de forma recursiva, uma função que retorne o n-ésimo termo da sequência de Fibonacci. Posteriormente, na função main, solicite ao usuário um número inteiro positivo n e imprima na tela os n primeiros termos da sequência Fibonacci.

## Atividade 9

Escreva um programa em C que solicite ao usuário 10 números e os armazene em um arquivo binário. Em seguida solicite ao usuário a posição (0 a 9) do número que ele deseja visualizar e leia do arquivo para apresentar na tela.