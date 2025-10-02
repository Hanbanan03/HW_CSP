# HW 7th strings notes

#What makes something a string? a set of symbols held together by quotation marks
#Why do we have strings? - to represent and manipulate textual data
#How do stupid proofing and sanitization relate to each other?- sanitation cleans the inputs and stupid proofing is building your code so your users cant break it
#What is debugging?- fixing code
#How do you debug the different types of errors? - syntax error - a mistake in your grammer - spaces where they dont belong, forgetting parenthtesis
#logic error run time error- when you do something wrong
#Describe what each of the methods below does:
#find() searching for specific things   print(sentence.find("word"))
#concatenate (add) joining 2 values together 
#upper()makes them all uppercase
#lower()makes them all lowercase
#strip() removing unwanted characters
# Examples
first_name = input("What is your first name:\n")
#.strip( ).lower().upper().capitalize()
last_name=input("what is your last name")

sentence = 'The quick brown fox jumps over the lazy dog.'

print("Welcome to my porgram", first_name, last_name, "!")
