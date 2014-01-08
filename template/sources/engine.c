/*
** engine.c for template in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/template/sources/inits
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:59:52 2013 Louis Poirier
** Last update Wed Jan  8 17:08:59 2014 Louis Poirier
*/

#include	"template.h"

u8		engine_init(t_gba *gba, t_engine *engine)
{
  if (gba == NULL || engine == NULL)
    return (1);
  engine->gba = *gba;
  if (gba_new_image(&(engine->img), 240, 160) != 0)
    return (2);
  engine->dot.x = 120;
  engine->dot.y = 80;
  return (0);
}
