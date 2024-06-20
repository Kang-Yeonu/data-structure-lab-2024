# 프로젝트 문제 2번
input = ")))()"

def problem2(input):
   stack = []  # 스택으로 활용할 리스트
    
   for char in input:
        if char == '(':
            stack.append(char)
        elif char == ')':
            if stack and stack[-1] == '(':
                stack.pop()  # 짝이 맞는 '(' 제거
            else:
                stack.append(char)  # 추가로 닫아야 할 ')' 추가
    
   return len(stack)
   return result

result = problem2(input)
print(int(result))
assert result == 3
print("정답입니다.")
