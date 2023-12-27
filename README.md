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

#### [Exercicio 00](https://github.com/DebbieMatt/Alg_II/blob/e85afc49fe301cf4e549e393bf1d2d4e314294ce/PONTEIROS/UNID.01_ATV_00.c)

Escreva, usando ponteiros, uma função que recebe duas variáveis do tipo inteiro: uma representa a idade de uma pessoa, enquanto a outra representa o sexo. A função deve atualizar o valor da variável que representa a idade para o tempo que falta para a pessoa se aposentar, considerando as seguintes regras hipotéticas: 

* Mulheres podem se aposentar aos 60 anos; 
* Homens podem se aposentar aos 65 anos.

#### [Exercicio 01](https://github.com/DebbieMatt/Alg_II/blob/99317815e95bb5a089fe873a5dc00d7e1c46250c/PONTEIROS/UNID.01_ATV_01.c)

Implemente, na linguagem de programação C, um programa que contenha duas variáveis: uma do tipo inteiro e outra com ponto flutuante. Compare os endereços dessas variáveis e exiba, de uma só vez, o maior endereço de memória, junto ao valor que ele armazena. 

#### [Exercicio 02](https://github.com/DebbieMatt/Alg_II/blob/99317815e95bb5a089fe873a5dc00d7e1c46250c/PONTEIROS/UNID.01_ATV_02.c)

O CuiaBank é um banco digital criado por estudantes da UFMT, incluindo você, que ficou responsável por implementar uma função para controle de saques. O CuiaBank oferece para seus clientes um valor de saldo especial, que pode ser emprestado a juros.

A cada tentativa de saque, deve ser verificado se o valor a ser sacado é inferior ou igual à soma do saldo da conta com o saldo especial. Se a operação for efetivada, a função deve alterar os seguintes valores: saldo em conta, saldo especial utilizado (ambos armazenados na função principal). Ao final das operações, escreva na tela o extrato bancário. 

#### [Exercicio 03](https://github.com/DebbieMatt/Alg_II/blob/99317815e95bb5a089fe873a5dc00d7e1c46250c/PONTEIROS/UNID.01_ATV_03.c)

Maria Gláucia trabalha no departamento de recursos humanos de uma empresa que aumentará o salário dos seus funcionários. O programa lida com as seguintes informações:

* código do departamento, representado por um número inteiro de 1 a 5;
* salário do funcionário, representado por um número real;

Para funcionários dos departamentos 1 e 2, o aumento será de 22%. Para os funcionários do departamento 3, o aumento será de 17%. Para os funcionários do departamento 4 e 5, o aumento de salário será de 10%.

Considerando as informações anteriores, implemente um programa com uma função que altera o novo salário dos funcionários, considerando o salário atual, o reajuste e o departamento de atuação. 

Ao final, imprima os valores de salário reajustados.

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