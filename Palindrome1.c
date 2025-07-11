/*
 * Palindrome1.cxx
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
/*
 * 06.12.2024 22:25:48
 * name: unknown
 * @param
 * @return
 * 
 */


int
main (int argc, char **argv)
{
//char vars1[20];
  char vars2[] = "mimississipxyxpipipzzzz Revitive";
  char vars3[7] = { 0 };
// char *wikipedia = vars[4];

/*
  char src[] = "SexDrugsRocknroll";
  char dest[5] = { 0 };		// 4 chars + terminator 



*/
  
  int len = strlen (vars2);

  int i;
  printf ("found1 =, %s\n", vars2);
//    printf ("fo =, %s\n", vars2[1]);

/*
  for (i = 0; i < len; i++)
    {
      if (vars2[i] == 's')
	printf ("found1 =, %d\n", i);
    }
*/


  for (i = 0; i < len; i++)
    {
      if ((vars2[i] == vars2[i + 2]) && (vars2[i] != vars2[i + 1]))
	{
	  printf ("found2 =, %d\n", i);
	  strncpy (vars3, vars2 + (i), 3);
//    strncpy(dest, src+(i*4), 4);
	  printf ("loop %d : %s\n", i, vars3);
	  if ((vars2[i-1] == vars2[i+3]))
	  {
		printf ("   five chars =, %d\n", i); 
		strncpy (vars3, &vars2[i]-1, 5);  // vars3 destination ; vars2 source :  vars2[i-1]
		printf ("loop5 %d : %s\n", i, vars3);
	  }
	}
    }
  return 0;
}
