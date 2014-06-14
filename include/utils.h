/*
	libpe - the PE library

	Copyright (C) 2010 - 2014 libpe authors

	This program is free software: you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation, either version 3 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <stdbool.h>

typedef void (*callback_t)(const char *name, const char *value);

bool str_ends_with(const char *str, const char *suffix);
char *str_inplace_ltrim(char *str);
char *str_inplace_rtrim(char *str);
char *str_inplace_trim(char *str);

int round_up(int num_to_round, int multiple);
int pe_is_file_readable(const char *path);
int pe_load_config(const char *path, callback_t cb);
