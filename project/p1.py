# 프로젝트 문제 1번
input = [10, 40, 30, 60, 30]

def problem1(input): 
    mean = 0
    median = 0
    result = [0,0]
    #평균값
    mean=sum(input)/len(input)
    
    #중앙값 : 주어진 input 리스트를 정렬한 후, 중앙에 위치한 값을 선택한다.
    sorted_input = sorted(input)
    middle_index = len(sorted_input) // 2
    median = sorted_input[middle_index]
    
    result[0] = mean
    result[1] = median
    return result

result = problem1(input)

print(int(result[0]))
print(result[1])

assert result == [34, 30]
print("정답입니다.")
