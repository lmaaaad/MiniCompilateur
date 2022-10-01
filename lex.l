%option yylineno
%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "syntax.tab.h"
#include "TS2.h"

extern nb_ligne;
extern col;
extern YYSTYPE yylval;
int i;
char Const[20];
%}

lettre [a-z]
chiffre [0-9]
IDF [A-Z]({lettre}|{chiffre})*
INT_CST \([+-]{chiffre}+\)|{chiffre}+
FLOAT_CST ({chiffre}+,{chiffre}+)|(\([[+-]{chiffre}+,{chiffre}+\))
CHAR_CST '.'
STRING_CST \".*\"
COMMENT #(([^(!\n)]|\n)*!\n|(.*?)*!\n)
%%

{COMMENT} { printf ("Un Commentaire reconnue\n");
          for(i=0;i<strlen(yytext);i++){if(yytext[i] == '\n' ){nb_ligne ++;  col = 1;	  }  col++;	}}
                                                     /*declaration des mots cles*/
IDENTIFICATION   {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC identification reconnu \n");          return mc_idf;    }
DIVISION         {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC division reconnu \n");                return mc_div;    }
PROGRAM          {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC programme reconnu \n");               return mc_prog;   }
ID               {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC id  reconnu \n");                     return mc_id;     }
DATA             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC data reconnu \n");                    return mc_data;   } 
WORKING          {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC working reconnu \n");                 return mc_work;   }
STORAGE          {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC storage reconnu \n");                 return mc_storage;}
SECTION          {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC section reconnu \n");                 return mc_section;}
PROCEDURE        {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC procedure reconnu \n");               return mc_proc;   }
STOP             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC stop reconnu \n");                    return mc_stop;   }
RUN              {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC run reconnu \n");                     return mc_run;    }
SIZE             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC size reconnu \n");                    return mc_size;   }
LINE             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC line reconnu\n");                     return mc_line;   }
ACCEPT           {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC ACCEPT reconnu \n");                  return mc_accept; }
DISPLAY          {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC DISPLAY reconnu \n");                 return mc_display;}
IF               {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC IF reconnu \n");                      return mc_if;     }
ELSE             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC ELSE reconnu \n");                    return mc_else;   }
END              {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC END reconnu \n");                     return mc_end;    }
MOVE             {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC MOVE reconnu \n");                    return mc_move;   }
TO               {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC TO reconnu \n");                      return mc_to;     }
CONST            {rechercher(yytext,"MC","",1,"");	col+=strlen(yytext);      printf("MC const reconnu \n");                   return mc_const;  }
                                                 /*declaration des types*/
INTEGER          {rechercher(yytext,"MC","",1,""); yylval.str =strdup(yytext);	col+=strlen(yytext);      printf("MC integer reconnu \n");                 return mc_int;    }
CHAR             {rechercher(yytext,"MC","",1,""); yylval.str =strdup(yytext);	col+=strlen(yytext);      printf("MC char reconnu \n");                    return mc_char;   }	
FLOAT            {rechercher(yytext,"MC","",1,""); yylval.str =strdup(yytext);	col+=strlen(yytext);      printf("MC float reconnu \n");                   return mc_float;  }	 
STRING           {rechercher(yytext,"MC","",1,""); yylval.str =strdup(yytext);	col+=strlen(yytext);      printf("MC string reconnu \n");                  return mc_str;    }  
                                        /*declaration des operateurs de comparaison*/
AND              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper and reconnu \n");                     return mc_and;  }
OR               {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper or reconnu \n");                      return mc_or;   }
NOT              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper not reconnu \n");                     return mc_not;  }	
".L."            {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper > reconnue \n");                      return l;       }
".G."            {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper < reconnue \n");                      return g;       }
".GE."           {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper < reconnue \n");                      return ge;      }
".LE."           {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper <= reconnue \n");                     return le;      }
".EQ."           {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper == reconnu \n");                      return eq;      }
".DI."           {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("oper =/= reconnue \n");                    return di;      }
                                              /*autres symboles definis dans le langage*/
"$"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("$ reconnu \n");                          return dol;       }
"%"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("% reconnu \n");                          return pourc;     }
"#"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("# reconnu \n");                          return hash;      }
","              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf(", reconnu \n");                          return vrg;       }
"&"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("& reconnu \n");                          return an;        }
"@"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("@ reconnu \n");                          return aro;       }
":"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf(": reconnu \n");                          return Dpoint;    }
"/"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("/ reconnu \n");                          return slash;     }
"\""             {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("\" reconnu \n");                         return cote;      }
"="              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("= reconnu \n");                          return egl;       }
"+"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("+ reconnu \n");                          return plus;      }
"-"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf(" - reconnu \n");                         return moin;      }
"*"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("* reconnu \n");                          return mul;       }
"|"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf("| reconnu \n");                          return pipe;      }
"("              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf(" par ouver reconnu \n");                 return pa_ouv;    }
")"              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf( ") reconnu \n");                         return pa_fer;    }
"."              {rechercher(yytext,"sep","",2,"");	col+=strlen(yytext);      printf(". reconnu \n");                          return point;     }
{IDF} 			 {if (yyleng <=9)
				 {rechercher(yytext,"IDF","",0,""); 	col = col+ strlen(yytext); 	   printf("IDF reconnu %s \n",yytext);  yylval.str =strdup(yytext); 			return idf; }
       			 else {col+=strlen(yytext); 								   printf("ERREUR ligne :%d  et colonne :%d  IDF %s est tres long\n",nb_ligne,col, yytext);}}

{CHAR_CST}  	{rechercher(yytext,"CONST","CHAR",0,yytext);col+=strlen(yytext); printf("CST char reconnu \n");  yylval.str =strdup(yytext);	   	return cst_char;}

{INT_CST}  {if(atoi(yytext)<=32767 && atoi(yytext)>= -32768){
				strcpy(Const,yytext); Change_affich(Const); 
                 rechercher(yytext,"CONST","INT",0,Const); col = col+ strlen(yytext);printf("CST entiere reconnue \n");		  yylval.entier = atoi(yytext);  return cst_int;}
			else{col+=strlen(yytext);	printf("erreur lexicale a la ligne :%d et colonne :%d  depassement de capacite\n",nb_ligne, col) ;}}

{FLOAT_CST}      {strcpy(Const,yytext); Change_affich(Const); 
                  rechercher(yytext,"CONST","FLOAT",0,Const);	col+=strlen(yytext);      printf("CST reelle reconnue \n");  yylval.reel = atof(yytext); return cst_reel; }

{STRING_CST}     {rechercher(yytext,"CONST","STRING",0,yytext);col+=strlen(yytext);        printf("CST string reconnue \n");   yylval.str =strdup(yytext);  return cst_str; }

								  
[ \t ]           {col+=strlen(yytext);}
\n  {nb_ligne++;   col=1;}
.  				{printf ("erreur lexicale a la ligne : %d ,et la colonne :%d \n",yylineno,col);return err_lex; }
%% 
