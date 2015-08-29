import java.util.Scanner;
import java.util.StringTokenizer;
 
class Main
{	public static int[][] board = new int[1001][1001];
	public static Scanner inp;
	public static StringTokenizer str;
	public static int count = 0,m,n;
	public static void total(int x,int y)
	{
		if(x == m && y == n)
		{
			count++;
			return;
		}
		if(x < m && board[x+1][y] != -1)total(x+1,y);
		if(y < n && board[x][y+1] != -1)total(x,y+1);
	}
	public static void main(String []args)
	{
		int x,y,i,j,k,tc;
		String tmp;
		inp = new Scanner(System.in);		
		tmp = inp.nextLine();
		tc = Integer.parseInt(tmp);
		while(tc-- != 0)
		{
			tmp = inp.nextLine();
			tmp = inp.nextLine();
			str = new StringTokenizer(tmp," ");
			m = Integer.parseInt(str.nextToken());
			n = Integer.parseInt(str.nextToken());			
			for(i = 1; i <= m; i++)
				for(j = 1; j <= n; j++)board[i][j] = 0;
			for(i = 1; i <= m; i++)
			{
				tmp = inp.nextLine();
				str = new StringTokenizer(tmp," ");
				x = Integer.parseInt(str.nextToken());
				while(str.hasMoreTokens())
				{
					y = Integer.parseInt(str.nextToken());
					board[x][y] = -1;
				}
			}
			count = 0;
			if(board[1][1] != -1)total(1,1);			
			System.out.println(count);
			if(tc != 0)System.out.println();
		}
	}
}
