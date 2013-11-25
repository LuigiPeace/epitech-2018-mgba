/*
** gba_init.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/sys
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 22:50:05 2013 Louis Poirier
** Last update Mon Nov 25 22:35:36 2013 Louis Poirier
*/

#include	"mgba.h"

t_gba		*gba_init(const s32 mode)
{
  t_gba		*gba;

  if ((gba = malloc(sizeof(*gba))) == NULL)
    return (NULL);
  gba->screen = (u16*)0x6000000;
  SetMode(mode);
  gba->key = NULL;
  gba->key_param = NULL;
  return (gba);
}
