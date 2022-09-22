#"cerner_2^5_2022" "cerner_2tothe5th_2022"

## There are N teams(1,2,....N). Every team play with all other teams exactly once.
## All games have only two possible results - win or loss.
## A win yields 2 points to the winning team while a loss yields no points.
## What is the maximum number of points a team finishing at the Kth position can score?


def solve():
    n,k = input().split()
    n = int(n)
    k = int(k)
    res=(2*n-k-1)/2;
    max_score=int(2*res);
    print(max_score)

if __name__ == '__main__':
    test_cases = int(input())
    for i in range(test_cases):
        solve()
