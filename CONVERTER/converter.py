# Redefine necessary variables and execute the conversion and saving process in a single cell.

# Define the mapping of characters to musical notes
note_mapping = {
    '1': "NOTE_C2", '2': "NOTE_D2", '3': "NOTE_E2", '4': "NOTE_F2", '5': "NOTE_G2",
    '6': "NOTE_A2", '7': "NOTE_B2", '8': "NOTE_C3", '9': "NOTE_D3", '0': "NOTE_E3",
    'q': "NOTE_F3", 'w': "NOTE_G3", 'e': "NOTE_A3", 'r': "NOTE_B3", 't': "NOTE_C4",
    'y': "NOTE_D4", 'u': "NOTE_E4", 'i': "NOTE_F4", 'o': "NOTE_G4", 'p': "NOTE_A4",
    'a': "NOTE_B4", 's': "NOTE_C5", 'd': "NOTE_D5", 'f': "NOTE_E5", 'g': "NOTE_F5",
    'h': "NOTE_G5", 'j': "NOTE_A5", 'k': "NOTE_B5", 'l': "NOTE_C6", 'z': "NOTE_D6",
    'x': "NOTE_E6", 'c': "NOTE_F6", 'v': "NOTE_G6", 'b': "NOTE_A6", 'n': "NOTE_B6",
    'm': "NOTE_C7", '$': "NOTE_Fs2", '%': "NOTE_Gs2", '^': "NOTE_As2", '*': "NOTE_Cs3",
    '(': "NOTE_Ds3", 'Q': "NOTE_Fs3", 'W': "NOTE_Gs3", 'E': "NOTE_As3", 'T': "NOTE_Cs4",
    'Y': "NOTE_Ds4", 'I': "NOTE_Fs4", 'O': "NOTE_Gs4", 'P': "NOTE_As4", 'S': "NOTE_Cs5",
    'D': "NOTE_Ds5", 'G': "NOTE_Fs5", 'H': "NOTE_Gs5", 'J': "NOTE_As5", 'L': "NOTE_Cs6",
    'Z': "NOTE_Ds6", 'C': "NOTE_Fs6", 'V': "NOTE_Gs6", 'B': "NOTE_As6"
}

# Input string
input_string = """
t t T T T T T T
t t T T T T T T
D D D D D S a O O D S a O O I
S S D a P P O O O
D S a O O D S a O O I
S S D a P P
W W W T Y Y T Y
r T T r T
r T T r T T r T r T Y T r W
T Y Y T Y
r T T r T
r T T r T T r T r T Y T r W
Y Y T T Y O Y T
E W E W E W
T r E W
Y Y T T Y O Y T
E W E W E W
T r E W
T Y Y T Y W
r T T r T
r T T r T W T r T r T Y T r W
T Y Y T Y W
r T T r T
T Y Y T Y W
T r T Y T r W
Y Y T T Y O Y T
E W E W E W
T r E W
O O O D S a O O D S a O O I
S S D a P P O O O
D S a O O D S S O O I
S S D a P O O O O O
t t T T T T T T
t t T T T T T T
"""

# Conversion function for multiline input
def convert_to_notes_multiline(input_string):
    lines = input_string.strip().split("\n")
    converted_lines = []
    for line in lines:
        input_chars = list(line.replace(" ", ""))  # Remove spaces for direct mapping
        output_notes = [note_mapping[char] for char in input_chars if char in note_mapping]
        converted_lines.append(", ".join(output_notes))
    
    return "\n".join(converted_lines)

# Convert the input string to musical notes again
converted_notes_multiline = convert_to_notes_multiline(input_string)

# Save the converted notes to a text file correctly
file_path = './converted_notes.txt'
with open(file_path, 'w') as file:
    file.write(converted_notes_multiline)

file_path
