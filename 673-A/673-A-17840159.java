/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

public class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		int n=0;
		Scanner sc=new Scanner(System.in);
		n=sc.nextInt();
		int prev=15;
		int a;
		for(int i=0;i<n;i++)
		{
			a=sc.nextInt();
			if(a<=prev)
			{
				prev=a+15;
				continue;
			}
			else
			{
				break;
			}
		}
		System.out.println(prev>90?90:prev);
	}
}