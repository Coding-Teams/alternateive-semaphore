#include <stdio.h>
#include <stdlib.h>




//Semaphore algorithm made by Fabio-Git-Dev, not accurate, first prototype with standard libraries.

      typedef struct { //struct for semaphore value wich will be added or subtracted.

       int istances;

       int Process;





       struct process *list; //declaration of a lst wich will contain the process that are in wait.

 } semaphore;



       void wait () (semaphore *S) {   //wait function

     S->istances--; //function to decrease the counter in wait function.

     if (S->istances < 0) {

        S->list;

         sleep("Process");                   //add process to wait list.

     } else {
          signal(s);

       }


 }

            void (signal)() (semaphore *S) { //function to increase the value of the semaphore

            S->istances++;

            if (S->istances <= 0) {

            S->list;

                wakeup("Process");


            } else {
                wait(w);


            }
