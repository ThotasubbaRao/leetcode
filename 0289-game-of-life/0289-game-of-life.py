class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        rows =len(board)
        col =len(board[0])
        def countneig(r,c):
            nei=0
            for i in range(r-1,r+2):
                for j in range(c-1,c+2):
                    if((i==r and j==c) or i<0 or j<0 or i==rows or j==col):
                        continue 
                    if board[i][j] in [1,3]:
                        nei += 1
            return nei
        for r in range(rows):
            for c in range(col):
                n = countneig(r,c)

                if(board[r][c]):
                    if n in [2,3]:
                        board[r][c]=3
                else:
                    if n==3:
                        board[r][c]=2
        for r in range(rows):
            for c in range(col):
                if board[r][c]==1:
                    board[r][c]=0
                elif board[r][c] in [2,3]:
                    board[r][c]=1




        
        