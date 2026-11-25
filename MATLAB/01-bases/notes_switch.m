score=input('enter the score of the student:\n');
switch true 
    case score>=90 && score<=100
        disp('the grade is A')
    case score>=70&&score<90
        disp('the grade is B')
    case (score>=50)&&(score<70)
        disp('the grade is C')
    case score<50
        disp('the grade is D')
    otherwise 
        error('incorrect')
end