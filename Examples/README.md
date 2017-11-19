# Examples
All examples use the following placeholder values except where otherwise stated. These value need to be replaced if you wish to use the examples to get data for yourself.

* 2017 Peachtree District (2017pch)
* 2017 Gainsevile, GA Event (2017gagai)
* 2017 Gainseville Match 9 (2017gagai_qm9)
* FRC Team 4112 (frc4112)
## Status Examples
All status functions require `#include "TBAstatus.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1. Outputs current version of TBA android app  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;2. Outputs current version of TBA ios app  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;3. Outputs the year of the current FRC season  

## District Examples
All district functions require `#include "TBAdistrict.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;4. Outputs all the eventKeys of all events in an FRC district  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;5. Outputs all the teamKeys of all teams in a district  

## Event Examples
All event functions require `#include "TBAevent.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;6. Outputs all the teamKeys of all teams at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;7. Outputs outputs the oprs of all the teams at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;8. Outputs outputs the dprs of all the teams at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;9. Outputs outputs the ccwms of all the teams at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10. Outputs the matchKeys of all the matches at an event  

## Team Examples
All team functions require `#include "TBAteam.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11. Outputs a team's districtKey  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;12. Outputs all of a team's eventKeys  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;13. Outputs a team's eventKeys for a specific season  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;14. Outputs the matchKey's a team has at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;15. Outputs the awards won by a team at an event  

## Match Examples
All match functions require `#include "TBAmatch.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;16. Outputs all teams disqualified in a match (uses 2017gagai_qm1)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;17. Outputs if a team was disualified from a specific match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;18. Outputs the amount of autonomous points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;19. Outputs the amount of teleop points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20. Outputs the total amount of points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21. Outputs the number of fouls scored by a team in a match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22. Outputs the number of tech fouls scored by a team in a match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23. Outputs the amount of points an alliance recieved from fouls in a match (uses 2017gagai_qm1 and frc1311)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24. Outputs the winning teams of a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25. Outputs the losing teams of a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26. Outputs if a team won a specific match  