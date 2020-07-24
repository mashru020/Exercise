/*guess the magic number*/

int main(void)
{
    int M_num=55;//magic number
    int ans;
    printf("Guess the magic number : \n");
    for(int i=1;i<11;i++)
    {
        printf("%d :",i);
        scanf("%d",&ans);
        if(ans==M_num)
        {
             printf("RIGHT..!\n");
             break;
        }
        else
        {
            if(ans>M_num)
                printf("Less then %d\n",ans);
            else
                printf("More then %d\n",ans);

        }
        if(i==10)printf("SORRY... you fail ");
    }

    return 0;
}
