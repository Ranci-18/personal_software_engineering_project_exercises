function capitalize(s){
  let str1 = '';
  let str2 = '';
  for (let i = 0; i < s.length; i++)
    {
      const char = s[i];
      if (char.match(/[a-zA-Z]/))
        str1 += i % 2 === 0 ? char.toUpperCase(): char.toLowerCase();
        str2 += i % 2 === 1 ? char.toUpperCase(): char.toLowerCase();
      /*else
        str1 += char;
        str2 += char;*/
    }
  return [str1, str2];
};
