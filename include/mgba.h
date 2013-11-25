/*
** mgba.h for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Sat Nov 23 22:26:47 2013 Louis Poirier
** Last update Mon Nov 25 22:37:08 2013 Louis Poirier
*/

#ifndef			MGBA_H_
# define		MGBA_H_

# include		<stdlib.h>
# include		<gba_input.h>
# include		<gba_interrupt.h>
# include		<gba_systemcalls.h>
# include		<gba_types.h>
# include		<gba_video.h>

# define		ABS(x)			(((x) < 0) ? -(x) : (x))
# define		RGB16(r, g, b)		((r) + (g << 5) + (b << 10))

typedef struct		s_gba
{
  u16			*screen;
  u8			(*key)(u16, void*);
  void			*key_param;
}			t_gba;

typedef struct		s_dot
{
  u8			x;
  u8			y;
}			t_dot;

typedef struct		s_dot3d
{
  s16			x;
  s16			y;
  s16			z;
}			t_dot3d;

u8			gba_pixel_put(t_gba *gba, const u8 x, const u8 y, const u16 color);
u8			gba_clear_screen(t_gba *gba, const u16 color);
u8			gba_draw_line(t_gba *gba, t_dot start, t_dot stop, const u16 color);

t_gba			*gba_init(const s32 mode);
u8			gba_loop(const t_gba *gba);
u8			gba_key_hook(t_gba *gba, u8 (*funct_ptr)(u16, void*), void *param);

u8			gba_swap_dot(t_dot *a, t_dot *b);
u8			gba_swap(u8 *a, u8 *b);

#endif		/* !MGBA_H_ */
