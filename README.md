# Multiplicação de Matriz Eficiente

O objetivo deste repositório é propor uma solução simples, ainda que não completa ou definitiva, para a multiplicação de matrizes, buscando superar o método convencional em eficiência. Para isso, foram implementadas quatro abordagens distintas: a primeira é o método convencional; a segunda é baseada em um repositório inspirado em um artigo que demonstrava essa implementação; e as outras duas, chamadas Epsilon e Zeta, foram desenvolvidas por mim, com o intuito de explorar novas formas de realizar a multiplicação entre matrizes. Dessa forma, foi criada uma nova operação que, ao final, é equivalente à multiplicação tradicional de matrizes.

A principal diferença entre as abordagens Epsilon e Zeta está no número de etapas de processamento: a Zeta possui menos etapas, enquanto a Epsilon envolve mais etapas. Surpreendentemente, a Epsilon, apesar de ser mais complexa, mostrou-se mais eficiente nos testes. Para avaliar o desempenho de cada abordagem, foram utilizados parâmetros como cache-references (referências ao cache), cache-misses (falhas de cache), cycles (ciclos de processamento), instructions (instruções executadas) e task-clock (tempo de execução). Esses parâmetros permitiram uma análise detalhada da eficiência de cada método.

O repositório também inclui três conjuntos de testes, cada um com matrizes de tamanhos diferentes: 100x100, 1000x1000 e 2000x2000, com o objetivo de avaliar qual implementação seria a mais eficiente em diferentes cenários.

Dentre as quatro abordagens, a multiplicação de matrizes Epsilon destacou-se como a melhor em termos de utilização de cache (cache-references e cache-misses). Embora tenha demandado um uso mais intensivo do cache, ela conseguiu processar as informações com menor perda de desempenho no processador. Em segundo lugar, ficou a abordagem Zeta, seguida pelas outras duas (a baseada no repositório e a convencional). A Epsilon também se mostrou superior em relação ao número de ciclos (cycles) e ao tempo de execução (task-clock), enquanto a Zeta apresentou um menor número de instruções executadas (instructions), mas com um custo maior em ciclos.

Os resultados demonstraram que o desenvolvimento e a aplicação dessas novas abordagens foram um sucesso. As evidências mostram que as novas técnicas superam a multiplicação convencional tanto na utilização eficiente de cache quanto na redução do número de instruções necessárias. Embora o método convencional utilize menos instruções, ele requer mais ciclos de processamento. Em geral, a abordagem convencional é eficaz para matrizes pequenas, mas, à medida que o tamanho da matriz aumenta, as implementações Epsilon e Zeta se mostram superiores, tanto em tempo de execução quanto em eficiência de ciclos. A Epsilon, em particular, destacou-se como a mais eficiente, mesmo com seu maior número de etapas




![Convencional_Sum](https://github.com/user-attachments/assets/589f9135-8497-4914-918d-c0dbcfc3e7c3)
![Zeta_Sum](https://github.com/user-attachments/assets/3ea3222d-2982-49ff-86d7-bc4fc01ed344)
![Zeta_MUL_Matriz](https://github.com/user-attachments/assets/03d3d9c6-5996-4970-b305-2c55223fb46a)
![MUL_Matriz](https://github.com/user-attachments/assets/65f46649-b866-4648-b416-53d7bd411ab8)
![Epsilon_Sum](https://github.com/user-attachments/assets/94894ed5-22de-4a5c-9a1c-e30fa9211e86)
![Epsilon_MUL_Matriz](https://github.com/user-attachments/assets/b73580e0-c834-445b-b6e1-4dc6eba55179)
