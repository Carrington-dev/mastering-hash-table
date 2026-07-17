# # class Solution:
# #     def letterCombinations(self, digits: str) -> List[str]:
#         context['2'] = ['a', 'b', 'c']
#         context['3'] = ['d', 'e', 'f']
#         context['4'] = ['g', 'h', 'i']
#         context['5'] = ['j', 'k', 'l']
#         context['6'] = ['m', 'n', 'o']
#         context['7'] = ['p', 'q', 'r']
#         context['8'] = ['s', 't', 'u']
#         context['9'] = ['v', 'w', 'y', 'z']
#         context['*'] = ['+', ]
#         context['^'] = ['#', ]
#         context['0'] = [' ', ]

def backtracking(string):
    context = dict()
    context['2'] = ['a', 'b', 'c']
    context['3'] = ['d', 'e', 'f']
    context['4'] = ['g', 'h', 'i']
    context['5'] = ['j', 'k', 'l']
    context['6'] = ['m', 'n', 'o']
    context['7'] = ['p', 'q', 'r']
    context['8'] = ['s', 't', 'u']
    context['9'] = ['v', 'w', 'y', 'z']
    context['*'] = ['+', ]
    context['^'] = ['#', ]
    context['0'] = [' ', ]
    for i in string:
        print(context[i])

backtracking("2")
backtracking("2")
