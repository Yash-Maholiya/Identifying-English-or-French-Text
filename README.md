# Identifying-English-or-French-Text
Natural Language Processing (NLP) is the field of study that enables machines to recognize and process human languages. As an initial experiment in NLP, you want to create a simple program that can distinguish between English and French text.<br>
After analyzing common characteristics of both languages, you have determined a reasonable method to differentiate them:<br>
●    English text tends to have more occurrences of the letters 't' and 'T'.<br>
●    French text tends to have more occurrences of the letters 's' and 'S'.<br>
Your task is to analyze the occurrences of these letters in a given body of text and classify the language based on the following rules:<br>
1.   If the number of 't' and 'T' characters is greater than the number of 's' and 'S' characters, the text is probably English.<br>
2.   Otherwise (if 's' and 'S' are equal to or greater than 't' and 'T'), the text is probably French.<br><br>

Input Specification<br>
●   The first line of input contains an integer N (1 ≤ N < 10,000), representing the number of lines in the text.<br>
●   The following N lines contain the text, where:<br>
○    Each line has at least one character.<br>
○    Each line contains no more than 100 characters.<br><br>

Output Specification<br>
●    Print a single line:<br>
○    "English" if the text is more likely to be in English.<br>
○    "French" if the text is more likely to be in French.<br>
