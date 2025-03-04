/*
 * Copyright (c) 2019-2024 Kim Jørgensen
 *
 * This software is provided 'as-is', without any express or implied
 * warranty.  In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 */

typedef struct
{
    D64 d64;
    D64_IMAGE image;

    u8 page;
    bool dir_end;
} D64_STATE;

static D64_STATE d64_state;

static const MENU * d64_menu_init(const char *file_name);
static D64_STATE * d64_open_image(const char *filename);
static D64_DIR_ENTRY *d64_find_element(D64_STATE *state, u16 element);
static void d64_sanitize_filename(char *dest, D64_DIR_ENTRY *entry);
