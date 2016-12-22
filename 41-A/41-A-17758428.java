import java.util.*;
import java.lang.*;
import java.io.*;
public class Ideone
{
	public static void main (String[] args)
	{
		Scanner sc=new Scanner(System.in);
		String s=sc.next();
		String t=sc.next();
		int n_s=s.length();
		int n_t=t.length();
		String ans="YES";
		int i,j;
		for(i=0,j=n_t-1;i<n_s;i++,j--)
		{
			if(s.charAt(i)!=t.charAt(j))
			{
				ans="NO";
				break;
			}
		}
		System.out.println(ans);
	}
}