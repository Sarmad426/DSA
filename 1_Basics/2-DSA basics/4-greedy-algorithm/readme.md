# Greedy Algorithms in Brief

## Overview

An algorithm aims to find an optimal solution for a given problem. Greedy algorithms make decisions based on the current solution domain, choosing the closest solution that appears optimal. They seek localized optimum solutions, which may not always result in globally optimized solutions.

## Counting Coins Example

**Problem**: Counting a desired value using the fewest coins, where the greedy approach selects the largest possible coin.

- For coins of €1, €2, €5, and €10, to count €18:
  1. Select one €10 coin (remaining: €8)
  2. Choose one €5 coin (remaining: €3)
  3. Opt for one €2 coin (remaining: €1)
  4. Finally, select one €1 coin to solve the problem.

Seems efficient, but it may not always be optimal.

## Pitfalls

The greedy approach excels in some cases but may fail to provide the globally optimal solution. For example, in a currency system with coins of €1, €7, and €10:

- Counting €18 optimally: 2 coins (€7 + €7 + €4)
- Greedy approach: 6 coins (€10 + €1 + €1 + €1 + €1 + €1)

Greedy algorithms prioritize immediate optimization and may not consistently achieve global optimization.
