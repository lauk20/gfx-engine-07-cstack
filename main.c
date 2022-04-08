#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "ml6.h"
#include "display.h"
#include "draw.h"
#include "matrix.h"
#include "parser.h"

int main(int argc, char **argv) {

  screen s;
  struct matrix * edges;
  struct matrix * polygons;
  struct stack * csystems;

  edges = new_matrix(4, 4);
  polygons = new_matrix(4, 4);
  csystems = new_stack();
  //transform = new_matrix(4, 4);

  if ( argc == 2 )
    parse_file( argv[1], edges, polygons, csystems, s );
  else
    parse_file( "stdin", edges, polygons, csystems, s );

  free_matrix( edges );
  free_matrix( polygons );
  free_stack(csystems);
}
