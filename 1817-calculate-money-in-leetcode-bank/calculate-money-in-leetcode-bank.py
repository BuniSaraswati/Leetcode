class Solution:
    def totalMoney(self, n: int) -> int:
        # Calculate the total money for each week
        weeks = n // 7
        total = 0

        # Calculate the total money for complete weeks
        for week in range(weeks):
            total += 28 + week * 7

        # Calculate the total money for the remaining days
        remaining_days = n % 7
        total += (remaining_days * (remaining_days + 1)) // 2 + weeks * remaining_days

        return total

