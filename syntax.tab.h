
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     vrg = 258,
     mc_idf = 259,
     mc_div = 260,
     mc_prog = 261,
     mc_id = 262,
     mc_data = 263,
     mc_work = 264,
     mc_storage = 265,
     mc_section = 266,
     mc_proc = 267,
     mc_stop = 268,
     mc_run = 269,
     err_lex = 270,
     mc_int = 271,
     mc_char = 272,
     mc_float = 273,
     mc_str = 274,
     mc_const = 275,
     mc_and = 276,
     mc_or = 277,
     mc_not = 278,
     mc_line = 279,
     mc_size = 280,
     mc_accept = 281,
     mc_display = 282,
     mc_if = 283,
     mc_else = 284,
     mc_end = 285,
     mc_move = 286,
     mc_to = 287,
     hash = 288,
     dol = 289,
     pourc = 290,
     an = 291,
     aro = 292,
     Dpoint = 293,
     moin = 294,
     plus = 295,
     slash = 296,
     egl = 297,
     cote = 298,
     mul = 299,
     pipe = 300,
     pa_ouv = 301,
     pa_fer = 302,
     point = 303,
     l = 304,
     g = 305,
     ge = 306,
     le = 307,
     eq = 308,
     di = 309,
     idf = 310,
     cst_char = 311,
     cst_int = 312,
     cst_reel = 313,
     cst_str = 314
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 39 "syntax.y"
 
   int entier; 
   char* str;
   float reel;




/* Line 1676 of yacc.c  */
#line 120 "syntax.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


