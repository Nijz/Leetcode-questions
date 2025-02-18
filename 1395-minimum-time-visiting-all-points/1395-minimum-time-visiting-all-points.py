class Solution:
    def minTimeToVisitAllPoints(self, points: List[List[int]]) -> int:
        
        res = 0
        print(1, points)
        
        x1, y1 = points.pop()
        print(2, points)
        
        while points:

            print(3, points)
            x2, y2 = points.pop()
            print(x2,y2)
            print(4, points)
            print(x1, y1, x2, y2)
            res += max(abs(y2 - y1), abs(x2 - x1))
            print(5, points)
            print(x1, y1, x2, y2)
            x1, y1 = x2, y2
            print(6, points)
        
        return res