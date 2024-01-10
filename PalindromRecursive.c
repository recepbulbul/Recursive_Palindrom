#include <stdio.h>
#include <string.h>
int sayac=0;
void palindrom(char* kelime,int size){
    int palindrommu=1;
    if (sayac<size/2)
    {
        if (*(kelime+sayac)== *(kelime+size-1-sayac))
        {
            sayac++;
            palindrom(kelime,size);
                
        }
        else{
            printf("Kelime Palindrom Degildir");
        }
            
    }
    else{
        printf("Kelime Palindromdur");
    }    
}
int main() {
    char kelime[20];
    puts("Kelime Giriniz: ");
    gets(kelime);
    int size = strlen(kelime);
    palindrom(kelime,size);
    return 0;
}
