# Examples
All examples use the following placeholder values except where otherwise stated. These value need to be replaced if you wish to use the examples to get data for yourself.

* 2017 Peachtree District (2017pch)
* 2017 Gainsevile, GA Event (2017gagai)
* 2017 Gainseville Match 9 (2017gagai_qm9)
* FRC Team 4112 (frc4112)

## Example 28
Example 28 does not fall into any of the following categories. Example 28 is a comprehensive example of what can be accomplished with this project in under 100 lines of code. Example 28 writes all of the Team Numbers, Average Auto Points Values, Average Teleop point Values, Average Total Point Values, OPR, DPR, and CCWM of every team in attendance at an event based off of the qualifier matches(the matches useful for scouting) to the standard output stream in csv(comma seperated value) format. The standard output stream could easily be copied to a text file(the data could also be written to text files directly but that is beyond the scope of this example). A text file containing text in csv format can be read by Microsoft Excel, Google Sheets, and Tableau. All of these software options provide a better way of viewing and understanding match data than just viewing raw data. Facilitating the easy creation of applications like Example 27 are the main purpose of this entire project. To view data from your own events just change the variable `eventkey` to your own event key.**Disclaimer this example does not take into account that all qualification matches may not have concluded before it runs. This example may not work or produce correct data if all qualification matches are not completed and their data published online by The Blue Alliance. This example also makes extensive use of C++ standard library functions and requires a basic understanding of C++.**

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
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;10. Outputs the match Keys of all the matches at an event  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;11. Outputs the qualifier match Keys of all the matches at an event

## Team Examples
All team functions require `#include "TBAteam.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;12. Outputs a team's districtKey  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;13. Outputs all of a team's eventKeys  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;14. Outputs a team's eventKeys for a specific season  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;15. Outputs the matchKey's a team has at an event 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;16. Outputs the qualifier match Keys of all the matches at an event 
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;17. Outputs the awards won by a team at an event  

## Match Examples
All match functions require `#include "TBAmatch.hpp"`

&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;18. Outputs all teams disqualified in a match (uses 2017gagai_qm1)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;19. Outputs if a team was disualified from a specific match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;20. Outputs the amount of autonomous points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;21. Outputs the amount of teleop points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;22. Outputs the total amount of points scored by an alliance in a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;23. Outputs the number of fouls scored by a team in a match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;24. Outputs the number of tech fouls scored by a team in a match (uses 2017gagai_qm1 and frc5734)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;25. Outputs the amount of points an alliance recieved from fouls in a match (uses 2017gagai_qm1 and frc1311)  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;26. Outputs the winning teams of a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;27. Outputs the losing teams of a match  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;28. Outputs if a team won a specific match  