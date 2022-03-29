#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK 3

typedef struct
{
    int top;
    char data[3][3];
}STACK;

STACK tumpuk;

void inisialisasi()
{
    tumpuk.top = -1;
}

int isfull()
{
    if(tumpuk.top == MAX_STACK -1)
    {
        return 1;
    }
    return 0;
}

int isempty()
{
    if(tumpuk.top == -1)
         {
        return 1;
    }
    return 0;
}

void push (char d[3])
{
    tumpuk.top++;
    strcpy(tumpuk.data[tumpuk.top], d);
}

void pop()
{
    printf("Data yang diambil = %s\n", tumpuk.data[tumpuk.top]);
    tumpuk.top--;
}

void tampil()
{
    for(int i=tumpuk.top; i >=0; i--)
    {
        printf("Data : %s\n", tumpuk.data[i]);
    }
}

void clear()
{
    tumpuk.top = -1;
}


int main()
{
    int pilihan;
    inisialisasi();
    char dt[3];
    do
    {
        system("cls");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Cetak\n");
        printf("4.Hapus\n");
        printf("5.Keluar\n");
        printf("Masukan Pilihan Anda : ");
        scanf("%d", &pilihan);

        switch(pilihan)
        {
            case 1 :
                system ("cls");
                if(isfull()!= 1)
            {
                printf("Data yang ingin disimpan = ");
                scanf("%s", &dt);
                push(dt);
            }else
            {
                printf("\nARRAY STACK sudah penuh !!");
            }
            system("pause");
            break;

            case 2 :
                system("cls");
                if(isempty() != 1)
            {
                pop();
            }else
            {
                printf("\n data masih kosong !\n");
            }
            system("pause");
            break;

            case 3 :
                system("cls");
                if(isempty() != 1)
            {
                tampil();
            } else
            {
                printf("Masih Kosong !\n");
            }
            system("pause");
            break;

            case 4 :
                system("cls");
                clear();
                printf("ARRAY STACK sudah kosong!\n");
                system("pause");
            break;
        }
    }
    while(pilihan != 5);
    printf("Keluar dari program !!\n");

}
