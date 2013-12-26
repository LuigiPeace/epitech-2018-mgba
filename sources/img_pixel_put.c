/*
** img_pixel_put.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:42:18 2013 Louis Poirier
** Last update Thu Dec 26 17:45:12 2013 Louis Poirier
*/

#include	"mgba.h"

u8		img_pixel_put(t_img *img, const u8 x, const u8 y, const u16 color)
{
  if (x >= SCREEN_WIDTH || y >= SCREEN_HEIGHT)
    return (1);
  img->image[y * SCREEN_WIDTH + x] = color;
  return (0);
}
