/*  Petri-Foo is a fork of the Specimen audio sampler.

    Copyright 2011 Brendan Jones

    This file is part of Petri-Foo.

    Petri-Foo is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License version 2 as
    published by the Free Software Foundation.

    Petri-Foo is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with Petri-Foo.  If not, see <http://www.gnu.org/licenses/>.

    mod1 / jph
    - enh github#5 logarithmic sliders
    - enh github#9 load last bank at startup
*/


#ifndef SETTINGS_H
#define SETTINGS_H


#include <stdbool.h>


#define DEFAULT_LOG_LINES           100
#define DEFAULT_ABS_MAX_SAMPLE      (1024 * 1024 * 1024)
#define DEFAULT_MAX_SAMPLE          (1024 * 1024 * 25)


typedef struct global_settings_def
{
    char*   filename;
    char*   last_sample_dir;
    char*   last_bank_dir;
    bool	load_last_bank;				// mod1 github#9
    char*   last_bank;
    int     log_lines;

    char*   sample_file_filter;
    bool    sample_auto_preview;
    bool	log_sliders;				// mod1 github#5
} global_settings;


void                settings_init(void);
int                 settings_read(const char* path);
int                 settings_write(void);
global_settings*    settings_get(void);
void                settings_free();


#endif
