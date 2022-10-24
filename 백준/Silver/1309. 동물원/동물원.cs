using System;

class Program
{

    static void Main() {
        int n = int.Parse(Console.ReadLine());
        int[,] dp = new int[n+1,3];
        dp[1,0] = 1;
        dp[1,1] = 1;
        dp[1,2] = 1;
        for(int i=2;i<n+1;i++)
        {
            dp[i,0] = (dp[i-1,1] + dp[i-1,2]) % 9901;
            dp[i,1] = (dp[i-1,0] + dp[i-1,2]) % 9901;
            dp[i,2] = (dp[i-1,0] + dp[i-1,1] + dp[i-1,2]) % 9901;
        }
        Console.Write((dp[n,0] + dp[n,1] + dp[n,2]) % 9901);
    }
}