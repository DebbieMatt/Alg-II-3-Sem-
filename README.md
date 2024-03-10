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

#### [Exercicio 01](https://github.com/DebbieMatt/Alg_II/blob/2b809813961e2f9929de2947287335964f5f299c/PONTEIROS/UNID.01_ATV_04.c)

Crie um programa contendo dois vetores (A e B), de tamanho igual, cujos valores foram lidos do teclado. Em seguida, implemente uma função que recebe esses vetores e troque os valores do vetor A com os valores do vetor B. Use aritmética de ponteiros para efetuar essas operações.

#### [Exercicio 02](https://github.com/DebbieMatt/Alg_II/blob/4aa95ef573439409a5ef5688460644b4e3c27708/PONTEIROS/UNID.01_ATV_05.c)

Crie um programa contendo três vetores (A, B e C), de tamanho igual. Para os vetores A e B, os valores devem ser lidos do teclado. 

Em seguida, implemente uma função que recebe os três vetores. Cada posição do vetor C deve ser preenchido com o maior valor do vetor A ou B naquela mesma posição.

Use aritmética de ponteiros para efetuar essas operações. 

#### [Exercicio 03](https://github.com/DebbieMatt/Alg_II/blob/312395a5ed3b3fcca30d546a12d83213342a58d2/PONTEIROS/UNID.01_ATV_06.c)

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

#### [Exercicio 04](https://github.com/DebbieMatt/Alg_II/blob/312395a5ed3b3fcca30d546a12d83213342a58d2/PONTEIROS/UNID.01_ATV_07.c)

Escreva um programa em C que contém uma matriz N por N. O tamanho pode ser escolhido por você. Usando exclusivamente a aritmética de ponteiros, o programa deve percorrer e calcular o produto da diagonal principal, bem como produto da diagonal secundária.

### Ponteiros Genéricos (void) e Múltiplos, Malloc e Calloc, Alocação Dinâmica de Memória: Vetores e Matrizes

> 

#### [Exercicio 01](https://github.com/DebbieMatt/Alg_II/blob/662120258cea1293fead3882e9d2abb8b5e89c20/PONTEIROS/UNID.01_ATV_08.c)

Analise o fragmento de código a seguir:

```
int a = 17;
int *ptr1 = &a;
void **ptr2 = (void **) &ptr1;
```

Qual operação pode ser feita para, a partir de ptr2, se chegar ao valor da variável a?

#### [Exercicio 02 (POR FAZER)]()

Roberval é um estudante de Controle e Automação que deseja criar um sistema controle de luzes de uma casa. Para começar, ele pretende criar procedimentos para ligar e desligar as luzes.

Um terceiro procedimento, que simula um interruptor, recebe os endereços de memória dos procedimentos ligar e desligar. Se a lâmpada estava desligada, o procedimento deve ligá-la quando acionada. Da mesma forma, se ela estivesse desligada, o procedimento deveria desligar a luz.

O procedimento interruptor deve acionar os anteriores usando ponteiros.

#### [Exercicio 03 (POR FAZER)]()

João implementou dois procedimentos em seu programa, um para verificar se um número é divisível por 3, outro para multiplicar o valor recebido por 10. Ambos os procedimentos recebem um número inteiro com parâmetro e não retornam valores, apenas exibem o resultado na tela.

João deseja criar um vetor com ponteiros para esses procedimentos para, em seguida, passar o vetor como parâmetro para um procedimento especial. Este último procedimento acionará os procedimentos recebidos como parâmetro para um conjunto de números inteiros determinados localmente.

#### [Exercicio 04 (POR FAZER)]()

Uma estudante de Algoritmos e Estrutura de Dados II deseja implementar com conjunto de funções/procedimentos para facilitar a criação de vetores alocados dinamicamente na memória, oferecendo recursos que possibilitem:

* a criação de um novo vetor;

* a inserção de valores no vetor, lidos do teclado;

