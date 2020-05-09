import math
import turtle

def fx(x):
    return math.sqrt(2 * abs(x) - x ** 2)


def gx(x):
    return -2.14 * math.sqrt(math.sqrt(2) - math.sqrt(abs(x)))

up_part_point = []
down_part_point = []
for x in range(-20, 21):
    x /= 10
    y1 = fx(x)
    y2 = gx(x)
    up_part_point.append((100 * x, 100 * y1))
    down_part_point.append((100 * x, 100 * y2))


turtle.penup()
turtle.goto(*up_part_point[0])
turtle.pendown()
for point in up_part_point:
    turtle.goto(*point)

turtle.penup()
turtle.goto(*down_part_point[0])
turtle.pendown()
for point in down_part_point:
    turtle.goto(*point)


turtle.done()