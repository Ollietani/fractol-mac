#ifndef FRACTOL_H
# define FRACTOL_H

# include "mlx/mlx.h"
# include <stdlib.h>
# include <stdio.h>
# include <math.h>
# include <unistd.h>

typedef struct	s_vars {
	void	*mlx;
	void	*win;
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
	double	zoom;
	char	*arg;
}				t_vars;

typedef struct	s_ps
{
	double	maxre;
	double	minre;
	double	minim;
	double	maxim;
	double	fact_re;
	double	fact_im;
	int		iter;
	int		x;
	int		y;

}				t_ps;

typedef struct	s_comp
{
	double	re;
	double	im;
}				t_comp;


typedef struct	s_xy
{
	int	x;
	int	y;
}				t_xy;

# define WIDTH 1000
# define HEIGHT 1000
# define UP 126
# define DOWN 125
# define LEFT 123
# define RIGHT 124 
# define ESC 53
# define SCROLL_IN 5
# define SCROLL_OUT 4
# define STEP 700

# define JU_RE 1.02
# define JU_IM 0.2

int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	check_args(int argc, char **argv, t_vars *vars);
t_comp	init_complex(double re, double im);
int		key_hook(int key, t_vars *vars);
void	pixel_put(t_vars *vars, int x, int y, int color);
void	draw_mandelbrot(t_ps *co, t_comp *pix, t_vars *vars);
void	draw_burning_ship(t_ps *co, t_comp *pix, t_vars *vars);
void	draw_julia(t_ps *co, t_comp *pix, t_vars *vars);
void	init_data(t_ps *co);
int		create_rgb(int r, int g, int b);
void	paint(t_vars *vars, t_ps *co, int i);
void	draw_image(t_vars *vars);
int	zoom_mouse(int button, int x, int y, t_vars *vars);
void	draw_image3(t_vars *vars);





#endif