* a impressão do vetor;

* a mudança da capacidade de armazenamento do vetor, para mais ou para menos;

* a liberação do espaço de memória ocupado pelo vetor;

### Typedef Struct, Union e Enumerador 

#### [Exercicio 01](https://github.com/DebbieMatt/Alg_II/blob/9d4779da431f9945831471dc56cc3ce42ec98b64/UNID.%202%20-%20TIPOS%20ABSTRATOS%20DE%20DADOS/UNID.02_ATV_01.c)

Crie um programa em C que utilize uma struct para armazenar informações sobre um produto em um sistema de inventário. 

A struct deve conter o nome do produto, preço e quantidade em estoque. 

O programa deve permitir ao usuário adicionar novos produtos ao sistema, atualizar a quantidade em estoque e o preço, listar todos os produtos com suas informações ou excluir um produto a partir do índice. 

Além disso, implemente uma função para calcular o valor total em estoque de um produto, multiplicando o preço pela quantidade disponível.

#### [Exercicio 02](https://github.com/DebbieMatt/Alg_II/blob/9d4779da431f9945831471dc56cc3ce42ec98b64/UNID.%202%20-%20TIPOS%20ABSTRATOS%20DE%20DADOS/UNID.02_ATV_02.c)

Elabore um programa em C que utilize uma struct para gerenciar informações de veículos em um estacionamento. 

A struct deve conter detalhes como placa do veículo, marca, modelo, cor e número de horas estacionado. 

O programa deve permitir ao usuário registrar a entrada de veículos, calcular o custo do estacionamento com base nas horas estacionadas (defina uma tarifa por hora), e registrar a saída dos veículos. 

Além disso, inclua uma funcionalidade para listar todos os veículos atualmente presentes no estacionamento, exibindo suas informações.

#### [Exercicio 03 (INCOMPLETO)](https://github.com/DebbieMatt/Alg_II/blob/a2a3745139ee4955b9b6ebbe5a83bfa0a6dd39cf/UNID.%202%20-%20TIPOS%20ABSTRATOS%20DE%20DADOS/UNID.02_ATV_03.c)

Imagine que você foi contratado(a) para desenvolver um sistema que irá gerenciar informações de funcionários e departamentos de uma empresa, onde um funcionário está associado a um departamento específico. Quando o departamento é atualizado, a mudança deve refletir em todos os funcionários associados a ele.

Para o departamento, devem ser armazenados o nome e o código. Para o funcionário, deve-se armazenar nome, código e o departamento ao qual está vinculado. 

O usuário deve ter a possibilidade cadastrar, listar e atualizar tanto os departamentos quanto os dados dos funcionários.

#### [Exercicio 04 (INCOMPLETO)](https://github.com/DebbieMatt/Alg_II/blob/5b6285d2fc05fbfc88f86bf25694278c2d728d7f/UNID.%202%20-%20TIPOS%20ABSTRATOS%20DE%20DADOS/UNID.02_ATV_04.c)

Estudantes da Faculdade de Engenharia estão desenvolvendo um programa em C para um sistema de automação residencial que integra diferentes tipos de sensores: temperatura (float), luminosidade (float) e movimento (int ou bool), cada um medindo um aspecto específico do ambiente. Implemente uma estrutura de dados eficiente em termos de memória para armazenar as informações desses sensores.

O programa deve permitir o cadastro de novos sensores, dando ao usuário a opção de escolher o tipo de sensor e inserir os dados correspondentes. Além disso, o programa deve ser capaz de exibir informações de todos os sensores cadastrados, com descrições apropriadas, como "Temperatura: 23.5°C", "Luminosidade: 75.0%", ou "Movimento detectado: Sim/Não".


### Manipulação de Arquivos em C

> Manipulação de Arquivos de texto e arquivos binários e Funções / Procedimentos de leitura e escrita de aquivos de texto e binários.

#### [Exercicio 01]

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