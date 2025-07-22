# Atividade de Reposição — Unidade II  
Disciplina: Estrutura de Dados Básica I  
Assunto: SelectionSort  

## Questão 2
Se trocarmos `i = 0` por `i = 1`, o primeiro elemento do vetor será ignorado na ordenação.  
Se trocarmos `i < n - 1` por `i < n`, o último `i` será igual a `n - 1`, e o laço interno não executará nenhuma comparação, pois `j = i + 1 = n`.

## Questão 3
A modificação `v[j] <= v[min]` faz com que o algoritmo troque elementos mesmo quando forem iguais.  
Isso não afeta a correção do algoritmo, mas pode alterar a estabilidade, já que a ordem relativa de elementos iguais pode mudar.

## Questão 5
O pior caso ocorre quando o vetor está em ordem decrescente.  
O algoritmo precisará fazer o maior número de comparações possível para encontrar o menor elemento a cada passo.

## Questão 6
O melhor caso ocorre quando o vetor já está ordenado em ordem crescente.  
Ainda assim, o algoritmo faz o mesmo número de comparações, mas nenhuma troca.

## Questão 7
No pior caso, há `(n - 1)` trocas, uma a cada iteração externa.  
No melhor caso, há o mesmo número de comparações, mas nenhuma troca se o código for otimizado para evitar trocas desnecessárias.
