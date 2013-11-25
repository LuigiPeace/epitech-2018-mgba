/*
** gba_key_hook.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/sys
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 23:12:27 2013 Louis Poirier
** Last update Mon Nov 25 22:35:57 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_key_hook(t_gba *gba, u8 (*funct_ptr)(u16, void*), void *param)
{
  if (gba == NULL || funct_ptr == NULL)
    return (1);
  gba->key = funct_ptr;
  gba->key_param = param;
  return (0);
}
