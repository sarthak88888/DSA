class Solution:
    from collections import deque 
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        queue  = collections.deque(students)
        sandwiches =collections.deque(sandwiches)
        while queue:
            if sandwiches[0] not in queue:
                return len(queue)
            else:
                student = queue.popleft()
                if student == sandwiches[0]:
                    sandwiches.popleft()
                else:
                    queue.append(student)
        return len(queue)