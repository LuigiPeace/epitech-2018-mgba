/*
** gba_image_on_screen.c for libmgba in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:32:18 2013 Louis Poirier
** Last update Wed Jan  8 17:05:33 2014 Louis Poirier
*/

#include	"mgba.h"

u8		gba_image_on_screen(t_gba *gba, const t_img *img, const u8 x, const u8 y)
{
  u16		i;
  u16		j;

  if (gba == NULL || img == NULL)
    return (1);
  if (gba->screen == NULL || img->image == NULL)
    return (2);
  if (x >= SCREEN_WIDTH || y >= SCREEN_HEIGHT)
    return (3);
  i = x * SCREEN_WIDTH + y;
  j = 0;
  while (j < img->width * img->height && i < SCREEN_WIDTH * SCREEN_HEIGHT)
    {
      gba->screen[i] = img->image[j];
      i++;
      j++;
    }
  return (0);
}
