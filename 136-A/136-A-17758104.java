import java.util.*;
import java.lang.*;
import java.io.*;
public class Ideone
{
	public static void main (String[] args)
	{
		int n;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int a[]=new int[100005];
		HashMap <Integer,Integer> hm=new HashMap<Integer,Integer>();
		for(int i=0;i<n;i++)
		{
			a[i]=sc.nextInt();
			hm.put(a[i],i+1);
		}
		for(int i=1;i<=n;i++)
		System.out.print(hm.get(i)+" ");
	}
}