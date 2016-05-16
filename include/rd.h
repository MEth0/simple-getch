/*
** rd.h for rd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 11:51:08 2016 alies_a
** Last update Mon May 16 16:31:58 2016 alies_a
*/

#ifndef RD_H_
# define RD_H_

# include "ch.h"

typedef struct s_rd
{
  int	fd;
  int	curs;
  char	*line;
} t_rd;

typedef int(*t_action)(t_rd *rd, int key);

typedef struct s_act
{
  t_action func;
  int key;
} t_act;

/*
** Notes:
** rd_clear will change curs pos, but not line*
*/

char	*rd_line(int fd, t_key const *keys);

void    rd_disp(t_rd const *rd);
void    rd_clear(t_rd *rd);
int	rd_add_char(t_rd *rd, char c);
int	rd_key(t_rd *rd, int key);
void	rd_put(t_rd const *rd, char c);
void	rd_putstr(t_rd const *rd, char const *str);

int	rd_char(t_rd *rd, int key);
int     rd_left(t_rd *rd, int key);
int     rd_right(t_rd *rd, int key);
int     rd_up(t_rd *rd, int key);
int     rd_back(t_rd *rd, int key);
int     rd_down(t_rd *rd, int key);

#endif