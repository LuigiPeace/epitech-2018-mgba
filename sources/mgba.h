/*
** mgba.h for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/include
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Tue Nov 26 08:27:10 2013 Louis Poirier
** Last update Thu Dec 26 17:40:20 2013 Louis Poirier
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
  u8			key_repeat;
}			t_gba;

typedef struct		s_img
{
  u16			*image;
  u8			width;
  u8			height;
}			t_img;

typedef struct		s_dot
{
  u8			x;
  u8			y;
}			t_dot;

typedef struct		s_dot3d
{
  u16			x;
  u16			y;
  s16			z;
}			t_dot3d;

u8			img_pixel_put(t_img *img, const u8 x, const u8 y, const u16 color);
u8			img_draw_line(t_img *img, t_dot start, t_dot stop, const u16 color);

u8			gba_pixel_put(t_gba *gba, const u8 x, const u8 y, const u16 color);
u8			gba_clear_screen(t_gba *gba, const u16 color);
u8			gba_draw_line(t_gba *gba, t_dot start, t_dot stop, const u16 color);

u8			gba_new_image(t_img *img, const u8 width, const u8 height);
u8			gba_destroy_image(t_img *img);
u8			gba_image_on_screen(t_gba *gba, const t_img *img, const u8 x, const u8 y);

t_gba			*gba_init(const s32 mode, const u8 repeat);
u8			gba_loop(const t_gba *gba);
u8			gba_key_hook(t_gba *gba, u8 (*funct_ptr)(u16, void*), void *param);

u8			gba_swap_dot(t_dot *a, t_dot *b);
u8			gba_swap(u8 *a, u8 *b);

#endif			/* !MGBA_H_ */
