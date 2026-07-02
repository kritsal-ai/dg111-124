BEGIN
INPUT score

 IF score >= 80 THEN

  grade = "A"

 ELSE IF score >= 70 THEN

  grade = "B"

 ELSE IF score >= 60 THEN

  grade = "C"

 ELSE IF score >= 50 THEN

  grade = "D"

 ELSE

  grade = "F"

 END IF

 OUTPUT grade

END

```

```




BEGIN

INPUT a,b

 IF a>b THEN

  OUTPUT a

ELSE

  OUTPUT b

 END IF

END

```

```


BEGIN

 INPUT N

 SET i = 1

 WHILE i <= N DO

  OUTPUT i

  SET i = i + 1

 END WHITE

END
