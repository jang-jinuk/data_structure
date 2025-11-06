#include <stdio.h>

typedef struct USERDATA {
    int age;
    char name[32];
    char phone[32];
    struct USERDATA* pNext;
} USERDATA;


int main(void) {
    USERDATA aList[4] = {
        {20, "Uk", "010-1234-1234", NULL},
        {21, "Jin", "010-2345-2353", NULL},
        {22, "Mud","010-5678-5678", NULL},
        {23, "JJU", "010-4885-4885", NULL}
    };

    aList[0].pNext = &aList[1];
    aList[1].pNext = &aList[2];
    aList[2].pNext = &aList[3];
    aList[3].pNext = NULL;

    USERDATA* pUser = aList;

    while (pUser != NULL) {
        printf("[%p], %d, %s, %s, [pNext: %p] \n", pUser, pUser->age, pUser->name, pUser->phone, pUser->pNext);
        pUser = pUser->pNext;
    }

    return 0;
}