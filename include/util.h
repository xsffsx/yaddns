/*
 *  Yaddns - Yet Another ddns client
 *  Copyright (C) 2008 Anthony Viallard <anthony.viallard@patatrac.info>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _YADDNS_UTIL_H_
#define _YADDNS_UTIL_H_

#include <string.h>

#define UNUSED(x) ( (void)(x) )

/*
 * Encode src txt in base64 and fill malloced ouput
 *
 * @return 0 if success, -1 otherwise
 */
extern int util_base64_encode(const char *src, char **output, size_t *output_size);

#endif
