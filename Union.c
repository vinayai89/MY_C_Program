#include <stdio.h>
union kings {
    int i;
    float f;
};
int main() {
    union kings kings;
    kings.i =10;
    printf("kings,i =%d\n",kings.i);
    kings.f=23,4;
    printf("kings,f=%2f\n",kings.f);
    
}
