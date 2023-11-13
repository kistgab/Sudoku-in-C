# Sudoku

Implementar o Sudoku. Os números pretos são fixos, inicializados no Programa, e os números vermelhos são
fornecidos pelo usuário. O programa deverá receber as informações e verificar se o Sudoku está correto, ou
não. Estude as regras do Sudoku.

# Documentação (Regra imposta pela professora)

Fazer comentários para que os colegas que pegarão o código na próxima semana entendam o que foi feito

## Proposta feita pela dupla

Pensamos em fazer uma checkagem a cada jogada do jogador e caso esteja errado, impossibilitar a jogada, dessa maneira, não teria como ter um resultado errado no final, pois todas jogadas estariam certas.
Para essa validação, existe a função `ehJogadaValida()`, que basta passar como parâmetros, o tabuleiro e a jogada para validar que ela retorna um booleano com o resultado da validação

## O que foi feito

- Preencher o tabuleiro 0 (utilizar valor 0 como espaços vazios, já que os algarismos para inserção são de 1 a 9)
- Preencher o tabuleiro com os números fixos
- Imprimir o tabuleiro corretamente com linhas e colunas para fácil visualização do usuário
- validar se a jogada é valida na linha através do método `ehJogadaValidaNaLinha()`
- validar se a jogada é valida na coluna através do método `ehJogadaValidaNaColuna()`
- validar se a jogada é valida em todas as regras através do método `ehJogadaValida()`

## O que falta ser feito

- Validar se a jogada e válida no quadrante dela, através da função `ehJogadaValidaNoQuadrante()`, que deve retornar um boolean como resultado da validação
- Ler a jogada do jogador(já deixamos um tipo Jogada criado para facilitar)
- Chamar o método que valida a jogada lida
- Pode ser feito uma contagem de vidas para que ele tenha como perder o jogo. Caso tenha alguma jogada inválida, ele perde uma vida.
