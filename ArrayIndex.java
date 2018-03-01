import java.util.*;
import java.lang.*;
public class ArrayIndex 
{
    public static void main(String[] args) 
    {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        String s1=sc.nextLine();
        String s=sc.nextLine();
        String arr[]=s.split(" ");
        int n=arr.length;
        int i,flag=0;
        for(i=0;i<n;i++)
        {
            if(num==Integer.parseInt(arr[i]))
            {
                System.out.println(i);
                flag=1;
                break;
            }
        } 
        if(flag==0)
        {
            System.out.println("-1");
        }
    }
}
