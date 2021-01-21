Select DISTINCT CUSTOMER.ID, CUSTOMER.NAME from CUSTOMER order by NAME desc, ID asc;

Select ID, NAME, MARKS, 
GRADE=Case when MARKS>90 then 'A+'
		when MARKS>70 and MARKS <91 then 'A'
    when MARKS>50 and MARKS <71 then 'B'
    when MARKS>=40 and MARKS <51 then 'C'
    when MARKS<40 then 'Fail'
End as GRADE
From 
students
