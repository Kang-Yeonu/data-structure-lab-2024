from collections import deque

def bfs(forest, bear_size, start_pos, N):
    DIRECTIONS = [(-1, 0), (0, -1), (1, 0), (0, 1)]
    queue = deque([(start_pos[0], start_pos[1], 0)])  # (x, y, distance)
    visited = set([start_pos])
    prey = []

    while queue:
        x, y, dist = queue.popleft()
        
        for dx, dy in DIRECTIONS:
            nx, ny = x + dx, y + dy
            
            if 0 <= nx < N and 0 <= ny < N and (nx, ny) not in visited:
                if forest[nx][ny] <= bear_size:
                    visited.add((nx, ny))
                    queue.append((nx, ny, dist + 1))
                    if 0 < forest[nx][ny] < bear_size:
                        prey.append((dist + 1, nx, ny))
    
    if prey:
        prey.sort()
        return prey[0]
    else:
        return None

def problem3(input):
    bear_size = 2
    honeycomb_count = 0
    time = 0
    bear_x, bear_y = 0, 0
    # 입력 힌트

    # forest 리스트를 input 리스트로 초기화
    forest = [row[:] for row in input]
    
    # 곰의 초기 위치 찾기
    for i in range(N):
        for j in range(N):
            if forest[i][j] == 9:
                bear_x, bear_y = i, j
                forest[i][j] = 0
    
    while True:
        target = bfs(forest, bear_size, (bear_x, bear_y), N)
        
        if not target:
            break
        
        dist, x, y = target
        bear_x, bear_y = x, y
        forest[x][y] = 0
        time += dist
        honeycomb_count += 1
        
        # 벌집을 먹어 곰의 크기가 증가
        if honeycomb_count == bear_size:
            bear_size += 1
            honeycomb_count = 0
            
    result = 0
    result = time
    return result

input = [[4, 3, 2, 1],
         [0, 0, 0, 0],
         [0, 0, 9, 0],
         [1, 2, 3, 4]]
N = 4

forest = []

result = problem3(input)
print(result)
assert result == 14
print("정답입니다.")
