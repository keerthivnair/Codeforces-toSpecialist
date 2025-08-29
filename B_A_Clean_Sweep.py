t = int(input())
for _ in range(t):
    n = int(input())
    nums = list(map(int, input().split()))

    nums.sort(reverse=True)
    alice, bob = 0, 0

    for i in range(n):
        num = nums[i]
        if i % 2 == 0:
            
            if num % 2 == 0:
                alice += num
        else:
           
            if num % 2 == 1:
                bob += num

    if alice > bob:
        print("Alice")
    elif bob > alice:
        print("Bob")
    else:
        print("Tie")
