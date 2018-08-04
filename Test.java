import java.io.*;
import java.util.*;
class Test
{
    public static void main(String basil[])
    {
        Scanner sc=new Scanner(System.in);
        int i,j,flag=1;
        int a[][]=new int[5][5];
        int b[][]=new int[5][5];
        int r=sc.nextInt();
        int c=sc.nextInt();
        int r2=sc.nextInt();
        int c2=sc.nextInt();
        if((r!=r2)||(c!=c2))
        {
            System.out.println("not compatible");
        }
        else
        {
            for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                a[i][j]=sc.nextInt();
            }
            for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                b[i][j]=sc.nextInt();
            }
            for(i=0;i<r;i++)
            for(j=0;j<c;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            System.out.println("Not equal");
            else
            System.out.println("equal");
            sc.close();
        }
    }
}