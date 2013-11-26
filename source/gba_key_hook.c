/*
** gba_key_hook.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:29:42 2013 Louis Poirier
** Last update Tue Nov 26 08:29:53 2013 Louis Poirier
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
