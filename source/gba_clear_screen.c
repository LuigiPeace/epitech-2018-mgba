/*
** gba_clear_screen.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 22:27:59 2013 Louis Poirier
** Last update Mon Nov 25 22:37:23 2013 Louis Poirier
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
