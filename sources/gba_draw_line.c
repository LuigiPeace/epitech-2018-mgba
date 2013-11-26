/*
** gba_draw_line.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:28:44 2013 Louis Poirier
** Last update Tue Nov 26 08:28:50 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_draw_line(t_gba *gba, t_dot start, t_dot stop, const u16 color)
{
  u8		x;

  if (gba == NULL ||						\
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
