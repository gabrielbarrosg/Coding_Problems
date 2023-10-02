#Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then 
#it should replace the missing second character of the final pair with an underscore ('_').

#Examples:
#   * 'abc' =>  ['ab', 'c_']
#   * 'abcdef' => ['ab', 'cd', 'ef']


def solution(s):
    newL = []
    newL2 = []
    x = list(s)

    for i in x: 
        newL.append(i)
    if len(newL)%2 != 0: newL.append('_')
    for j in range(0 , len(newL), 2):
        newL2.append(newL[j] + newL[j+1])
    return newL2
