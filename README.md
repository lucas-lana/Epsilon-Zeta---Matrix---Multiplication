# Multiplicação de Matriz Epsilon e Zeta

## Índice
- [Objetivo](#objetivo)
- [Abordagens Implementadas](#abordagens-implementadas)
- [Diferenças entre Epsilon e Zeta](#diferenças-entre-epsilon-e-zeta)
- [Métricas de Desempenho](#métricas-de-desempenho)
- [Conjuntos de Testes](#conjuntos-de-testes)
- [Conclusão](#conclusão-da-análise-de-desempenho)
- [Equações](#equações)

## Objetivo
O objetivo deste repositório é propor uma solução simples, ainda que não completa ou definitiva, para a multiplicação de matrizes, buscando superar o método convencional em eficiência. Para isso, foram implementadas quatro abordagens distintas.

## Abordagens Implementadas
1. **Método Convencional**: A abordagem tradicional de multiplicação de matrizes.
2. **Abordagem Baseada em Repositório**: Inspirada em um artigo que demonstrava uma implementação alternativa.
3. **Abordagem Epsilon**: Desenvolvida por mim, com o intuito de explorar novas formas de realizar a multiplicação entre matrizes.
4. **Abordagem Zeta**: Também desenvolvida por mim, com menos etapas de processamento em comparação com a Epsilon.

## Diferenças entre Epsilon e Zeta
- **Epsilon**: Envolve mais etapas de processamento, mas mostrou-se mais eficiente nos testes.
- **Zeta**: Possui menos etapas de processamento, mas foi menos eficiente que a Epsilon.

## Métricas de Desempenho
Foram utilizadas as seguintes métricas para avaliar o desempenho:
- **Cache-references**: Número de acessos à memória cache.
- **Cache-misses**: Número de falhas de cache.
- **Cycles**: Ciclos de CPU gastos na execução.
- **Instructions**: Número total de instruções executadas.
- **Task-clock**: Tempo total de execução.

## Conjuntos de Testes
Foram realizados testes com três conjuntos de matrizes:
- **100x100**
- **1000x1000**
- **2000x2000**

As capturas de tela dos resultados estão disponíveis na pasta [`lib/testes`](lib/testes).

### Configurações do Ambiente de Teste
- **Notebook**: VivoBook ASUSLaptop X515JA
- **Processador**: Intel® Core™ i5-1035G1

## Comparação de Desempenho

### 100x100:
| Métrica               | Convencional           | Repositório             | Epsilon                | Zeta                   |
|-----------------------|------------------------|-------------------------|------------------------|------------------------|
| **Cache-references**  | 98.2 K (12,976 M/sec)  | 96.1 K (9,307 M/sec)    | 141.3 K (14,223 M/sec) | 96.9 K (12,521 M/sec)  |
| **Cache-misses**      | 29.3 K (29,86%)        | 39.0 K (40,60%)         | 38.0 K (26,90%)        | 34.1 K (35,24%)        |
| **Cycles**            | 24.5 M (3,247 GHz)     | 27.2 M (2,639 GHz)      | 31.3 M (3,153 GHz)     | 24.8 M (3,209 GHz)     |
| **Instructions**      | 80.7 M (3,29 IPC)      | 80.8 M (2,97 IPC)       | 81.5 M (2,60 IPC)      | 81.1 M (3,26 IPC)      |
| **Task-clock**        | 7,57 msec (0,247 CPUs) | 10,33 msec (0,342 CPUs) | 9,94 msec (0,331 CPUs) | 7,75 msec (0,552 CPUs) |
| **Tempo total**       | 0,0306 seconds         | 0,0301 seconds          | 0,0300 seconds         | 0,0140 seconds         |
| **Tempo de usuário**  | 0,0069 seconds         | 0,0109 seconds          | 0,0072 seconds         | 0,0067 seconds         |
| **Tempo de sistema**  | 0,0009 seconds         | 0,0000 seconds          | 0,0030 seconds         | 0,0016 seconds         |



### 1000x1000:
| Métrica               | Convencional            | Repositório             | Epsilon                 | Zeta                    |
|-----------------------|-------------------------|-------------------------|-------------------------|-------------------------|
| **Cache-references**  | 87.2 M (17,784 M/sec)   | 87.8 M (17,639 M/sec)   | 70.5 M (18,145 M/sec)   | 69.8 M (17,793 M/sec)   |
| **Cache-misses**      | 20.3 M (23,27%)         | 21.5 M (24,46%)         | 11.9 M (16,97%)         | 12.0 M (17,20%)         |
| **Cycles**            | 16.5 B (3,371 GHz)      | 16.6 B (3,348 GHz)      | 12.8 B (3,302 GHz)      | 13.0 B (3,327 GHz)      |
| **Instructions**      | 53.0 B (3,20 IPC)       | 53.0 B (3,18 IPC)       | 53.0 B (4,13 IPC)       | 53.0 M (4,06 IPC)       |
| **Task-clock**        | 4.9 K msec (0,627 CPUs) | 4.9 K msec (0,632 CPUs) | 3.8 K msec (0,567 CPUs) | 3.9 K msec (0,573 CPUs) |
| **Tempo total**       | 7,8221 seconds          | 7,8833 seconds          | 6,8594 seconds          | 6,8438 seconds          |
| **Tempo de usuário**  | 4,8001 seconds          | 4,8699 seconds          | 3,7667 seconds          | 3,8168 seconds          |
| **Tempo de sistema**  | 0,0913 seconds          | 0,0951 seconds          | 0,1072 seconds          | 0,0928 seconds          |


### 2000x2000:

| Métrica               | Convencional             | Repositório              | Epsilon                  | Zeta                     |
|-----------------------|--------------------------|--------------------------|--------------------------|--------------------------|
| **Cache-references**  | 1.3 B (21,036 M/sec)     | 1.3 B (21,292 M/sec)     | 538.0 M (14,960 M/sec)   | 560.0 M (14,871 M/sec)   |
| **Cache-misses**      | 672.0 M (51,61%)         | 664.6 M (49,61%)         | 145.9 M (27,12%)         | 163.4 M (29,18%)         |
| **Cycles**            | 188.7 B (3,050 GHz)      | 183.8 B (2,922 GHz)      | 102.6 B (2,854 GHz)      | 108.2 B (2,874 GHz)      |
| **Instructions**      | 412.5 B (2,19 IPC)       | 412.5 B (2,24 IPC)       | 412.4 B (4,02 IPC)       | 412.4 B (3,81 IPC)       |
| **Task-clock**        | 61.8 K msec (0,756 CPUs) | 62.9 K msec (0,801 CPUs) | 35.9 K msec (0,704 CPUs) | 37.6 K msec (0,602 CPUs) |
| **Tempo total**       | 81,9002 seconds          | 78,5693 seconds          | 51,1140 seconds          | 62,5599 seconds          |
| **Tempo de usuário**  | 60,4446 seconds          | 61,6104 seconds          | 35,1329 seconds          | 36,1456 seconds          |
| **Tempo de sistema**  | 0,70891 seconds          | 0,60036 seconds          | 0,54425 seconds          | 0,93904 seconds          |

### Como Interpretar a Tabela
- **Cache-references**: Quanto menor, melhor.
- **Cache-misses**: Quanto menor, melhor.
- **Cycles**: Quanto menor, melhor.
- **Instructions**: Quanto menor, melhor.
- **Task-clock**: Quanto menor, melhor.
- K: Mil
- M: Milhões
- B: Bilhões

## Conclusão da Análise de Desempenho

Com base nas métricas analisadas para matrizes de tamanho **100x100**, **1000x1000** e **2000x2000**, comparando as abordagens **Convencional**, **Repositório**, **Epsilon** e **Zeta**, podemos concluir o seguinte:

### Desempenho Geral:
- **Epsilon** e **Zeta** são os métodos mais eficientes em termos de **utilização de cache**, **IPC (Instructions Per Cycle)** e **tempo total de execução**, especialmente para matrizes maiores (**1000x1000** e **2000x2000**).
- **Zeta** se destaca em matrizes menores (**100x100**), apresentando o **menor tempo total de execução**.
- **Epsilon** é o mais eficiente para matrizes grandes (**2000x2000**), com o **menor tempo total** e o **melhor IPC**.
- **Convencional** e **Repositório** têm desempenho inferior em quase todas as métricas, especialmente em matrizes maiores.

### Destaques por Métrica:
1. **Cache Efficiency**:
   - **Epsilon** e **Zeta** apresentam menores taxas de **Cache-misses** em todos os cenários, indicando uma melhor otimização de cache.
   - Para matrizes **2000x2000**, **Epsilon** tem apenas **27,12%** de cache misses, enquanto **Convencional** e **Repositório** têm mais de **49%**.

2. **Eficiência de Processamento (IPC)**:
   - **Epsilon** e **Zeta** têm os maiores valores de IPC, especialmente em matrizes grandes (**4,02** e **3,81**, respectivamente, para **2000x2000**).
   - **Convencional** e **Repositório** têm IPC significativamente menor (**2,19** e **2,24**).

3. **Tempo de Execução**:
   - **Zeta** é o mais rápido para matrizes **100x100** (**0,0140 seconds**).
   - **Epsilon** é o mais rápido para matrizes **1000x1000** (**6,8594 seconds**) e **2000x2000** (**51,1140 seconds**).

4. **Tempo de Usuário**:
   - **Epsilon** e **Zeta** têm os menores tempos de execução do código do usuário, especialmente em matrizes grandes.

### Recomendações:
- Para matrizes **pequenas (100x100)**: Utilize **Zeta** para obter o menor tempo de execução.
- Para matrizes **médias (1000x1000)** e **grandes (2000x2000)**: Utilize **Epsilon** para melhor eficiência de cache, IPC e tempo total de execução.
- **Convencional** e **Repositório** são menos recomendados, especialmente para grandes volumes de dados, devido ao desempenho inferior.

### Resumo:
| Tamanho da Matriz | Melhor Método | Motivo                                                                 |
|-------------------|---------------|------------------------------------------------------------------------|
| 100x100           | **Zeta**      | Menor tempo total de execução (0,0140 seconds).                        |
| 1000x1000         | **Epsilon**   | Melhor IPC (4,13) e menor tempo total (6,8594 seconds).                |
| 2000x2000         | **Epsilon**   | Menor tempo total (51,1140 seconds) e melhor eficiência de cache (27,12%). |

Essa análise sugere que **Epsilon** e **Zeta** são as abordagens mais otimizadas, com **Epsilon** sendo a melhor escolha para matrizes grandes e **Zeta** para matrizes menores.

## Equações
| Abordagem          | Definição                                                                 | Syntax                     |
|--------------------|---------------------------------------------------------------------------|----------------------------|
| **Convencional**   | $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{kj})$$                        | $$A_{n \times k} \cdot B_{k \times m} = C_{n \times m}$$ |
| **Epsilon**        | $$C_{ij} = \sum_{k=1}^{n} (a_{jk} \cdot b_{ik})$$                        | $$A_{n \times k} \otimes (B_{k \times m})^T = (C_{n \times m})^T$$ |
| **Zeta**           | $$C_{ij} = \sum_{k=1}^{n} (a_{ik} \cdot b_{jk})$$                        | $$A_{n \times k} \oplus (B_{k \times m})^T = C_{n \times m}$$ |

### Legenda e Explicações das Equações
- **Convencional**: Multiplicação padrão de matrizes.
- **Epsilon**: Abordagem personalizada com transposição implícita.
- **Zeta**: Abordagem personalizada com menos etapas de processamento.
### Legenda e Explicações das Equações
1. Método Convencional

    Aqui, Cij​ é o elemento da matriz resultante C na linha i e coluna j. A multiplicação é feita somando o produto dos elementos correspondentes da linha i da matriz A e da coluna j da matriz B.
    Representa a multiplicação de uma matriz A de dimensão $$n \times k$$ por uma matriz B de dimensão $$k \times m$$, resultando em uma matriz C de dimensão $$n \times m$$.

3. Abordagem Epsilon

    Nesta abordagem, os elementos da matriz resultante C são calculados multiplicando os elementos da linha j da matriz A pelos elementos da linha i da matriz B.
   ⊗ representa uma operação de multiplicação personalizada, e (B_{k \times m})^T indica que a matriz B é transposta antes da multiplicação. O resultado é a matriz transposta de C (matriz resultante de uma multiplicação de matrizes ($$A_{n \times k} \cdot B_{k \times m} = C_{n \times m}$$).

4. Abordagem Zeta
   
    Nesta abordagem, os elementos da matriz resultante C são calculados multiplicando os elementos da linha i da matriz A pelos elementos da linha j da matriz B. Isso também envolve uma operação de transposição.
   ⊕ representa uma operação de multiplicação personalizada, e $$(B_{k \times m})^T$$ indica que a matriz B é transposta antes da multiplicação. O resultado C não é transposto.

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

## Contribuição
Sinta-se à vontade para contribuir com este projeto! Abra uma issue ou envie um pull request com suas melhorias.
