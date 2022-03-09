import pyfiglet

print("Welcome to...")

#print figlet text
result = pyfiglet.figlet_format("ADVENTURE")
print(result)
print("=== Version 0.0.1 - Writen by Isaiah Angnakak ===")

print("")
print("Please Pick your Player Class:")
print("Goblin - 1")
print("Miner - 2")
print("Wizard - 3")
print("Gloobo - 4")
print("")
selectedClass = input("Please Write a number from 1 -4 ")