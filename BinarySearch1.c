#include<stdio.h>
int main(){
    int N;
    scanf("%d",&N);
        int angka[100];
    for(int i=0;i<N;i++){
            scanf("%d",&angka[i]);
    }
    int batas_bawah = 0;
    int batas_atas = N;
        int cari,mid;
        scanf("%d",&cari);
        
            while(batas_bawah <= batas_atas){
                mid = (batas_atas+batas_bawah)/2;
                if(cari > angka[mid]){
                    batas_bawah = mid+1;
                }
                else if(cari<angka[mid]){
                    batas_atas = mid-1;
                }
                else{
                    batas_bawah = batas_atas+1;
                }
            }
    if(cari==angka[mid]){
        printf("angka ditemukan pada indeks ke-%d",mid+1);
    }
    else{
        printf("Data tidak ditemukan");
    }
}