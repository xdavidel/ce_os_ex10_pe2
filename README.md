# 2PE Exercise
כתבו DLL בשם "hello.dll" ב- Visual Studio , עם הדרישות הבאות:
1 . תהיה פונקציה בשם hello , שהיא exported ותפקידה להקפיץ MessageBox עם
הכיתוב "Hello World" .
2 . תהיה פונקציה רגילה )לא exported ( בשם world , שתפקידה להקפיץ MessageBox
עם הכיתוב "Just a function" .
3 . כל פעם שה- DLL נטען, הוא אוטומטי יקרא לשתי הפונקציות האלו.
כעת צרו קובץ EXE בשם s.exe )עם Visual Studio ( שטוען את ה- DLL בצורה סטטית וקורא
לפונקציה hello .
צרו עוד קובץ EXE בשם d.exe )עם Visual Studio ( שטוען את ה- DLL בצורה דינמית
( LoadLibrary ו- GetProcAddress ( וקורא לפונקציה hello .
כאשר מפעילים את קובץ ה- EXE שיצרתם, צריכים להופיע שלושה MessageBox אחד אחרי
השני שניים יפעלו עם טעינת ה – - DLL , ועוד MessageBox עם הכיתוב "Hello world"
שנקרא ע"י ה- EXE שלכם דרך הפונקציה hello .
ניתן להיעזר בדף:
https://www.tutorialspoint.com/dll/dll_writing.htm
)או בכל חומר זמין אחר(
עליכם להגיש:
1 . Hello.dll , s.exe ו- d.exe .
2 . את קוד המקור של כל הפרויקטים. אין צורך להגיש את כל הפרויקט שנוצר ע"י VS ,
אלא רק את קבצי הסורס הרלוונטיים.