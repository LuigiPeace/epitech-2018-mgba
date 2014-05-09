/*
** img_clear.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Wed Jan  8 17:11:52 2014 Louis Poirier
** Last update Fri May  2 23:27:47 2014 Louis Poirier
*/

#include	"mgba.h"

u8		img_clear(t_img *img, const u16 color)
{
  s32		i;
  /* u16		x; */
  /* u16		y; */

  if (img == NULL)
    return (1);
  i = -1;
  while (++i < img->width * img->height)
    img->image[i] = color;
  /* x = 0; */
  /* y = 0; */
  /* while (x < img->width) */
  /*   { */
  /*     y = 0; */
  /*     while (y < img->height) */
  /* 	{ */
  /* 	  img->image[y * SCREEN_WIDTH + x] = color; */
  /* 	  y++; */
  /* 	} */
  /*     x++; */
  /*   } */
  return (0);
}
