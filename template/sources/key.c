/*
** key.c for template in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/template/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 18:02:57 2013 Louis Poirier
** Last update Wed Jan  8 17:16:22 2014 Louis Poirier
*/

#include	"template.h"

u8		key(const u16 key, void *param)
{
  t_engine	*engine;

  if (param == NULL)
    return (1);
  engine = param;
  if (key == KEY_UP)
    engine->dot.y--;
  if (key == KEY_DOWN)
    engine->dot.y++;
  if (key == KEY_LEFT)
    engine->dot.x--;
  if (key == KEY_RIGHT)
    engine->dot.x++;
  img_clear(&(engine->img), RGB16(0, 0, 0));
  img_pixel_put(&(engine->img), engine->dot.x, engine->dot.y, RGB16(31, 31, 31));
  gba_image_on_screen(&(engine->gba), &(engine->img), 0, 0);
  return (0);
}
