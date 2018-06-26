#include <stdio.h>
#include <SDL/SDL.h>
#define ALTURA 640
#define LARGURA 480
#define BITS 16
#define TEMPO 4000
#define IMAGEM_MARIO "image_mb.bmp"

/*
Aparentemente toda declaração em SDL inicia
com a sigla e alguma palavra com letra maiscula.
*/

int main () {
  SDL_Surface* tela;
  SDL_Surface* imagem;

  SDL_Init(SDL_INIT_EVERYTHING); //Inicia o SDL
  SDL_WM_SetCaption("Hello world", NULL); /*Nome da janela*/

/*Estudar essa parte do codigo--------------*/
  tela = SDL_SetVideoMode(ALTURA,LARGURA,BITS, SDL_SWSURFACE);

  /*
  imagem = SDL_LoadBMP("image_mb.bmp");
  SDL_BlitSurface(imagem, NULL, tela, NULL);
  SDL_Flip(tela);
  SDL_FreeSurface(imagem);
  */




/* CODIGO */
SDL_SetRenderDrawColor(renderer, 127, 0, 127, 255);
SDL_Rect rect = {350, 250, 100, 100};
SDL RenderFillRect (renderer, &rect);
/* -------- */
  SDL_Delay(TEMPO);
  SDL_Quit();

return 0;
}
