#include <stdio.h>
#include <conio.h>

main()
{
	int mark;
	char grade  ;

	clrscr();

	printf("ENTER YOUR MARK : ");
	scanf("%d",&mark);
	(mark>=91 && mark<=100)
		?grade='A'
			:(mark>=81 && mark<=90)
			?grade='B'
				:(mark>=71 && mark<=80)
				?grade='C'
					:(mark>=61 && mark<=70)
					?grade='D'
						:(mark>=51 && mark<=60)
						?grade='E'
							:(grade='F');
	switch(grade)
	{
		case 'A':
		printf(" A :Excellent work...");
		break;
		case 'B':
		printf(" B :WELL DONE...");
		break;
		case 'C':
		printf("C :GOOD JOD...");
		break;
		case 'D':
		printf(" D :YOU PASSED...");
		break;
		case 'E':
		printf(" E :GOOD ! BUT YOU COULD GOOD BETTER...");
		break;
		case 'F':
		printf("F :sorry, you are failed...");
		break;
	}
	 if(grade>='A' && grade<='E')
	 {
		printf("\n\n\YOU ARE THE NEKT LEVEL PERFOMUNS");
	 }
	 else if(grade=='F')
	 {
		printf("\n\nBETTER LUVK NEXT TIME");
	 }
	 else
	 {
		printf("input is invalid");
	 }
	getch();
}

















