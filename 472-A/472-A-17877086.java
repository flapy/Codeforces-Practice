/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Ideone
{
	public static boolean isPrime(int n)
	{
		if(n==2)
		return true;
		if(n==1)
		return false;
		int end=(int)Math.sqrt(n);
		for(int i=2;i<=end;i++)
		{
			if(n%i==0)
			return false;
		}
		return true;
	}
	public static boolean check(int a,int b)
	{
		return (!isPrime(a) && !isPrime(b));
	}
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		int a=n/2;
		int b=n-n/2;
		//System.out.println(a+" "+b);
		while(!check(a,b))
		{
			a++;
			b--;
		}
		System.out.println(a+" "+b);
	}
}