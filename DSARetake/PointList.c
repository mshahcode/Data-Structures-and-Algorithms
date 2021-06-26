#include "PointList.h"

PointList* PL_new(void){
    return NULL;
}

//--------------------------------------------

PointList* PL_add(PointList* plist, Point p){
    PointList* new_list = (PointList*)malloc(sizeof(PointList));
    if(new_list==NULL){
        printf("Dynamic allocation failed!");
        exit(1);
    }
    new_list->pos = p;
    new_list->next= plist;
    return new_list;
}

//--------------------------------------------

void PL_print(PointList *pl, const char *label){
    PointList *pf;
    if(pl==NULL){
        printf("Can't show, the list is empy!");
    }else{
        int count = 0;
        printf("---------- point list %s -----------\n",label);
        for(pf=pl;pf!=NULL;pf=pf->next){
            printf("%d (%f %f %f) %p %p\n",count,pf->pos.x,pf->pos.y,pf->pos.z,pf,pf->next);
            count++;
        }
        printf("%d elements.\n",count);
    }
}

//--------------------------------------------

PointList *PL_nOrigins(int n){
    PointList* new_list = PL_new();
    if(n<=0){
        printf("The specified number of elements is less or equal to zero!\n");
        return NULL;
    }
    for(int i=0;i<n;i++){
        new_list = PL_add(new_list,P_new(0,0,0));
    }
    return new_list;
}

//--------------------------------------------

PointList *PL_last(PointList *plist){
    PointList* pf=plist;
    if(plist==NULL){
        printf("The list is empty. Can't return last element!\n");
        return NULL;
    }
    while(pf->next!=NULL){
        pf = pf->next;
    }
    return pf;
}

//--------------------------------------------

PointList *PL_append(PointList *plist, Point p){
    PointList* new_list = (PointList*)malloc(sizeof(PointList));
    PointList* pf = plist;
    new_list->pos = p;
    new_list->next = NULL;
    if(plist==NULL){
        return new_list;
    }
    PL_last(plist)->next = new_list;
    return plist;
}

//--------------------------------------------

int PL_size(PointList* pl){
    PointList *pf = pl;
    int count = 0;
    while(pf!=NULL){
        count++;
        pf=pf->next;
    }
    return count;
}

//--------------------------------------------

PointList *PL_index(PointList *plist, int ind){
    PointList* pf = plist;
    if(ind<0 || ind>=PL_size(plist)){
        printf("Index is smaller than 0!(PL_index)\n");
        return NULL;
    }
    int j = 0;
    while(j!=ind && pf!=NULL){
        j++;
        pf=pf->next;
    }
    return pf;
}

//--------------------------------------------

PointList* PL_setPoint(PointList *plist, int ind, Point p){
    if(ind<0 || ind>=PL_size(plist)){
        printf("Index is smaller than 0!(PL_setPoint)\n");
        return plist;
    }
    PL_index(plist,ind)->pos = p;
    return plist;    
}

//--------------------------------------------

