let raceNumber = Math.floor(Math.random() * 1000);
let early_late_regis = false;
let runner_age = 18;
if (runner_age > 18 && early_late_regis)
{
  raceNumber += 1000;
}
if (runner_age > 18 && early_late_regis)
{
  console.log(`Race number ${raceNumber}, race starts at 9:30 am.`);
}
else if (runner_age > 18 && !early_late_regis)
{
  console.log(`Race number ${raceNumber}, race starts at 11:00am.`);
}
else if (runner_age < 18)
{
  console.log(`Race number ${raceNumber}, race starts at 12:30 pm.`);
}
else
{
  console.log('Go to the registration desk.');
}
