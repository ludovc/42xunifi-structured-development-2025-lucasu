#ifndef DIGITAL_LIBRARY_H
# define DIGITAL_LIBRARY_H

struct Book
{
	int		id;
	char	*title;
	char	*author;
};

struct Catalog
{
	struct Book		*book;
	struct Catalog	*next;
};

char			**read_file(char *pathname);
struct Catalog	*parse_data(char **file_data);
int				is_valid_entry(char *line);
int				display_prompt();

struct Book		*parse_book(char *line);
void			free_all(struct Catalog **catalog, struct Catalog **result);

struct Catalog	*search_by_title(char *title_prompt);
struct Catalog	*search_by_author(char *author_prompt);
void			fix_prompt(char **prompt);
void			display_result(struct Catalog *result);

#endif
