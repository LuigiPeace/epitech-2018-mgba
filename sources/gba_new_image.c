/*
** gba_new_image.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:22:17 2013 Louis Poirier
** Last update Thu Dec 26 17:52:48 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_new_image(t_img *img, const u8 width, const u8 height)
{
  u16		*image;

  if (img == NULL)
    return (1);
  if (width >= SCREEN_WIDTH || height >= SCREEN_HEIGHT)
    return (2);
  if ((image = malloc(width * height * sizeof(*image))) == NULL)
    return (3);
  img->image = image;
  img->width = width;
  img->height = height;
  return (0);
}
