/*
** gba_destroy_image.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:28:47 2013 Louis Poirier
** Last update Thu Dec 26 17:30:24 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_destroy_image(t_img *img)
{
  if (img == NULL)
    return (1);
  free(img->image);
  img->width = 0;
  img->height = 0;
  return (0);
}
