/*
** main.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/template/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 10:06:32 2013 Louis Poirier
** Last update Tue Nov 26 10:07:31 2013 Louis Poirier
*/

#include	<mgba.h>

int		main(void)
{
  t_gba		*gba;

  if ((gba = gba_init(MODE_3 | BG2_ON, 1)) == NULL)
    return (1);
  gba_clear_screen(gba, 0);
  gba_pixel_put(gba, 120, 80, RGB16(31, 31, 31));
  gba_loop(gba);
  return (0);
}
