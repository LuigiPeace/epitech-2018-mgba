/*
** img_clear.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Wed Jan  8 17:11:52 2014 Louis Poirier
** Last update Wed Jan  8 17:12:50 2014 Louis Poirier
*/

#include	"mgba.h"

u8		img_clear(t_img *img, const u16 color)
{
  u16		x;
  u16		y;

  if (img == NULL)
    return (1);
  x = 0;
  y = 0;
  while (x < img->width)
    {
      y = 0;
      while (y < img->height)
	{
	  img->image[y * SCREEN_WIDTH + x] = color;
	  y++;
	}
      x++;
    }
  return (0);
}
