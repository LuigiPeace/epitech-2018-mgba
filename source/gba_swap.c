/*
** gba_swap.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/sys
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 23:26:37 2013 Louis Poirier
** Last update Mon Nov 25 22:38:47 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_swap(u8 *a, u8 *b)
{
  u8		swap;

  if (a == NULL || b == NULL)
    return (1);
  swap = *a;
  *a = *b;
  *b = swap;
  return (0);
}
