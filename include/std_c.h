/*****************************************************************************/
/*                                                                           */
/* Sistemas operativos empotrados                                            */
/*                                                                           */
/* Tipos y constantes para programar en C estándar                           */
/*                                                                           */
/*****************************************************************************/

/*
 * Sólo incluimos este archivo una vez
 */
#ifndef std_c_h
#define std_c_h


/*****************************************************************************/
/* Tipos estándar                                                            */
/*****************************************************************************/

typedef unsigned int            u_int;
typedef unsigned short          u_short;
typedef unsigned char           u_char;
typedef signed short            fixed_p;

/*****************************************************************************/
/* Valores booleanos                                                         */
/*****************************************************************************/

#define TRUE                    1
#define FALSE                   0

#ifndef NULL
  #define NULL                  ((void *)0)
#endif


/*****************************************************************************/
/* Macros                                                                    */
/*****************************************************************************/

#define MIN(x,y)                ((x) < (y) ? (x) : (y))
#define MAX(x,y)                ((x) > (y) ? (x) : (y))

/*****************************************************************************/

#endif /* std_c_h */
