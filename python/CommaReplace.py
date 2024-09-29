original_string = "Denise Marie Smith 21 London UK"
new_string=original_string.split()
print('String after splitting with commas:')
print(new_string)
new_string="Denise,Marie,Smith,21,London,UK"
print('String after replacing commas with spaces:')
print(new_string.replace("," , " "))