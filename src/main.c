#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

#define TAMANHO_TABULEIRO 9

typedef struct jogada
{
  int linha;
  int coluna;
  int valor;
} Jogada;

void preencherTabuleiroComZeros(int tabuleiro[][TAMANHO_TABULEIRO])
{
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
      tabuleiro[i][j] = 0;
    }
  }
}

void preencherNumerosFixosTabuleiro(int tabuleiro[][TAMANHO_TABULEIRO])
{
  // Primeiro quadrante
  tabuleiro[0][0] = 5;
  tabuleiro[0][1] = 3;
  tabuleiro[1][0] = 6;
  tabuleiro[2][1] = 9;
  tabuleiro[2][2] = 8;

  // Segundo quadrante
  tabuleiro[0][4] = 7;
  tabuleiro[1][3] = 1;
  tabuleiro[1][4] = 9;
  tabuleiro[1][5] = 5;

  // Terceiro quadrante
  tabuleiro[2][7] = 6;

  // Quarto quadrante
  tabuleiro[3][0] = 8;
  tabuleiro[4][0] = 4;
  tabuleiro[5][0] = 7;

  // Quinto quadrante
  tabuleiro[3][4] = 6;
  tabuleiro[4][3] = 8;
  tabuleiro[4][5] = 3;
  tabuleiro[5][4] = 2;

  // Sexto quadrante
  tabuleiro[3][8] = 3;
  tabuleiro[4][8] = 1;
  tabuleiro[5][8] = 6;

  // Sétimo quadrante
  tabuleiro[6][1] = 6;

  // Oitavo quadrante
  tabuleiro[7][3] = 4;
  tabuleiro[7][4] = 1;
  tabuleiro[7][5] = 9;
  tabuleiro[8][4] = 8;

  // Nono quadrante
  tabuleiro[6][6] = 2;
  tabuleiro[6][7] = 8;
  tabuleiro[7][8] = 5;
  tabuleiro[8][7] = 7;
  tabuleiro[8][8] = 9;
}

void imprimirTabuleiro(int tabuleiro[][TAMANHO_TABULEIRO])
{
  printf("Colunas ");
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    printf("| %d ", i + 1);
  }
  printf("|\n\n");

  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    printf("Ln. %d\t", i + 1);
    for (int j = 0; j < TAMANHO_TABULEIRO; j++)
    {
      if (tabuleiro[i][j] > 0 && tabuleiro[i][j] <= 9)
      {
        printf("| %d ", tabuleiro[i][j]);
        continue;
      }
      printf("| - ");
    }
    printf("|\n");
  }
}

bool ehJogadaValidaNaLinha(int tabuleiro[][TAMANHO_TABULEIRO], Jogada jogada)
{
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    if (tabuleiro[jogada.linha][i] == jogada.valor)
    {
      return false;
    }
  }
  return true;
}

bool ehJogadaValidaNaColuna(int tabuleiro[][TAMANHO_TABULEIRO], Jogada jogada)
{
  for (int i = 0; i < TAMANHO_TABULEIRO; i++)
  {
    if (tabuleiro[i][jogada.coluna] == jogada.valor)
    {
      return false;
    }
  }
  return true;
}

bool ehJogadaValidaNoQuadrante(int tabuleiro[][TAMANHO_TABULEIRO], Jogada jogada)
{
}

bool ehJogadaValida(int tabuleiro[][TAMANHO_TABULEIRO], Jogada jogada)
{
  bool ehValida = ehJogadaValida(tabuleiro, jogada) && ehJogadaValidaNaColuna(tabuleiro, jogada) && ehJogadaValidaNoQuadrante(tabuleiro, jogada);
  return ehValida;
}

int main()
{
  int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO];
  setlocale(LC_ALL, "Portuguese");

  preencherTabuleiroComZeros(tabuleiro);
  preencherNumerosFixosTabuleiro(tabuleiro);
  imprimirTabuleiro(tabuleiro);
}