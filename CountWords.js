// by myself ................
function wordCount(str) {
  //   let count = 0;
  //   for (var i = 0; i <= str.length; i++) {
  //     if (str[i] === " " || str[i] === ".") {
  //       count++;
  //     }
  //   }
  //     return count;
  //  return (count += 1); // or this if the string is didn't end with .
  ////////////////////////////////////////////////////////////////
  // from search
  //   let stringWords = str.split(" ");
  //   return stringWords.length;
  ////////////////////////////////////////////////////////////////
  // to count the number of characters in the string
  // this with spaces
  //   let chat = str.length;
  //   return chat;
  // this without spaces
  //   let chat = str.split(" ").join("").length;
  //   return chat;
}

str = "hi world ok";
// str =
//   "This handout will help you understand how paragraphs are formed, how to develop stronger paragraphs, and how to completely and clearly express your ideas.";
// str =
//   "Paragraphs are the building blocks of papers. Many students define paragraphs in terms of length: a paragraph is a group of at least five sentences, a paragraph is half a page long, etc. In reality, though, the unity and coherence of ideas among sentences is what constitutes a paragraph. A paragraph is defined as “a group of sentences or a single sentence that forms a unit” (Lunsford and Connors 116). Length and appearance do not determine whether a section in a paper is a paragraph. For instance, in some styles of writing, particularly journalistic styles, a paragraph can be just one sentence long. Ultimately, a paragraph is a sentence or group of sentences that support one main idea. In this handout, we will refer to this as the “controlling idea,” because it controls what happens in the rest of the paragraph.";

console.log(wordCount(str));
