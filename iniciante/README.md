# Nível Iniciante

**Foco:** Manipulação básica de arrays, pilhas, filas e listas. A ênfase está em entender como essas estruturas funcionam e aplicar suas operações fundamentais.

## Exercícios

1. [x] **Soma de Elementos**: Escreva uma função que calcule a soma de todos os números em um _array_.

   - **Entrada dos dados**: `[1, 2, 3, 4, 5]`
   - **Retorno esperado**: `15`

2. [x] **Encontrar o Maior Valor**: Escreva uma função que encontre o maior número em um _array_.

   - **Entrada dos dados**: `[10, 4, 25, 8, 15]`
   - **Retorno esperado**: `25`

3. [x] **Inverter uma String**: Use uma pilha para inverter uma _string_.

   - **Entrada dos dados**: `“hello”`
   - **Retorno esperado**: `“olleh”`

4. [ ] **Verificador de Parênteses**: Use uma pilha para verificar se uma string de parênteses `((), [], {})` está bem formada.

   - **Entrada dos dados**: `“"{[()]}"”`
   - **Retorno esperado**: `true`
   - **Entrada dos dados**: `“"{[(])}"”`
   - **Retorno esperado**: `false`

5. [ ] **Fila de Atendimento**: Simule uma fila (Queue) onde pessoas são adicionadas ao final e atendidas pelo início.

   - **Entrada dos dados**: Adicionar("A"), Adicionar("B"), Atender(), Adicionar("C"), Atender()
   - **Retorno esperado**: Atendeu "A", Atendeu "B"

6. [ ] **Remover Duplicatas de Array Ordenado**: Dado um _array_ ordenado, remova os elementos duplicados para que cada elemento apareça apenas uma vez.

   - **Entrada dos dados**: `[1, 1, 2, 3, 3, 3, 4]`
   - **Retorno esperado**: `[1, 2, 3, 4]`

7. [ ] **Mesclar Dois Arrays Ordenados**: Escreva uma função que mescle dois arrays já ordenados em um único _array_ ordenado.

   - **Entrada dos dados**: `[1, 3, 5]` e `[2, 4, 6]`
   - **Retorno esperado**: `[1, 2, 3, 4]`

8. [ ] **Palíndromo**: Verifique se uma \__string_ é um palíndromo (lê-se da mesma forma de trás para frente).

   - **Entrada dos dados**: `"arara"`
   - **Retorno esperado**: `true`

9. [ ] **Busca Linear**: Implemente uma busca linear para encontrar o índice de um elemento em um _array_.

   - **Entrada dos dados**: `[10, 20, 30, 40, 50]`, elemento 30
   - **Retorno esperado**: `2`

10. [ ] **Implementar Pilha com Array**: Crie uma classe Pilha que use um _array_ internamente e tenha os métodos `push`, `pop`, `peek` e `isEmpty`.

    - **Entrada dos dados**: `push(5), push(10), pop()`
    - **Retorno esperado**: `10`

11. [ ] **Implementar Fila com Array**: Crie uma classe Fila que use um _array_ internamente e tenha os métodos `enqueue`, `dequeue`, `front` e `isEmpty`.

    - **Entrada dos dados**: `enqueue(5), enqueue(10), dequeue()`
    - **Retorno esperado**: `5`

12. [ ] **Rotação de Array**: Rotacione os elementos de um _array_ para a esquerda por k posições.

    - **Entrada dos dados**: `[1, 2, 3, 4, 5]`, k = 2
    - **Retorno esperado**: `[3, 4, 5, 1, 2]`

13. [ ] **Encontrar o Segundo Maior**: Encontre o segundo maior elemento em um _array_.

    - **Entrada dos dados**: `[10, 20, 4, 15, 30]`
    - **Retorno esperado**: `20`

14. [ ] **Converter Decimal para Binário**: Use uma pilha para converter um número decimal para sua representação binária.

    - **Entrada dos dados**: `23`
    - **Retorno esperado**: `10111`

15. [ ] **Encontrar o Elemento Faltante**: Dado um _array_ contendo `n` números distintos de `0` a `n`, encontre o número que está faltando.

    - **Entrada dos dados**: `[3, 0, 1]`
    - **Retorno esperado**: `2`

16. [ ] **Tamanho de uma Lista Ligada**: Implemente uma função que retorne o número de nós em uma lista ligada simples.

    - **Entrada dos dados**: `Lista 1 -> 2 -> 3 -> 4`
    - **Retorno esperado**: `4`

17. [ ] **Encontrar Elemento em Lista Ligada**: Implemente uma função que busca por um valor em uma lista ligada e retorna _true_ se encontrar.

    - **Entrada dos dados**: `Lista 10 -> 20 -> 30`, valor `20`
    - **Retorno esperado**: `true`

18. [ ] **Soma de Pares**: Encontre um par de números em um _array_ que some um valor alvo.

    - **Entrada dos dados**: `[2, 7, 11, 15]`, alvo `9`
    - **Retorno esperado**: `[0, 1]` (índices)

19. [ ] **Contagem de Frequência de Caracteres**: Conte a ocorrência de cada caractere em uma _string_.

    - **Entrada dos dados**: `"banana"`
    - **Retorno esperado**: `{'b': 1, 'a': 3, 'n': 2}`

20. [ ] **Remover Elemento**: Remova todas as instâncias de um valor específico de um _array_.

    - **Entrada dos dados**: `[3, 2, 2, 3]`, valor `3`
    - **Retorno esperado**: `[2, 2]`
