import java.util.*;

class Solution {
    public int[][] merge(int[][] intervals) {
        int n = intervals.length;

        // Sort intervals based on the start values
        Arrays.sort(intervals, new Comparator<int[]>() {
            public int compare(int[] a, int[] b) {
                return a[0] - b[0];
            }
        });

        List<int[]> result = new ArrayList<>();
        result.add(intervals[0]);

        for (int i = 1; i < n; i++) {
            int[] currentInterval = intervals[i];
            int[] lastMergedInterval = result.get(result.size() - 1);

            if (currentInterval[0] > lastMergedInterval[1]) {
                // No overlap, add the current interval to the result
                result.add(currentInterval);
            } else {
                // Overlapping intervals, merge them
                lastMergedInterval[1] = Math.max(lastMergedInterval[1], currentInterval[1]);
            }
        }

        // Convert the ArrayList to a 2D array

        int[][] mergedIntervals = result.toArray(new int[result.size()][]);
        

        return mergedIntervals;
    }
}
