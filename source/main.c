/*
** main.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:31:13 2013 Louis Poirier
** Last update Tue Nov 26 08:33:59 2013 Louis Poirier
*/

#include	"mgba.h"

u8		dots_init(t_dot *start, t_dot *stop)
{
  if (start == NULL || stop == NULL)
    return (1);
  start->x = 120;
  start->y = 80;
  stop->x = 200;
  stop->y = 80;
  return (0);
}

int		main(void)
{
  t_gba		*gba;
  t_dot		start;
  t_dot		stop;

  if ((gba = gba_init(MODE_3 | BG2_ON, 1)) == NULL)
    return (1);
  dots_init(&start, &stop);
  gba_draw_line(gba, start, stop, RGB16(31, 31, 31));
  gba_loop(gba);
  return (0);
}
