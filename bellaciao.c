#include<stdio.h>
int main(){
    int D,d,P,Q;
    int t = 0;
    long int pv[t];
    scanf("%ld",&t);

    for(int i=0; i<t ;i++){
        scanf("%ld%ld%ld%ld",&D,&d,&P,&Q);
        long int retval=0;//,adder = P;

        int x=D/d;
        int r=D%d;

        retval=P*D;
        retval=r*((x*Q));
        for(int h=0;h<x;h++){
            retval=retval+(d*((h*Q)));
        }

        // for(int j = 1;j<D+1;j++){
        //     retval = retval+adder;
        //     if(j%d==0){
        //         adder = adder+Q;
        //     }
        // }
        pv[i]=retval;
    }
    for(int x=0;x<t;x++){
        printf("%ld\n",pv[x]);
    }
    return 0;
}
