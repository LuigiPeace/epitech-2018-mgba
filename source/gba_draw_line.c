/*
** gba_draw_line.c for mgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/draw
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 23:17:38 2013 Louis Poirier
** Last update Mon Nov 25 22:37:38 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_draw_line(t_gba *gba, t_dot start, t_dot stop, const u16 color)
{
  u8		x;

  if (gba == NULL)
    return (1);
  if (ABS(stop.x - start.x) >= ABS(stop.y - start.y))
    {
      if (stop.x < start.x)
        gba_swap_dot(&start, &stop);
      x = start.x;
      while (x < stop.x)
	{
	  gba_pixel_put(gba, x, start.y + (stop.y - start.y) *		\
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
	  gba_pixel_put(gba, start.y + (stop.y - start.y) *		\
			(x - start.x) / (stop.x - start.x), x, color);
	  x++;
	}
    }
  return (0);
}
