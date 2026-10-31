import pandas as pd

def second_highest_salary(employee: pd.DataFrame) -> pd.DataFrame:
    maxsalary = employee['salary'].max()
    max1 =  employee[employee['salary']<maxsalary]
    max1 = max1['salary'].max()
    return pd.DataFrame({'SecondHighestSalary' : [max1]})