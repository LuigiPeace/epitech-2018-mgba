##
## Makefile for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
## 
## Made by Louis Poirier
## Login   <poirie_l@epitech.net>
## 
## Started on  Tue Nov 26 09:17:56 2013 Louis Poirier
## Last update Wed Jan  8 17:13:46 2014 Louis Poirier
##

include		$(DEVKITARM)/gba_rules

NAME		= libmgba

SRCS		= gba_clear_screen.c	\
		  gba_pixel_put.c	\
		  gba_draw_line.c	\
		  img_clear.c		\
		  img_pixel_put.c	\
		  img_draw_line.c	\
		  gba_new_image.c	\
		  gba_destroy_image.c	\
		  gba_image_on_screen.c	\
		  gba_init.c		\
		  gba_key_hook.c	\
		  gba_loop.c		\
		  gba_swap.c		\
		  gba_swap_dot.c

OBJS		= $(SRCS:.c=.o)

LIBS		= -lgba -L ~/devkitPro/libgba/lib

INCS		= -I ~/devkitPro/libgba/include	\
		  -I./

ARCH		= -mthumb -mthumb-interwork

export LD	= $(CC)

CFLAGS		= -Wall					\
		  -mcpu=arm7tdmi -mtune=arm7tdmi	\
		  -fomit-frame-pointer			\
		  -ffast-math				\
		  $(ARCH)

RM		= rm -f

all:		$(NAME) copy

$(NAME):	$(SRCS)
		$(CC) $(CFLAGS) -c $(SRCS) $(LIBS) $(INCS)
		ar rc $(NAME).a $(OBJS)
		ranlib $(NAME).a

clean:
		find ./ -name '*~' -exec rm '{}' \;
		find ./ -name '*#' -exec rm '{}' \;

fclean:		clean
		find ./ -name '*.o' -exec rm '{}' \;
		$(RM) $(NAME).a

re:		fclean all

copy:
		cp $(NAME).a ../.
		cp mgba.h ../.
