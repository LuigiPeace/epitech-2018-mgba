/*
** gba_pixel_put.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 22:33:33 2013 Louis Poirier
** Last update Mon Nov 25 22:36:36 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_pixel_put(t_gba *gba, const u8 x, const u8 y, const u16 color)
{
  if (x >= SCREEN_WIDTH || y >= SCREEN_HEIGHT)
    return (1);
  gba->screen[y*SCREEN_WIDTH+x] = color;
  return (0);
}
