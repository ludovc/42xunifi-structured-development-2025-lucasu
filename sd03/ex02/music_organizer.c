#include "music_organizer.h"

struct MusicLibrary	*organize_music_library(const char *directory_path)
{
	struct MusicLibrary	*library;
	const char			**filenames;
	struct MusicFile	*song;
	int					i;

	library = create_music_library();
	if (!library)
		return (NULL);
	filenames = scan_directory(directory_path);
	i = 0;
	while (filenames[i])
	{
		song = process_music_file(directory_path, filenames[i]);
		update_music_library(library, song);
		i++;
	}
	return (library);
}
