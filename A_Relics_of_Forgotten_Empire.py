def who_wins(nums):
    n = len(nums)
    nums.sort(reverse=True)  # sort descending

    # dp[i][turn] = (alice_score, bob_score)
    dp = [[(0, 0) for _ in range(2)] for _ in range(n + 1)]

    for i in range(n - 1, -1, -1):
        for turn in range(2):
            num = nums[i]

            # Option 1: current player picks the number
            if turn == 0:  # Alice's turn
                if num % 2 == 0:
                    pick = (dp[i + 1][1][0] + num, dp[i + 1][1][1])  # Alice gets points
                else:
                    pick = (dp[i + 1][1][0], dp[i + 1][1][1])  # Just block Bob

            else:  # Bob's turn
                if num % 2 == 1:
                    pick = (dp[i + 1][0][0], dp[i + 1][0][1] + num)  # Bob gets points
                else:
                    pick = (dp[i + 1][0][0], dp[i + 1][0][1])  # Just block Alice

            # Option 2: skip the number
            skip = dp[i + 1][1 - turn]

            # Choose the better option for current player
            if turn == 0:
                # Alice maximizes her score
                if pick[0] > skip[0]:
                    dp[i][turn] = pick
                elif pick[0] < skip[0]:
                    dp[i][turn] = skip
                else:
                    # Tie in Alice score → prefer better Bob score
                    dp[i][turn] = pick if pick[1] <= skip[1] else skip
            else:
                # Bob maximizes his score
                if pick[1] > skip[1]:
                    dp[i][turn] = pick
                elif pick[1] < skip[1]:
                    dp[i][turn] = skip
                else:
                    # Tie in Bob score → prefer better Alice score
                    dp[i][turn] = pick if pick[0] <= skip[0] else skip

    alice_score, bob_score = dp[0][0]

    if alice_score > bob_score:
        return "Alice"
    elif alice_score < bob_score:
        return "Bob"
    else:
        return "Tie"


