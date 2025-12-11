#include <stdio.h>

int main() {

    int path,swamp,safe,maze,vault,chest,flag=0;
    scanf("%d",&path);
    if(path==1){
        printf("Player chooses the Left path.\n");
        scanf("%d",&swamp);
        if(swamp==1){
            printf("Poor choice, Game Over!\n");
        }
        else{
            printf("Player found a bridge.\n");
            scanf("%d",&safe);
            if(safe==1){
                printf("Player crosses the bridge safely.\n");
                flag=1;
            }
            else{
                printf("Poor luck, Game Over!\n");
            }
        }
    }
    else if(path==2){
        printf("Player chooses the Middle path.\n");
        scanf("%d",&maze);
        if(maze==582){
            printf("Player solved the puzzle.\n");
            flag=1;
        }
        else{
            printf("Foolish player, Game Over!\n");
        }
    }
    else{
        printf("Player chooses the Right path.\n");
        scanf("%d",&vault);
        if(vault==30){
            printf("Player solved the puzzle.\n");
            flag=1;
        }
        else{
            printf("Foolish player, Game Over!\n");
        }
    }
    if(flag==1){
        scanf("%d",&chest);
        if(chest==1){
            printf("All that glitters is not gold, Game Over!");
        }
        else if(chest==2){
            printf("All your efforts were for nothing, Game Over!");
        }
        else{
            printf("Congratulations!! You won the treasure.");
        }
    }
    return 0;
}