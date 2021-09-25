def main():
    a = input()
    b = input()

    printadoa = False
    printadob = False

    resa = []
    resb = []

    resfinal = []

    if len(a) > len(b):
        for i in range(len(b), len(a)):
            b = "0" + b
    else:
        for i in range(len(a), len(b)):
            a = "0" + a

    for i in range(len(a)):
        if int(a[i]) > int(b[i]):
            resa.append(a[i])
        elif int(b[i]) > int(a[i]):
            resb.append(b[i])
        else:
            resa.append(a[i])
            resb.append(b[i])

    if len(resa) == 0:
        print(-1, end=' ')
        printadoa = True
    if len(resb) == 0:
        print(-1, end=' ')
        printadob = True

    if printadoa:
        print(''.join(resb))
        return
    if printadob:
        print(''.join(resa))
        return

    try:
        if int(''.join(resb)) > int(''.join(resb)):
            resfinal.append(resa)
            resfinal.append(resb)
        else:
            resfinal.append(resb)
            resfinal.append(resa)

        if len(resfinal[0]) == 0:
            print(-1, end=' ')
        else:
            for i in range(len(resfinal[0])):
                print(resfinal[0][i], end='')

        print(end=' ')

        if len(resfinal[1]) == 0:
            print(-1)
        else:
            for i in range(len(resfinal[1])):
                print(resfinal[1][i], end='')
        print()

    except:
        pass


if __name__ == '__main__':
    main()
