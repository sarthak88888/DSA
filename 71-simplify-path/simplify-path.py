class Solution:
    def simplifyPath(self, path: str) -> str:
        stack = []
        curr_str = ""
        st = path + "/"
        for e in st:
            if e == '/':
                if curr_str == "..":
                    if stack:
                        stack.pop()
                elif curr_str != "" and curr_str != ".":
                    stack.append(curr_str)
                curr_str =  ""
            else:
                curr_str+=e


        return "/" + "/".join(stack)    