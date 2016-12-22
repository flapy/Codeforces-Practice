#include<stdio.h>
#include<string.h>
int main()
{
    long long int n,i;
    char s[100005];
    scanf("%lld",&n);
    scanf("%s",s);
    long long int l=strlen(s),cnt=0;
    long long int pos[100005];
    long long int j=0;
    if(n==1)
    {
        printf("YES\n");
        printf("%s\n",s);
    }
    else if(n>l)
    printf("NO\n");
    else
    {
        long long int a[27];
        for(i=0;i<26;i++)
        {
            a[i]=0;
        }
        for(i=0;i<l;i++)
        {
            //printf("hi");
            if(a[s[i]-'a']==0)
            {
                a[s[i]-'a']++;
                pos[j++]=i;
            //  printf("%lld",i);
                if(j==n)
                break;
            }
        }
        pos[j++]=l-1;
        for(i=0;i<26;i++)
        {
            if(a[i]!=0)
            cnt++;
        }
        if(cnt<n)
        printf("NO\n");
        else
        {
            long long int k=0;
            printf("YES\n");
            for(i=1;i<j;i++)
            {
                for(k=pos[i-1];k<pos[i];k++)
                {
                    printf("%c",s[k]);
                }
                if(i==j-1)
                printf("%c",s[k]);
                printf("\n");
            }
        }
    }
    return 0;
}