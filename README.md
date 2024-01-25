# Exercícios de Algoritmo e estrutura de Dados II em C 

## Descrição

![GitHub language count](https://img.shields.io/static/v1?label=C&message=framework&color=blue&style=for-the-badge&logo=C)
![Status](https://img.shields.io/static/v1?label=STATUS&message=ANDAMENTO&color=GREEN&style=for-the-badge)

> Resolução em C dos exercícios da Disciplina de Algoritmo e estrutura de Dados II

### Conteúdo

Arquivos com seus respectivos desafios:

1. [Descrição](#descrição)
2. [Conteúdo](#conteúdo)
3. [Saiba que](#saiba-que)
4. [Executando via Terminal](#exec-term)
5. [Enunciados](#enunciados)
   1. [PONTEIROS](#PONTEIROS)
  
## Saiba que

Como são resoluções para um curso de Lógica de Programação (nível inicante), não foram utilizadas as famosas boas práticas de programação, pois o objetivo é justamente ensinar os fundamentos de lógica, sem adicionar muita complexidade.

## Executando via Terminal

Para compilar um programa no LINUX você deve primeiramente abrir um janela de `console/terminal`. 

Se você estiver trabalhando em "modo texto", você já está numa janela de console. Caso esteja em um ambiente gráfico, então deve ativar a janela de console clicando no ícone correspondente.

A seguir, vá ao diretório onde você gravou o seu programa, usando o comando: `cd`.

Supondo que o nome de seu programa seja `teste.c`, para compilá-lo digite:

```
 g++ -o teste teste.c
```

Caso a compliação tenha sido executada com sucesso, você poderá executar seu programa, digitando:

```
 ./teste
```

## Enunciados
### PONTEIROS

### Passagem de Parâmetros, Alocação de Memória e Ponteiros

> Tópicos abordados: Passagem de parâmetros para funções, princípios da alocação de memória, conceito de ponteiros, utilização de ponteiros na passagem de parâmetro para funções e manipulação de ponteiros.

#### [Exercicio 00](https://github.com/DebbieMatt/Alg_II/blob/45bd30dbb30efb010adcd75ca5cd8e896f055c2d/PONTEIROS/UNID.01_ATV_00.c)

Escreva, usando ponteiros, uma função que recebe duas variáveis do tipo inteiro: uma representa a idade de uma pessoa, enquanto a outra representa o sexo. A função deve atualizar o valor da variável que representa a idade para o tempo que falta para a pessoa se aposentar, considerando as seguintes regras hipotéticas: 

* Mulheres podem se aposentar aos 60 anos; 
* Homens podem se aposentar aos 65 anos.

#### [Exercicio 01](https://github.com/DebbieMatt/Alg_II/blob/45bd30dbb30efb010adcd75ca5cd8e896f055c2d/PONTEIROS/UNID.01_ATV_01.c)

Implemente, na linguagem de programação C, um programa que contenha duas variáveis: uma do tipo inteiro e outra com ponto flutuante. Compare os endereços dessas variáveis e exiba, de uma só vez, o maior endereço de memória, junto ao valor que ele armazena. 

#### [Exercicio 02](https://github.com/DebbieMatt/Alg_II/blob/45bd30dbb30efb010adcd75ca5cd8e896f055c2d/PONTEIROS/UNID.01_ATV_02.c)

O CuiaBank é um banco digital criado por estudantes da UFMT, incluindo você, que ficou responsável por implementar uma função para controle de saques. O CuiaBank oferece para seus clientes um valor de saldo especial, que pode ser emprestado a juros.

A cada tentativa de saque, deve ser verificado se o valor a ser sacado é inferior ou igual à soma do saldo da conta com o saldo especial. Se a operação for efetivada, a função deve alterar os seguintes valores: saldo em conta, saldo especial utilizado (ambos armazenados na função principal). Ao final das operações, escreva na tela o extrato bancário. 

#### [Exercicio 03](https://github.com/DebbieMatt/Alg_II/blob/ec932aefd31a65b0ba1d8d8175260461f53ebbe8/PONTEIROS/UNID.01_ATV_03.c)

Maria Gláucia trabalha no departamento de recursos humanos de uma empresa que aumentará o salário dos seus funcionários. O programa lida com as seguintes informações:

* código do departamento, representado por um número inteiro de 1 a 5;
* salário do funcionário, representado por um número real;

Para funcionários dos departamentos 1 e 2, o aumento será de 22%. Para os funcionários do departamento 3, o aumento será de 17%. Para os funcionários do departamento 4 e 5, o aumento de salário será de 10%.

Considerando as informações anteriores, implemente um programa com uma função que altera o novo salário dos funcionários, considerando o salário atual, o reajuste e o departamento de atuação. 

Ao final, imprima os valores de salário reajustados.

### Aritmética de Ponteiros, Vetores e Matrizes

> Aritmética de ponteiros (operações de adição e subtração com endereços de memória), acessar valores em vetores e matrizes com ponteiros.

#### [Exercicio 04](https://github.com/DebbieMatt/Alg_II/blob/2b809813961e2f9929de2947287335964f5f299c/PONTEIROS/UNID.01_ATV_04.c)

Crie um programa contendo dois vetores (A e B), de tamanho igual, cujos valores foram lidos do teclado. Em seguida, implemente uma função que recebe esses vetores e troque os valores do vetor A com os valores do vetor B. Use aritmética de ponteiros para efetuar essas operações.

#### [Exercicio 05](https://github.com/DebbieMatt/Alg_II/blob/4aa95ef573439409a5ef5688460644b4e3c27708/PONTEIROS/UNID.01_ATV_05.c)

Crie um programa contendo três vetores (A, B e C), de tamanho igual. Para os vetores A e B, os valores devem ser lidos do teclado. 

Em seguida, implemente uma função que recebe os três vetores. Cada posição do vetor C deve ser preenchido com o maior valor do vetor A ou B naquela mesma posição.

Use aritmética de ponteiros para efetuar essas operações. 

#### [Exercicio 06](https://github.com/DebbieMatt/Alg_II/blob/39f32765d40cb187ec667dd37d816476fd642d7f/PONTEIROS/UNID.01_ATV_06.c)

Escreva um programa com um vetor de tamanho N (informado pelo usuário via teclado), com dados de tipo inteiro ou ponto flutuante (a seu critério), também informados pelo usuário final via teclado. 

Em seguida, implemente uma função que receba esse vetor e crie uma matriz de tamanho N por N. A primeira coluna da matriz deve conter os valores originais do vetor. As colunas restantes devem conter o resultado da multiplicação por 2, 3… n-1.

Exemplo:

Considere o seguinte vetor de entrada:

> 1 2 3 4 5

Considere a matriz de saída:

``````
1 	2	3	4	5
2	4	6	8	10
3	6	9	12	15
4	8	12	16	20
5	10	15	20	25
``````

Elabore as operações usando exclusivamente aritmética de ponteiros para percorrer o vetor e a matriz.

#### [Exercicio 07]()

Escreva um programa em C que contém uma matriz N por N. O tamanho pode ser escolhido por você. Usando exclusivamente a aritmética de ponteiros, o programa deve percorrer e calcular o produto da diagonal principal, bem como produto da diagonal secundária.

### Ponteiros Genéricos (void) e Múltiplos, Malloc e Calloc, Alocação Dinâmica de Memória: Vetores e Matrizes

> 

#### [Exercicio 08]()



## 📫 Contribuindo para a manutenção

Para contribuir com projeto final e nos auxiliar a continuar desenvolvendo melhor, aprimorando e torna-lo mais eficientes, siga estas etapas:

1. Bifurque este repositório.
2. Crie um branch: `git checkout -b <nome_branch>`.
3. Faça suas alterações e confirme-as: `git commit -m '<mensagem_commit>'`
4. Envie para o branch original: `git push origin <nome_do_projeto> / <local>`
5. Crie a solicitação de pull.

Como alternativa, consulte a documentação do GitHub em [como criar uma solicitação pull](https://help.github.com/en/github/collaborating-with-issues-and-pull-requests/creating-a-pull-request).

## 😄 Seja um dos contribuidores

Quer fazer parte desse projeto? Clique [AQUI](CONTRIBUTING.md) e leia como contribuir.

## 📝 Licença

Esse projeto está sob licença. Veja o arquivo [LICENÇA](LICENSE.md) para mais detalhes.