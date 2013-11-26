/*
** gba_clear_screen.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:28:34 2013 Louis Poirier
** Last update Tue Nov 26 08:28:37 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_clear_screen(t_gba *gba, const u16 color)
{
  u8		x;
  u8		y;

  if (gba == NULL)
    return (1);
  y = 0;
  while (y < SCREEN_HEIGHT)
    {
      x = 0;
      while (x < SCREEN_WIDTH)
	{
	  gba->screen[y*SCREEN_WIDTH+x] = color;
	  x++;
	}
      y++;
    }
  return (0);
}
