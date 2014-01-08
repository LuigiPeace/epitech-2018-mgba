/*
** template.h for template in /home/poirie_l/Documents/Epitech/modules/igraph/mgba/template/includes
** 
** Made by Louis Poirier
** Login   <poirie_l@epitech.net>
** 
** Started on  Thu Dec 26 17:57:22 2013 Louis Poirier
** Last update Wed Jan  8 17:15:11 2014 Louis Poirier
*/

#ifndef		TEMPLATE_H_
# define	TEMPLATE_H_

# include	<mgba.h>

typedef struct	s_engine
{
  t_gba		gba;
  t_img		img;
  t_dot		dot;
}		t_engine;

u8		engine_init(t_gba *gba, t_engine *engine);
u8		key(const u16 key, void *param);

#endif		/* !TEMPLATE_H_ */
