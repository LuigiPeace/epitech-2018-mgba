/*
** main.c for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/template/sources
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 10:06:32 2013 Louis Poirier
** Last update Wed Jan  8 17:09:19 2014 Louis Poirier
*/

#include	"template.h"

int		main(void)
{
  t_engine	engine;
  t_gba		*gba;

  if ((gba = gba_init(MODE_3 | BG2_ON, 1)) == NULL)
    return (1);
  if (engine_init(gba, &engine) != 0)
    return (2);
  gba_clear_screen(gba, 0);
  img_pixel_put(&(engine.img), engine.dot.x, engine.dot.y, RGB16(31, 31, 31));
  gba_image_on_screen(gba, &(engine.img), 0, 0);
  gba_key_hook(gba, &key, &engine);
  gba_loop(gba);
  return (0);
}
