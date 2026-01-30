# Procedural-Horse-Race
Horse Race Lab

integer array of 5 to store horse position

set all horse positions to 0

seed random number generator

repeat until a horse wins:
  each horse 0-4 
  flip a coin random 1 or 0
  if result 1 move horse foward 1
  print horse's lane using dots
  place horse number at current position
  check each horse and if position >= 15 declare winner
  if no horse has won ask user to press enter to go to next turn

end program after winner wins 
