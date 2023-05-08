import random
import hangman_art
import hangman_words

guessed_word = random.choice(
    hangman_words.word_list
)  # * taking a random word from the list
# print(guessed_word)
print(hangman_art.logo)
leteer_lst = []  #! empty list which stores the blanks and guessed coreect letters
for i in range(len(guessed_word)):
    leteer_lst.append("_ ")  # ?appending the empty list with blanks
lifes = 6
lide_list = []
print("".join(leteer_lst))  # todo printing the empty list with blanks
while "_ " in leteer_lst:  # * loop will run until the list is not filled completly
    # os.system("cls")
    guess_letter = input("Enter the letter:").lower()  #! gussing the letter in the word
    if guess_letter in leteer_lst:
        print(f"You have already guessed {guess_letter}")
    # ? checking the letter in the word if there then it will replace the letter by '_' in the list
    for i in range(len(guessed_word)):
        pos = guessed_word[i]
        if pos == guess_letter:
            leteer_lst[i] = guess_letter
    # print(leteer_lst)
    # todo printing the list with joining it
    print("".join(leteer_lst))
    # * if the gussed lrtter not in the word then lifes will reduce by 1. we have 6 lifes
    if guess_letter not in guessed_word:
        if guess_letter in lide_list:
            # ? if the guessed letter in wrong again life will not go again.
            print(f"you have already used {guess_letter} and lost a life")
            print(hangman_art.stages[lifes])
        else:
            lide_list.append(guess_letter)
            lifes -= 1
            print(
                f"You gussed letter {guess_letter},that's not in word. You lose a life"
            )
            print(hangman_art.stages[lifes])
            #! no.of lifes becomes 0 then the game will be over
            if lifes == 0:
                print("Game over")
                break
    else:
        print(hangman_art.stages[lifes])
    print("===================================================")
# ? if there is no more blanks in dithe list then it means we have won the game else we lose.
if (
    "_ " not in leteer_lst
):  # ! if the list filled with letters then the game is over and the user wins
    print("You Won")
else:
    print(f"You Loose, the word is {guessed_word}")
