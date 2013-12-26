/*
** engine.c for template in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/template/sources/inits
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:59:52 2013 Louis Poirier
** Last update Thu Dec 26 18:01:34 2013 Louis Poirier
*/

#include	"template.h"

u8		engine_init(const t_gba *gba, t_engine *engine)
{
  if (gba == NULL || engine == NULL)
    return (1);
  engine->gba = gba;
  if (gba_new_image(&(engine->img)) != 0)
    return (2);
  return (0);
}
