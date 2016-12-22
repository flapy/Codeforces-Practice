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
		int ans;
		for(int i=n+1;;i++)
		{
			HashSet<Integer> hs=new HashSet<Integer>();
			int temp=i;
			int cnt=0;
			while(temp>0)
			{
				cnt++;
				hs.add(temp%10);
				temp/=10;
			}
			if(cnt==hs.size())
			{
				ans=i;
				break;
			}
		}
		System.out.println(ans);
	}
}