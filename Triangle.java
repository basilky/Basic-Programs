/* 
Print numbers in a triangular shape
*/
import java.util.Scanner;
class Triangle
{
    public static void main(String args[])
    {
        Scanner sc =new Scanner(System.in);
        int r,i,j,flag=0,count=1;
        r=sc.nextInt();
        for(i=0;i<r;i++)
        {
            for(j=0;j<=i;j++)
            {
                if(flag==0)
                {
                    System.out.print(count);
                    flag=1;
                    count++;
                }
                else
                {
                    System.out.print("*"+count);
                    count++;
                }
            }
            System.out.println();
            flag=0;
        }
    }
}
