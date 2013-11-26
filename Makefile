##
## Makefile for libmgba in /home/esl/Documents/Perso/C/GameBoyDev/libmgba/source
## 
## Made by Louis Poirier
## Login   <poirie_l@epitech.net>
## 
## Started on  Tue Nov 26 09:17:56 2013 Louis Poirier
## Last update Tue Nov 26 09:57:26 2013 Louis Poirier
##

include		$(DEVKITARM)/gba_rules

NAME		= libmgba

SRCS		= gba_clear_screen.c	\
		  gba_draw_line.c	\
		  gba_init.c		\
		  gba_key_hook.c	\
		  gba_loop.c		\
		  gba_pixel_put.c	\
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

all:		$(NAME)

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
