/*
** gba_swap_dot.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/sys
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 23:23:15 2013 Louis Poirier
** Last update Mon Nov 25 22:38:55 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_swap_dot(t_dot *a, t_dot *b)
{
  t_dot		swap;

  if (a == NULL || b == NULL)
    return (1);
  swap = *a;
  *a = *b;
  *b = swap;
  return (0);
}
