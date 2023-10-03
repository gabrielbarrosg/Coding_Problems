#Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value 
#next to each other and preserving the original order of elements.

def unique_in_order(sequence):
    arr = []
    aux = ""
    for i in sequence:
        if i!=aux:
            aux = i
            arr.append(aux)    
    return arr