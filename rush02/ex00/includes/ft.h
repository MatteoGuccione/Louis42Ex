#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

char	*ft_trim_spaces(char *str);
char	***dict_to_array(char *str);
void	ft_free_words(char **words);
void	ft_free_dict(char ***dict);
void	ft_trim_inplace(char *str);
void	ft_print_array(char ***array);
void	ft_print_digit(int nb, char ***dict);
int		ft_match_print(char c, char **entry, int index);
void	ft_print_entry(char *value, int index);
void	ft_print_scale(char *str, char ***dict);
int		ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_is_separator(char *str, char *sep);
int		ft_count_words(char *str, char *sep);
char	**ft_split(char *str, char *sep);
void	ft_print_array(char ***array);
char	***dict_to_array(char *str);
char	***ft_load_dict(char *path);
int		ft_strcmp(char *s1, char *s2);
int		ft_has_key(char ***dict, char *key);
int		ft_check_required_keys(char ***reference, char ***custom);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_nbrlen(int nbr);
int		ft_create_int(int a, char c);
int		ft_atoi(char *str);
void	ft_putnbr(int nbr);
void	ft_print_nb(int nbr, char ***dict);
void	ft_read_from_left(char *str, char ***dict);

#endif
