while ( another == 'Y' ) 
{ 
printf ( "\nEnter name, age and basic salary: " ) ; 
scanf ( "%s %d %f", e.name, &e.age, &e.bs ) ; 
fprintf ( fp, "%s %d %f\n", e.name, e.age, e.bs ) ; 
printf ( "Add another record (Y/N) " ) ; 
fflush ( stdin ) ; 
another = getche( ) ; 
} 
