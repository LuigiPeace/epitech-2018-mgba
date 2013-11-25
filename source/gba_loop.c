/*
** gba_loop.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/sources/sys
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 22:51:59 2013 Louis Poirier
** Last update Mon Nov 25 22:38:22 2013 Louis Poirier
*/

#include	"mgba.h"

u8		gba_loop(const t_gba *gba)
{
  /* u16		pressed; */
  u16		released;

  if (gba == NULL)
    return (1);
  while (1)
    {
      VBlankIntrWait();
      scanKeys();
      /* pressed = keysDown(); */
      released = keysUp();
      if (released != 0)
	gba->key(released, gba->key_param);
    }
  return (0);
}
