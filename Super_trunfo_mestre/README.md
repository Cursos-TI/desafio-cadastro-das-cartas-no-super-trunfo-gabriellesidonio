# Nível Mestre

Este é o nível mais avançado do projeto Super Trunfo em C. Aqui o jogo começa a ganhar cara de sistema real, com uso de estruturas, funções, comparações e um recurso de **Super Poder**.

---

## O que o código faz

- Cadastra **duas cartas** representando cidades
- Usa uma `struct` chamada `Carta` para organizar os dados
- Calcula automaticamente:
  - **Densidade populacional**
  - **PIB per capita**
  - **Super Poder** (soma dos atributos com 1/densidade)
- Compara os seguintes atributos entre as duas cartas:
  - População
  - Área
  - PIB
  - Pontos turísticos
  - Densidade (menor valor vence)
  - PIB per capita
  - Super Poder
- Exibe o vencedor de cada atributo (1 = Carta 1 vence, 0 = Carta 2 vence)

---

## O que é o Super Poder?

O Super Poder é um valor calculado com a soma dos seguintes atributos da carta:

- População  
- Área  
- PIB  
- Pontos turísticos  
- PIB per capita  
- **1 dividido pela densidade populacional** (em vez da densidade direta)

Esse valor é usado como uma espécie de "poder total" da carta. Quem tiver o maior Super Poder vence esse critério.

---

## Como compilar e executar

gcc Super_trunfo_mestre/nivelmestre.c -o nivelmestre
./nivelmestre
