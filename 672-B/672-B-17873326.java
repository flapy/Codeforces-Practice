/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		String s="";
		Scanner sc=new Scanner(System.in);
		int n=sc.nextInt();
		s=sc.next();
		if(n>26)
		{
			System.out.println("-1");
		}
		else
		{
			HashSet<Character> hs=new HashSet<Character>();
			for(int i=0;i<n;i++)
			{
				hs.add(s.charAt(i));
			}
			System.out.println(n-hs.size());
		}
	}
}