function filter_list(l) {
  // Return a new array with the strings filtered out
  let array = [];
  for (let i = 0; i < l.length; i++)
   {
    if (typeof l[i] === 'number' && !isNaN(l[i]) && l[i] >= 0)
      {
      array.push(l[i]);
      }
   }
  return array;
}

