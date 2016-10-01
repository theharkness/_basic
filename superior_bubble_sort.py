shit_list = [1,3,4,7,2,5]
dope_list = [1,2,3,4,5]
swag_list = [5,4,3,2,1]
rude_list = [10,4,-6,2,15,-2]
dank_list = ["b","i","n","g","o"]
input_list = []


def swap_six(a):
    while (a[0] > a[1]) or (a[1] > a[2]) or (a[2] > a[3]) or (a[3] > a[4]) or (a[4] > a[5]):
        if a[0] > a[1]:
            a.append(a.pop(0))
        if a[1] > a[2]:
            a.append(a.pop(1))
        if a[2] > a[3]:
            a.append(a.pop(2))
        if a[3] > a[4]:
            a.append(a.pop(3))
        if a[4] > a[5]:
            a.append(a.pop(4))
            print "we're getting closer"


    if (a[0] <= a[1]) and (a[1] <= a[2]) and (a[2] <= a[3]) and (a[4] <= a[5]):
        print a
        print "This one is finished"


def swap_five(a):
    while (a[0] > a[1]) or (a[1] > a[2]) or (a[2] > a[3]) or (a[3] > a[4]):
        if a[0] > a[1]:
            a.append(a.pop(0))
        if a[1] > a[2]:
            a.append(a.pop(1))
        if a[2] > a[3]:
            a.append(a.pop(2))
        if a[3] > a[4]:
            a.append(a.pop(3))

    if (a[0] <= a[1]) and (a[1] <= a[2]) and (a[2] <= a[3]):
        print a
        print "This one is finished"

def bonus_one():
    print "all right sucker. it's time for you to give me some numbers"
    one = int(raw_input("GIMME YO FIRST DIGIT, GIRL     "))
    two = int(raw_input("GIMME YO SECOND DIGIT, GIRL    "))
    three = int(raw_input("GIMME YO THIRD DIGIT, GIRL   "))
    four = int(raw_input("GIMME YO FOURTH DIGIT, GIRL   "))
    five = int(raw_input("GIMME YO FIFTH DIGIT, GIRL    "))
    six = int(raw_input("GIMME YO SIXTH DIGIT, GIRL     "))

    input_list.append(one)
    input_list.append(two)
    input_list.append(three)
    input_list.append(four)
    input_list.append(five)
    input_list.append(six)


bonus_one()
print "this is the first one"
swap_six(shit_list)
print "This is the second one"
swap_five(dope_list)

print "this is the third one"
swap_six(rude_list)
print "This is the fourth one"
swap_five(dank_list)
print "This is the fifth one"
swap_six(input_list)
print "This is the sixth one"
swap_five(swag_list)
