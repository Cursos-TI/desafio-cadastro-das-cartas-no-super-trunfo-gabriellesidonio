# Super Trunfo - Cadastro e Comparação de Cidades

Este projeto simula um jogo no estilo *Super Trunfo*, onde cada carta representa uma cidade brasileira com diversos atributos. A aplicação foi desenvolvida em três níveis: **Novato**, **Aventureiro** e **Mestre**, cada um com objetivos específicos.

---

## Objetivos Gerais

- Desenvolver o raciocínio lógico e a organização de dados em estruturas simples.
- Implementar entrada, processamento e saída de dados com variáveis do tipo `char`, `int` e `float`.
- Evoluir do cadastro de dados para o cálculo de novos atributos e comparação.
- Aplicar estruturas de controle `switch`, `if-else` e menus interativos.


---

## Nível Novato
Implementa o **cadastro de duas cidades** com os seguintes campos:
- Estado (char)
- Código (string de 5 caracteres)
- Nome da cidade (string de até 84 caracteres)
- População (`int`)
- Área (`float`)
- PIB em bilhões (`float`)
- Número de pontos turísticos (`int`)

## Foram utilizados
- Tipos de dados básicos
- Entrada com `scanf` e `gets/scanf %[^\n]`
- Impressão formatada com `printf`

---

## Nível Aventureiro
Complementa a lógica do Nível Novato com o cálculo de dois novos atributos :
- **Densidade Populacional** = população / área
- **PIB per capita** = PIB total / população (com conversão para reais)

Esses valores são automaticamente calculados e exibidos na saída.

## Foram utilizados
- Operações com `float` e `int`
- Organização de expressões aritméticas
- Impressão com casas decimais controladas (`%.2f`)

---

## Nível Mestre
Transforma o sistema em uma **dinâmica de comparação de cartas**, onde o jogador escolhe **dois atributos diferentes** para comparar entre as cidades.

Funcionalidades:
- Menu interativo para seleção de atributos
- Comparações e resultado da rodada (vitória/empate)
- Exibição de pontuações e atributos escolhidos

## Foram utilizados
- `switch` para seleção de atributos
- `if-else` para determinar resultados
- Operador ternário para simplificação de expressões
- Validação de entrada para impedir escolha duplicada

---


# Compilar e executar o Nível Novato
gcc Super_trunfo_novato/nivelnovato.c -o novato
./novato

# Compilar e executar o Nível Aventureiro
gcc Super_trunfo_aventureiro/nivelaventureiro.c -o aventureiro
./aventureiro

# Compilar e executar o Nível Mestre
gcc Super_trunfo_mestre/nivelmestre.c -o mestre
./mestre


