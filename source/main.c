/*
** main.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:46:10 2013 Louis Poirier
** Last update Tue Nov 26 08:46:43 2013 Louis Poirier
*/

#include	"mgba.h"

typedef struct	s_engine
{
  t_gba		*gba;
  t_dot		start;
  t_dot		stop;
}		t_engine;

u8		key_hook(const u16 key, void *param)
{
  t_engine	*engine;

  if (param == NULL)
    return (1);
  engine = param;
  if (key & KEY_UP)
    engine->stop.y -= 1;
  if (key & KEY_DOWN)
    engine->stop.y += 1;
  if (key & KEY_LEFT)
    engine->stop.x -= 1;
  if (key & KEY_RIGHT)
    engine->stop.x += 1;
  gba_clear_screen(engine->gba, 0);
  gba_draw_line(engine->gba, engine->start, engine->stop, RGB16(31, 31, 31));
  return (0);
}

int		main(void)
{
  t_gba		*gba;
  t_engine	engine;

  if ((gba = gba_init(MODE_3 | BG2_ON, 1)) == NULL)
    return (1);
  engine.gba = gba;
  engine.start.x = 120;
  engine.start.y = 80;
  engine.stop.x = 200;
  engine.stop.y = 80;
  gba_draw_line(gba, engine.start, engine.stop, RGB16(31, 31, 31));
  gba_key_hook(gba, &key_hook, &engine);
  gba_loop(gba);
  return (0);
}
