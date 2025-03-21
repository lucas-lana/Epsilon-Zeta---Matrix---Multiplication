# Multiplicação de Matriz Epsilon e Zeta

## Objetivo

O objetivo deste repositório é propor uma solução simples, ainda que não completa ou definitiva, para a multiplicação de matrizes, buscando superar o método convencional em eficiência. Para isso, foram implementadas quatro abordagens distintas:

1. **Método Convencional**: A abordagem tradicional de multiplicação de matrizes.
2. **Abordagem Baseada em Repositório**: Inspirada em um artigo que demonstrava uma implementação alternativa.
3. **Abordagem Epsilon**: Desenvolvida por mim, com o intuito de explorar novas formas de realizar a multiplicação entre matrizes.
4. **Abordagem Zeta**: Também desenvolvida por mim, com menos etapas de processamento em comparação com a Epsilon.

## Diferenças entre Epsilon e Zeta

- **Epsilon**: Envolve mais etapas de processamento, mas mostrou-se mais eficiente nos testes.
- **Zeta**: Possui menos etapas de processamento, mas foi menos eficiente que a Epsilon.

## Métricas de Desempenho

Para avaliar o desempenho de cada abordagem, foram utilizados os seguintes parâmetros:

- **Cache-references**: Referências ao cache.
- **Cache-misses**: Falhas de cache.
- **Cycles**: Ciclos de processamento.
- **Instructions**: Instruções executadas.
- **Task-clock**: Tempo de execução.

## Conjuntos de Testes

Foram realizados testes com três conjuntos de matrizes de diferentes tamanhos:

- **100x100**
- **1000x1000**
- **2000x2000**

As capturas de tela dos resultados dos testes estão disponíveis na pasta `lib/testes` deste repositório.

### Configurações do Ambiente de Teste

- **Notebook**: VivoBook ASUSLaptop X515JA
- **Processador**: Intel® Core™ i5-1035G1

## Resultados

Dentre as quatro abordagens, a multiplicação de matrizes **Epsilon** destacou-se como a melhor em termos de utilização de cache (cache-references e cache-misses). Embora tenha demandado um uso mais intensivo do cache, ela conseguiu processar as informações com menor perda de desempenho no processador. Em segundo lugar, ficou a abordagem **Zeta**, seguida pelas outras duas (a baseada no repositório e a convencional).

### Comparação de Desempenho

- **Epsilon**: Superior em relação ao número de ciclos (cycles) e ao tempo de execução (task-clock).
- **Zeta**: Apresentou um menor número de instruções executadas (instructions), mas com um custo maior em ciclos.

## Conclusão

Os resultados demonstraram que o desenvolvimento e a aplicação dessas novas abordagens foram um sucesso. As evidências mostram que as novas técnicas superam a multiplicação convencional tanto na utilização eficiente de cache quanto na redução do número de instruções necessárias. Embora o método convencional utilize menos instruções, ele requer mais ciclos de processamento.

Em geral, a abordagem convencional é eficaz para matrizes pequenas, mas, à medida que o tamanho da matriz aumenta, as implementações **Epsilon** e **Zeta** se mostram superiores, tanto em tempo de execução quanto em eficiência de ciclos. A **Epsilon**, em particular, destacou-se como a mais eficiente, mesmo com seu maior número de etapas.

## Equações

| Abordagem          | Definição                                                                 | Syntax                     |
|--------------------|---------------------------------------------------------------------------|----------------------------|
| **Convencional**   | $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{kj})$$                        | $$A_{n \times k} \cdot B_{k \times m} = C_{n \times m}$$ |
| **Epsilon**        | $$C_{ij} = \sum_{k=1}^{n} (a_{jk} \cdot b_{ik})$$                        | $$A_{n \times k} \otimes (B_{k \times m})^T = (C_{n \times m})^T$$ |
| **Zeta**           | $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{jk})$$                        | $$A_{n \times k} \oplus (B_{k \times m})^T = C_{n \times m}$$ |

### Legenda e Explicações das Equações
1. Método Convencional

    Definição:
    $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{kj})$$
    Aqui, Cij​ é o elemento da matriz resultante C na linha i e coluna j. A multiplicação é feita somando o produto dos elementos correspondentes da linha i da matriz A e da coluna j da matriz B.

    Syntax:
    $$A_{n \times k} \cdot B_{k \times m} = C_{n \times m}$$
    Representa a multiplicação de uma matriz A de dimensão $$n \times k$$ por uma matriz B de dimensão $$k \times m$$, resultando em uma matriz C de dimensão $$n \times m$$.

2. Abordagem Epsilon

    Definição:
    $$C_{ij} = \sum_{k=1}^{n} (a_{jk} \cdot b_{ik})$$
    Nesta abordagem, os elementos da matriz resultante C são calculados multiplicando os elementos da linha j da matriz A pelos elementos da linha i da matriz B.

    Syntax:
    $$A_{n \times k} \otimes (B_{k \times m})^T = (C_{n \times m})^T$$
    Aqui, ⊗ representa uma operação de multiplicação personalizada, e (B_{k \times m})^T indica que a matriz B é transposta antes da multiplicação. O resultado é a matriz transposta de C (matriz resultante de uma multiplicação de matrizes $$A_{n \times k} \cdot B_{k \times m} = C_{n \times m}$$).

3. Abordagem Zeta

    Definição:
    $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{jk})$$
    Nesta abordagem, os elementos da matriz resultante C são calculados multiplicando os elementos da linha i da matriz A pelos elementos da linha j da matriz B. Isso também envolve uma operação de transposição.

    Syntax:
    $$A_{n \times k} \oplus (B_{k \times m})^T = C_{n \times m}$$
    Aqui, ⊕ representa uma operação de multiplicação personalizada, e $$(B_{k \times m})^T$$ indica que a matriz B é transposta antes da multiplicação. O resultado C não é transposto.

### Símbolos e Notações

    A,B,C: Matrizes.

    n,k,m: Dimensões das matrizes (linhas e colunas).

    aij,bij,cij​: Elementos das matrizes A,B,C na linha i e coluna j.

    ∑: Símbolo de somatório.

    ⋅: Multiplicação escalar.

    ×: Indica as dimensões de uma matriz (por exemplo, n x k).

    ⊗: Símbolo de produto tensorial (usado para representar a operação personalizada na abordagem Epsilon).

    ⊕: Símbolo de soma direta (usado para representar a operação personalizada na abordagem Zeta).

    T: Representa a transposta de uma matriz (inversão de linhas e colunas).

Essas abordagens foram desenvolvidas para explorar formas alternativas de multiplicação de matrizes, visando melhorar a eficiência em termos de uso de cache e ciclos de processamento.
