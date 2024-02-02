import java.io.*;
import java.util.ArrayList;
import java.util.StringTokenizer;



public class CSESMovieFestival {

    private static class Tuple implements Comparable<Tuple> {
        public final Integer first;
        public final Integer second;

        public Tuple(Integer first, Integer second) {
            this.first = first;
            this.second = second;
        }

        public int compareTo(Tuple other) {
            return this.second.compareTo(other.second);
        }
    }

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter pw = new PrintWriter(System.out);

        int n = Integer.parseInt(br.readLine());
        StringTokenizer st;
        int[][] intervals = new int[3][2];

        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            intervals[i][0] = Integer.parseInt(st.nextToken());
            intervals[i][1] = Integer.parseInt(st.nextToken());




        }


    }
}
