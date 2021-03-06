/*
** gba_init.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:29:13 2013 Louis Poirier
** Last update Tue Nov 26 09:48:26 2013 Louis Poirier
*/

#include	"mgba.h"

t_gba		*gba_init(const s32 mode, const u8 repeat)
{
  t_gba		*gba;

  if ((gba = malloc(sizeof(*gba))) == NULL)
    return (NULL);
  irqInit();
  irqEnable(IRQ_VBLANK);
  REG_IME = 1;
  gba->screen = (u16*)0x6000000;
  SetMode(mode);
  gba->key = NULL;
  gba->key_param = NULL;
  gba->key_repeat = repeat;
  return (gba);
}
