
/* *****************************************************************/
/*                                                                            */
/*   ┌────┐ ┌────┐                     A-MAZE-(ing) CHALLENGE                 */
/*   └┐  ┌┘ └┐╔══╧═╗                                                          */
/*    │  │   │╚╗  ╔╝      DEVELOPED BY: Daniel Pineda          */
/*    │  │   │ ║  ║                     dapineda@javeriana.edu.co             */
/*    │  │   │ ║  ║                                                           */
/*    │╔═╧══╗│ ║  ║       Bogota, D.C., October 8th, 2018.                    */
/*    │╚╗  ╔╝┘ ║  ║                                                           */
/*    └┐║  ╚╗ ╔╝  ║       Copyright (C) Electronics Engineering Program       */
/*     └╚╗  ╚═╝  ╔╝                     School of Engineering                 */
/*      └╚╗     ╔╝                      Pontificia Universidad Javeriana      */
/*        ╚═════╝                       Bogota - Colombia - South America     */
/*                                                                            */
/******************************************************************************/


/*
 Pontificia Universidad Javeriana
 Daniel Andres Pineda Su·rez
 Diseno de Sistemas con Procesadores
 "Robot Challenge"
 */




#include <stdio.h>
#include <stdlib.h>

#include "maze.h"

typedef enum {CASE_0, CASE_1, CASE_2, CASE_3} STATE_T;

int 
main()
{
    STATE_T state = CASE_0;

    Testing_Maze();

        while(RUNNING){
            switch(state)
{
            case CASE_0:
                if( Is_There_Wall() ){
                    state=CASE_1;
                   }
               
                   
                else    
                forward();
                
               break;

            case CASE_1:
                if( Is_There_Wall()){
                    Robot(	CLOCK_WISE	);
                    state=CASE_2;
                    }

                    
 
                    else
                    state=CASE_0;
                    
                    break;

            case CASE_2:
                if( Is_There_Wall() ){
                    Robot(	CLOCK_WISE	);
                    
                       state=CASE_3;
                }

          
               
                       
                       else
                
                      state=CASE_0;
                
                break;

            case CASE_3:

           
                         if( Is_There_Wall() ){
                    Robot(	CLOCK_WISE	);
 
 
                    Robot(	CLOCK_WISE	);

                    state=CASE_0;
                } 
 
               

     else

                    state=CASE_0;

      
                break;
                
            }
    return 0;
}