#include<stdio.h>
#include<conio.h>
#include<string.h>

main ()
{
 char c;
 printf("\n\t\tWelcome To Dictionary of Software Engineering ");
 printf("\n\t***********************************************************");
 printf("\n\n\t\t    Please Select Catagory of Term ");
 printf("\n\n\t [1] Software Engineering Fundamental");
 printf("\n\n\t [2] Software Project Management");
 printf("\n\n\t [3] Programming Language");
 printf("\n\n\t [4] Operating System");
 printf("\n\n\t [5] Software Testing");
 printf("\n\n\t [6] Standards & Organization");
 printf("\n\n\t [7] User Manual");
 printf("\n\n\t [0] Credit");
 printf("\n\t***********************************************************");
 printf("\n\n\t Enter your Choice :  ");
 scanf("%c",&c);
 switch(c)
 {
  case '1':
	printf("\nYou chooce:: Software Engineering Fundamental ");
 {
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
    if( strcmp( name, "SDLC") == 0 )
{
        printf("\nSDLC. Acronym for Software Development Lifecycle.");
        printf("\n\nOne of a number of structured approaches to software development, created to");
        printf("\nguide all the processes involved, from an initial feasibility study through     maintenance of the completed software.");
        printf("\n\n****************************************");
        }

        else if( strcmp( name, "CASE") == 0 )
        {
            printf("\nCASE. Acronym for Computer Aided Software Engineering.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RAD") == 0 )
        {
            printf("\nRAD. Acronym for Rapid Application Development. Often applied to tools such as Microsoft Visual Basic, Borland Delphi, Oracle Power Objects.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CSC") == 0 )
        {
            printf("\nCSC. Acronym for Computer Software Component.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CSCI") == 0 )
        {
            printf("\nCSCI. Acronym for Computer Software Configuration Item.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CCB") == 0 )
        {
            printf("\nCCB. Acronym for Configuration Control Board.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CM") == 0 )
        {
            printf("\nCM. Acronym for Configuration Management.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CPC") == 0 )
        {
            printf("\nCPC. Acronym for Computer Program Component.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CDR") == 0 )
        {
            printf("\nCDR. Acronym for Critical Design Review .");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "DFD") == 0 )
        {
            printf("\nDFT. Acronym for Data Flow Diagram ");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ERD") == 0 )
        {
            printf("\nE-R Diagram. Acronym for Entity-Relationship Diagram.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ECP") == 0 )
        {
            printf("\nECP. Acronym for Engineering Change proposaL");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "FCA") == 0)
        {
            printf("\nFCA. Acronym for Functional Configuration Audit.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "FQA") == 0 )
        {
            printf("\nFQR. Acronym for Formal Qualification Review.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "FCA") == 0 )
        {
            printf("\nFCA. Acronym for Functional Configuration Audit.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HDL") == 0 )
        {
            printf("\nHDR. Acronym for Hardware Design Language.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HWCI") == 0 )
        {
            printf("\nHWCI. Acronym for Hardware Configuration Item.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HMI") == 0 )
        {
            printf("\nHMI. Acronym for Human Machine Interface. ");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HIPO") == 0 )
        {
            printf("\nHIPO. Acronym for Hierarchical Input Process Output.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "KOPS") == 0 )
        {
            printf("\nKOPS. Acronym for Kilo Operations Per Second; that is, thousands of operations per second. A measure of computer processing speed.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MTBF") == 0 )
        {
            printf("\nMTBF. Acronym for Mean Time Between Failures.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MTTR") == 0 )
        {
            printf("\nMTTR. Acronym for Mean Time To Repair.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MFLOPS") == 0 )
        {
            printf("\nMFLOPS. Acronym for Millions of Floating Point Operations Per Second. A measure of computer processing speed.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MIPS") == 0 )
        {
            printf("\nMIPS. Acronym for Million Instructions Per Second. A measure of computer processing speed. See also: KOPS; MFLOPS.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MMI") == 0 )
        {
            printf("\nMMI. Acronym for Man & Machine Interface.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "NODE") == 0 )
        {
            printf("\nNODE. In a diagram, a point, circle, or other geometric figure used to represent a state, event, or other item of interest.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PCA") == 0 )
        {
            printf("\nPCA. Acronym for Physical Configuration Audit.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PDR") == 0 )
        {
            printf("\nPDR. Acronym for Preliminary Design Review.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PSW") == 0 )
        {
            printf("\nPSW. Acronym for Program Status Word.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RJE") == 0 )
        {
            printf("\nRJE. Acronym for Remote Job Entry.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SCN") == 0 )
        {
            printf("\nSCN. Acronym for Specification Change Notice.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "V&V") == 0 )
        {
            printf("\nV&V. Acronym for Verification and Validation.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "VDD") == 0 )
        {
            printf("\nVDD. Acronym for Version Description Document.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ASE") == 0 )
        {
            printf("\nAdvanced Software Environment: an object-oriented application support system from Nixdorf.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ASSET") == 0 )
        {
            printf("\nAsset Source for Software Engineering Technology. A programme to promote software reuse by the DoD.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "WISE") == 0 )
        {
            printf("\nWeb-Integrated Software metrics Environment. A WWW based software management and metrics system.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ISV") == 0 )
        {
            printf("\nIndependent software vendor. A company that makes and sells software products that run on one or more computer hardware or operating system platforms.");
            printf("\n\n****************************************");
        }

        else
        {
         printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
         printf("\n\n***************************************************");
        }
}
break;

case '2':
	printf("\nYou chooce:: Software Project Management");
{
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
    if( strcmp( name, "SPMP") == 0 )
{
        printf("\nSPMP. Acronym for Software Project Management Plan.");
        printf("\n\n****************************************");
        }

        else if( strcmp( name, "SRS") == 0 )
        {
            printf("\nSRS. Acronym for Software Requirement Specification.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SDD") == 0 )
        {
            printf("\nSDD. Acronym for software design description. ");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SDP") == 0 )
        {
            printf("\nSDP. Acronym for Software Development Plan.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "STP") == 0 )
        {
            printf("\nSTP. Acronym for Software Test Plan");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Allocation") == 0 )
        {
            printf("\nAllocation is the assignment of available resources in an economic way.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "BPM") == 0 )
        {
            printf("\nBusiness Process Modeling. BPM is the activity of representing processes of an enterprise");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Case Study") == 0 )
        {
            printf("\nCase Study is a research method which involves an in-depth, longitudinal examination of a single instance or event.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CCPM") == 0 )
        {
            printf("\nCritical Chain Project Management. CCPM is a method of planning and managing projects that puts more emphasis on the resources required to execute project tasks.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Dependency") == 0 )
        {
            printf("\nDependency in a project network is a link amongst a project's terminal elements.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "XPM") == 0 )
        {
            printf("\nExtreme Project Management. XPM refers to a method of managing very complex and very uncertain projects.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Deliverable") == 0 )
        {
            printf("\nDeliverable A contractually required work product, produced and delivered to a required state. A deliverable may be a document, hardware, software or other tangible product.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Gantt Chart") == 0 )
        {
            printf("\nA horizontal bar chart frequently used in project management that provides a graphical illustration of a schedule that helps to plan, coordinate, and track specific tasks in a project.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SWOT") == 0 )
        {
            printf("\nStrengths, Weaknesses, Opportunities, Threats commercial product analysis.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Waterfall") == 0 )
        {
            printf("\nA software development method that completes the requirements gathering phase   before the customer knows what they want.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SDM") == 0 )
        {
            printf("\nSoftware Development Method. A work discipline that is chosen by the developers of a computer system or product as a way to ensure successful result.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "IMP") == 0 )
        {
            printf("\nIntegrated Master Plan. IMP is an event-based, top level plan, consisting of a hierarchy of Program Events.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "LOE") == 0 )
        {
            printf("\nLevel of Effort. LOE is qualified as a support type activity which doesn't lend itself to measurement of a discrete accomplishment.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "LSM") == 0 )
        {
            printf("\nLinear Scheduling Method. LSM is a graphical scheduling method focusing on continuous resource utilization in repetitive activities.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MS") == 0 )
        {
            printf("\nManagement Science. MS is the discipline of using mathematical modeling and other analytical methods, to help make better business management decisions.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PMBOOK") == 0 )
        {
            printf("\nProject Management Body of Knowledge. The sum of knowledge within the profession of project management that is standardized by ISO.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "QCD") == 0 )
        {
            printf("\nQuality, Cost, Delivery. QCD is used in lean manufacturing measures a businesses activity and develops Key performance indicators.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Risk") == 0 )
        {
            printf("\nRisk is the precise probability of specific eventualities.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Schedules") == 0 )
        {
            printf("\nSchedules in project management consists of a list of a project's terminal elements with intended start and finish dates.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Scope") == 0 )
        {
            printf("\nScope of a project in project management is the sum total of all of its products and their requirements or features.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Scrum") == 0 )
        {
            printf("\nScrum is an iterative incremental process of software development commonly used with agile software development.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Task") == 0 )
        {
            printf("\nTask is part of a set of actions which accomplish a job, problem or assignment.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Timeline") == 0 )
        {
            printf("\nTimeline is a graphical representation of a chronological sequence of events, also referred to as a chronology. It can also mean a schedule of activities, such as a timetable.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "WBS") == 0 )
        {
            printf("\nWork Breakdown Structure. WBS is a tool that defines a project and groups the project’s discrete work elements in a way that helps organize and define the total work scope of the project.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SQAP") == 0 )
        {
            printf("\nSoftware Quality Assurance Plan.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SCMP") == 0 )
        {
            printf("\nSoftware Configuration Management Plan.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "JRP") == 0 )
        {
            printf("\nJoint Requirements Planning.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "JAD") == 0 )
        {
            printf("\nJoint Application Design.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RAM") == 0 )
        {
            printf("\nResponsibility Assignment Matrix.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SOW") == 0 )
        {
            printf("\nStatement of Work.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SPSG") == 0 )
        {
            printf("\nSoftware Project Survival Guide.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "NPV") == 0 )
        {
            printf("\nNet Present Value.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RIO") == 0 )
        {
            printf("\nReturn on Investment.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PERT") == 0 )
        {
            printf("\nProgram Evaluation and Review Technique.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CPM") == 0 )
        {
            printf("\nCritical Path Method.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "FS") == 0 )
        {
            printf("\nFinish-to-Start.");
            printf("\n\n****************************************");
        }

        else
        {
         printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
         printf("\n\n***************************************************");
        }
}
break;

case '3':
	printf("\nYou chooce:: Programming Language");
{
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
    if( strcmp( name, "Ada") == 0 )
{
        printf("\nA high-level computer language sponsored by the US Department of Defense. It has a multitasking mechanism.");
        printf("\n\n****************************************");
        }

        else if( strcmp( name, "ASCII") == 0 )
        {
            printf("\nThe original common character code for computers using 8 bits.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "BASIC") == 0 )
        {
            printf("\nBASIC. Beginners All-purpose Symbolic Insctruction Code.");
            printf("\n\nA family of languages developed for teaching programming and given away with early IBM PCs.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "C") == 0 )
        {
            printf("\nA language developed in conjunction with the UNIX operating system at AT&T Bell Laboratories by D.Ritchie and now an ANSI standard.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "C++") == 0 )
        {
            printf("\nHibrid child of C with object oriented features and generic fuunctions and classes.  An extension to the C language developed primarily by B.Stroustrup at AT&T Bell Laboratories.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "COBOL") == 0 )
        {
            printf("\nCOmmon Business Oriented Language.");
            printf("\n\n******************************3**********");
        }

        else if( strcmp( name, "FORTRAN") == 0 )
        {
            printf("\nFORmula TRANslation.");
            printf("\n\nThere have been many FORTRANs. The series includes: I, II, IV, 66, 77, and 90 so far. Its author has said that he doesn't know what the programming language used in the next millenium will look like but he's sure it will be called FORTRAN.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HTML") == 0 )
        {
            printf("\nHyper Text Markup Language.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Java") == 0 )
        {
            printf("\nObject oriented language that has a C-like syntax. A language for consumer boxes.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "UNICODE") == 0 )
        {
            printf("\nA new 16 bit International code for characters. Used in Java.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "UML") == 0 )
        {
            printf("\nUnified Modeling Language. Writing classes without the hassle of making them work.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Loop") == 0 )
        {
            printf("\nLoop. A sequence of computer program statements that is executed repeatedly until a given condition is met or while a given con- dition is true.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "(OOP") == 0 )
        {
            printf("\nOOP. Acronym for Object Oriented Programming.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SQL") == 0 )
        {
            printf("\nSQL. Acronym for Structured Query Language.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Algorithm") == 0 )
        {
            printf("\nA finite set of well-defined rules for the solution of a problem in a finite number of steps");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Array") == 0 )
        {
            printf("\nAn n-dimensional ordered set of data items identified by a single name and one or more indices, so that each element of the set is individually addressable. For example, a matrix, table, or vector.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "HLL") == 0 )
        {
            printf("\nHLL. Acronym for High Level Language. ");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Bit") == 0 )
        {
            printf("\nBinary digit. A unit of information introduced by Shannon in the 1940's.");
            printf("\nA bit has one of two values traditionally named 0 and 1. Eight bits make a byte.And four bits a nibble. So 2 nibbles = 1 byte.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Block") == 0 )
        {
            printf("\nA piece of source code that has one or more declarations in it.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Call") == 0 )
        {
            printf("\nA piece of code that transfers control, temporarily, to a subprogram and suspends the original code until the subprogram returns to the following statement etc.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Class") == 0 )
        {
            printf("\nA description of a collection of objects that have similar states and behaviors.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Code") == 0 )
        {
            printf("\nA piece of text that can be understood without a key, hence any program.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Compile") == 0 )
        {
            printf("\nTranslate source code into executable object code.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Compiler") == 0 )
        {
            printf("\nLexar > parser > generator > optimizer > linker.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Data Type") == 0 )
        {
            printf("\nA collection of values together with the operations that use them and produce them, plus the assumptions that can be made about the operations and values.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Exception") == 0 )
        {
            printf("\nA mechanism for handling abnormal situations.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Float") == 0 )
        {
            printf("\nA form of arithmetic that always preserves the same number of digits but allows the decimal point to be placed anywhere among them.");
            printf("\nThis gives unbounded errors, a wider range and a more complex processor.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Function") == 0 )
        {
            printf("\nA subprogram that returns a value but cannot change its parameters or have side effects.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ASDL") == 0 )
        {
            printf("\nAbstract-Type and Scheme-Definition Language.");
            printf("\nASDL is developed as part of Esprit project GRASPIN,  as a basis for generating language-based editors and environments");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CCL") == 0 )
        {
            printf("\nCommon Command Language. A standard for bibliographic information retrieval systems.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CDE") == 0 )
        {
            printf("\nC Development Environment from IDE.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Compression") == 0 )
        {
            printf("\nData files are often compressed to take up less network bandwidth, memory etc.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "DDL") == 0 )
        {
            printf("\nData Definition Language. A language enabling the structure and instances of a database to be defined in a human- and machine-readable form.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ROOM") == 0 )
        {
            printf("\nReal-Time Object-Oriented Modeling. An Object-Oriented analysis and design approach.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "DBA") == 0 )
        {
            printf("\nData Base Administrator.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "DBMS") == 0 )
        {
            printf("\nDatabase Management System. Such systems typically manage large structured sets of persistent data, offering ad hoc query facilities to many users. They are used in business applications.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "AOP") == 0 )
        {
            printf("\nAspect Oriented Programming. A programming technique, plus language features, for separating concerns--as long as the concern happens to be logging.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Byte Code") == 0 )
        {
            printf("\nMachine language for an imaginary machine.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CSS") == 0 )
        {
            printf("\nA typesetting language designed to be abused for layout.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "KISS") == 0 )
        {
            printf("\nKeep It Simple, Stupid. A philosophy that encourages coding only what the dumbest developer understands");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Perl") == 0 )
        {
            printf("\nA utility and scripting language with built-in obfuscation.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PHP") == 0 )
        {
            printf("\nPerl for web pages, but without the discipline or foresight.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "TDD") == 0 )
        {
            printf("\nTest Driven Development. An approach to programming that doubles the coding effort in exchange for proving the inverse of the Halting Problem.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "XAML") == 0 )
        {
            printf("\nXML Application Markup Language. A form definition language that gives you all of the placement and alignment flexibility of nested HTML tables.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "XML") == 0 )
        {
            printf("\nA hierarchical document format that emphasizes syntax over substance.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "XP") == 0 )
        {
            printf("\nXtreeme Programming. A software development method that maximizes head-count.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "API") == 0 )
        {
            printf("\nApplication Programming Interface. A specific method prescribed by a computer operating system or by an application program by which a programmer writing an application program can make requests of the operating system or another application.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "AOP") == 0 )
        {
            printf("\nAspect Oriented Programming. An approach to programming that allows global properties of a program to determine how it is compiled into an executable program.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Hotfix") == 0 )
        {
            printf("\nCode (sometimes called a patch) that fixes a bug in a product.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "KLOC") == 0 )
        {
            printf("\nTthousands of lines of code. A traditional measure of how large a computer program is or how long or how many people it will take to write it, sometimes used as a rough measure of programmer productivity.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Metric") == 0 )
        {
            printf("\nThe measurement of a particular characteristic of a program's performance or efficiency.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Patch") == 0 )
        {
            printf("\nA quick-repair job for the problems in a piece of programming.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Applet") == 0 )
        {
            printf("\nA small application, often downloaded from a remote server and run in a controlled environment. Typically written in a language such as Java for execution by a WWW browser.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Runtime") == 0 )
        {
            printf("\nWhen a program is running.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SDK") == 0 )
        {
            printf("\nSoftware Development Kit. A set of programs used by a computer programmer to write application programs.");
            printf("\n\n****************************************");
        }


        else
        {
        printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
        printf("\n\n***************************************************");
        }
}
break;

case '4':
	printf("\nYou chooce:: Operating System");
{
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
     if( strcmp( name, "PCB") == 0 )
        {
            printf("\nPCB. Acronym for Process Control Block.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ME") == 0 )
        {
            printf("\nME. Acronym for Mutual Exclusion.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "FCFS") == 0 )
        {
            printf("\nFCFS. Acronym for First Come First Served.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SJF") == 0 )
        {
            printf("\nSJF. Acronym for Shortest Job First.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SRTF") == 0 )
        {
            printf("\nSRTF. Acronym for Shortest Reamining Time First.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RR") == 0 )
        {
            printf("\nRR. Acronym for Round Robin.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PS") == 0 )
        {
            printf("\nPS. Acronym for Priority Scheduling.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MLF") == 0 )
        {
            printf("\nMLF. Acronym for Multi-lavel Feedback Queue.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RAG") == 0 )
        {
            printf("\nRAG. Resource Allocation Graph.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CPU") == 0 )
        {
            printf("\nCPU. Acronym for Central Processing Unit, usually applied to that part of a computer which carries out the arithmetic and controls the instruction flow.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "JCL") == 0 )
        {
            printf("\nJCL. Acronym for Job Control Language.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "SDSF") == 0 )
        {
            printf("\nSystem Display and Search Facility.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "MVS") == 0 )
        {
            printf("\nMVS. Acronym for Multiple Virtual Storage.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ESTAE") == 0 )
        {
            printf("\nESTAE. Acronym for Extended Specified Task Abnormal Exit routines.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "LPAR") == 0 )
        {
            printf("\nLPAR. Acronym for Logical Partition.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "DSN") == 0 )
        {
            printf("\nDSN. Acronym for Data Set Names.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "GUI") == 0 )
        {
            printf("\nGUI. Acronym for Graphical User Interface.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ESDS") == 0 )
        {
            printf("\nESDS. Acronym for Entry Sequenced Datasets.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "KSDS") == 0 )
        {
            printf("\nKSDS. Acronym for Key Sequenced DataSets.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "PDS") == 0 )
        {
            printf("\nPDS. Acronym for Partitioned DataSets.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "GDG") == 0 )
        {
            printf("\n.GDG. Acronym for Generation Data Groups.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "TSO") == 0 )
        {
            printf("\nTSO. Acronym for Time Sharing Option.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "UNIX") == 0 )
        {
            printf("\nUNIX. Acronym for UNiplexed Information Computing System.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "VSAM") == 0 )
        {
            printf("\nVSAM. Acronym for Virtual Storage Access Method.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ISAM") == 0 )
        {
            printf("\nISAM. Acronym for Indexed Sequential Access Method.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Cache") == 0 )
        {
            printf("\nA small fast memory holding recently-accessed data, designed to speed up further access.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CAD") == 0 )
        {
            printf("\nComputer Aided Design: usually applied to that part of CAE which has to do with the drawing or physical layout steps of engineering design.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Windows") == 0 )
        {
            printf("\nA window system and user interface software from Microsoft for MS-DOS.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "RAM") == 0 )
        {
            printf("\nRandom Access Memory.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ROM") == 0 )
        {
            printf("\nRead Only Memory.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Apple") == 0 )
        {
            printf("\nApple Computer Inc, manufacturers of the Macintosh range of Personal Computers.");
            printf("\n\n****************************************");
        }

        else
        {
        printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
        printf("\n\n***************************************************");
        }
}
break;

case '5':
	printf("\nYou chooce:: Software Testing");
{
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
    if( strcmp( name, "SQA") == 0 )
{
        printf("\nSQA. Acronym for Software Qualiyy Assurance.");
        printf("\n\n****************************************");
        }

        else if( strcmp( name, "CMMI") == 0 )
        {
            printf("\nCMMI. Acronym for Capability Maturity Model Integration.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "TQM") == 0 )
        {
            printf("\nTQM. Acronym for Total Quality Management.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "QA") == 0 )
        {
            printf("\nQA. Acronym for Quality Assurance.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "QC") == 0 )
        {
            printf("\nQC. Acronym for Quality Control.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CMM") == 0 )
        {
            printf("\nCapability Maturity Model. A methodology used to develop and refine an organization's software development process.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "ASQ") == 0 )
        {
            printf("\nAutomated Software Quality. The use of software tools, such as automated testing tools, to improve software quality.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CAQ") == 0 )
        {
            printf("\nComputer Aided Quality.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CAST") == 0 )
        {
            printf("\nComputer Aided Software Testing.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CATE") == 0 )
        {
            printf("\nComputer Aided Test Engineering: CASE methods applied to electronics testing and linked to CAE.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "CAE") == 0 )
        {
            printf("\nComputer Aided Engineering: a technique for using computers to help with all phases of engineering design work.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Bug") == 0 )
        {
            printf("\nA coding error in a computer program.");
            printf("\n\n****************************************");
        }

        else if( strcmp( name, "Debugging") == 0 )
        {
            printf("\nThe process of locating and fixing or bypassing bugs (errors) in computer program code or the engineering of a hardware device.");
            printf("\n\n****************************************");
        }

        else
        {
        printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
        printf("\n\n***************************************************");
        }
}
break;

case '6':
	printf("\nYou chooce:: Standards & Organization");
{
  char name[50];
  printf("\n\nEnter Word To Search:\n");

    scanf("%s", &name);
    if( strcmp( name, "ISO") == 0 )
        {
            printf("\nISO. Acronym for International Organization for Standardization.");
            printf("\n\nISO is the world’s largest standards organization.Its membership is composed of the national standards institutes of 157 countries.Since its formation in 1947, it has published more than 17,000 international standards.");
            printf("\n\n****************************************");
        }
    else if( strcmp( name, "IEEE") == 0 )
    {
        printf("\nIEEE. Acronym for The Institute of Electrical and Electronics Ehgineers.");
        printf("\n\nA non-profit organization, IEEE is a worldwide professional association for the advancement of technology areas like aerospace systems, computers and telecommunications, biomedical engineering, electric and electronics among others.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "ISTQB") == 0 )
    {
        printf("\nISTQB. Acronym for International Software Testing Qualifications Board.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "ANSI") == 0 )
    {
        printf("\nANSI. Acronym for American National Standards Institute.");
        printf("\n\nThe Institute oversees the creation, promulgation and use of thousands of norms and guidelines that directly impact businesses in nearly every sector.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "OSF") == 0 )
    {
        printf("\nOSF. Acronym for Open Software Foundation.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "ASQC") == 0 )
    {
        printf("\nASQC. American Society for Quality Control.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "IBM") == 0 )
    {
        printf("\nIBM. Acronym for International Business Machines.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "ASCII") == 0 )
    {
        printf("\nASCII. Acronym for American Standard Code for Information Interchange.");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "ACM") == 0 )
    {
        printf("\nAssociation for Computing Machinery. The ACM founded in 1947");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "CSGSA") == 0 )
    {
        printf("\nComputer Science Graduate Student Association");
        printf("\n\n****************************************");
    }

    else if( strcmp( name, "BASIS") == 0 )
    {
        printf("\nBangladesh Association of Software and Information Services.");
        printf("\nBASIS is the national trade body for Software & IT Enabled Service industry of  Bangladesh. Established in 1997, the association has been working with a vision of developing vibrant software & IT service industry in the country.started its journey with only 17 charter members. Today the membership stands at more than  450.");
        printf("\n\n****************************************");
    }

    else
    {
        printf ("\a\nSorry.. Word is Not Found.. Please Search Again");
        printf("\n\n***************************************************");
    }
}
break;

case '7':
    printf("\nUser Manual:");
    printf("\n\nDictionary of Software Engineering v1.0:");
    printf("\n****************************************");
    printf("\n\nThis is a full featured program that can help to find out technical");
    printf("\nand professional terms, phrases, standards and abbreviations related");
    printf("\nto Software Engineering.");
    printf("\n\nNote: Abbreviation terms must be in upper case.");
    printf("\nAnd other terms first letters must be in upper case.");
    printf("\n\n********************************************************");
break;

case '0':
    printf("\nCredit:");
    printf("\n\nDeveloped By: Taukir & Samiul.");
    printf("\n\n\nContact Info:");
    printf("\n\nMd. Taukir Hasan");
    printf("\nEmail: taukir4u@gmail.com");
    printf("\n\nMd. Samiul Hasan Khondaker");
    printf("\nEmail: samiul.siam@gmail.com");
    printf("\n\nDepartment of Software Engineering.");
    printf("\nDaffodil International University.");
    printf("\n\n****************************************");
break;

default :
	printf ( "\nWrong Choice." );
	printf ( "\n\nPlease Choose from above." );
	printf("\n\n****************************************");
}
}
