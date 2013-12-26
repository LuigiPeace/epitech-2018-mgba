/*
** img_draw_line.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:49:35 2013 Louis Poirier
** Last update Thu Dec 26 17:50:25 2013 Louis Poirier
*/

#include	"mgba.h"

u8	        img_draw_line(t_img *img, t_dot start, t_dot stop, const u16 color)
{
  u8		x;

  if (img == NULL ||						\
      start.x >= SCREEN_WIDTH || stop.x >= SCREEN_WIDTH ||	\
      start.y >= SCREEN_WIDTH || stop.y >= SCREEN_WIDTH)
    return (1);
  if (ABS(stop.x - start.x) >= ABS(stop.y - start.y))
    {
      if (stop.x < start.x)
        gba_swap_dot(&start, &stop);
      x = start.x;
      while (x < stop.x)
	{
	  img_pixel_put(img, x, start.y + (stop.y - start.y) *		\
			(x - start.x) / (stop.x - start.x), color);
	  x++;
	}
    }
  else
    {
      gba_swap(&(start.x), &(start.y));
      gba_swap(&(stop.x), &(stop.y));
      if (stop.x < start.x)
        gba_swap_dot(&start, &stop);
      x = start.x;
      while (x < stop.x)
	{
	  img_pixel_put(img, start.y + (stop.y - start.y) *		\
			(x - start.x) / (stop.x - start.x), x, color);
	  x++;
	}
    }
  return (0);
}
