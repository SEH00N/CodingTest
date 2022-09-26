def solution(s):
    answer = ''.join(sorted(s, reverse=True))
    return answer

print(solution('bcAd'))