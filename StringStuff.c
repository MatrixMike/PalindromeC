/*
 * StringStuff.c
 * 
 * Copyright 2024 Michael <michael@michael-Inspiron-1501>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "SexDrugsRocknroll";
    char dest[5] = { 0 }; // 4 chars + terminator */
    int len = strlen(src);
    int i = 0;

    while (i*4 < len) {
        strncpy(dest, src+(i*4), 4);
        i++;

        printf("loop %d : %s\n", i, dest);
    }
}

