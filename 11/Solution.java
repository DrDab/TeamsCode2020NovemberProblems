import java.util.Scanner;

public class ZygoteDisplacement
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        String[] l1 = input.nextLine().split(" ");
        int N = Integer.parseInt(l1[0]);
        int M = Integer.parseInt(l1[1]);
        String[] l2 = input.nextLine().split(" ");
        int[] pSum = new int[N];
        int[] answers = new int[M];
        for (int i = 0; i < N; i++)
        {
            int cur = Integer.parseInt(l2[i]);
            pSum[i] = i == 0 ? cur : pSum[i - 1] + cur;
        }
        for (int i = 0; i < M; i++)
        {
            answers[i] = pSum[Integer.parseInt(input.nextLine()) - 1];
        }
        for (int i = 0; i < M; i++)
        {
            System.out.println(answers[i]);
        }
        System.out.println("\n");
    }
}
