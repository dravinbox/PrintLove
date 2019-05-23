#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define SPEED 300000

void love(void);
int randint(int,int);

int main() {

    love();
    return 0;
}
int randint(int s,int e){
    srand(time(NULL));
    return rand() %(e-s+1) +s;
}

void love() {
    for (int i=1;i<45;i++){
        printf("\n");
    }

    int play = 0;
    while (play == 0) {
        int left_spaces = randint(8,80);
        int loves=10;
        for(int i=1;i<20;i++){
            int count = left_spaces;
            while(count > 0){
                printf(" ");
                count -= 1;
            }
            count = loves;
            while(count > 0){
                if (i==1 && count <=7 && count >=4){
                    printf("      ");
                }else if(i==2 && (count ==5 || count ==6  || count ==7) ){
                    printf("      ");
                }else if(i==3 && (count == 6 || count ==7)){
                    printf("      ");
                }else if(i==4 && count ==7){
                    printf("      ");
                }else {
                    printf("\033[31mLOVEMY\033[0m");
                }
                count-=1;
            }
            if(i<5){
                left_spaces = left_spaces - 3;
                loves += 1;

            }else{
                left_spaces = left_spaces + 3;
                loves -= 1;
            }
            usleep(SPEED);
            printf("\n");
        }
        printf("\n");


        usleep(SPEED);

        int count=randint(8,80);
        while(count>0){
            printf(" ");
            count-=1;
        }
        printf("\033[35mZhangRongYan\033[0m\n");
        usleep(SPEED);
        printf("\n");
        usleep(SPEED);



    }



}