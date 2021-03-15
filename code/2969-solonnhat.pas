Const
	maxM =1000;
Var
	n, m, i, j, x, y :integer;
	A, B :ansistring;
	F :Array[0..1 ,0..maxM] of ansiString;
function Max(Ax, Bx :ansiString) :ansiString;
var T1,T2 :ansistring;
begin
	if (Ax = '') then Exit(Bx);
	if (Bx = '') then Exit(Ax);
	T1:=Ax;
	T2:=Bx;
	while (Length(T1) < Length(T2)) do
		T1:='0'+T1;
	while (Length(T2) < Length(T1)) do
		T2:='0'+T2;
	if (T1>T2) then
		Exit(Ax)
	else
		Exit(Bx);
end;
Begin
	ReadLn(A);
	n:=Length(A);
	ReadLn(B);
	m:=Length(B);
	x:=0;
	y:=1;
	for i:=1 to n do
	begin
		for j:=1 to m do
			if (A[i]=B[j]) then
				F[y,j]:=F[x,j-1]+B[j]
			else
				F[y,j]:=Max(F[y,j-1],F[x,j]);
		x:=1-x; y:=1-y;
	end;
	if length(f[x,m])=0 then
	begin
		writeln(0);
		write('LCS MAX NUMBER is NULL');
		exit;
	end;
	while (F[x,m,1]='0') and (Length(F[x,m])>1) do
		Delete(F[x,m],1,1);
	writeln(length(f[x,m]));
	if length(f[x,m])=0 then
		write('LCS MAX NUMBER is NULL')
	else
		Write('LCS MAX NUMBER is ',F[x,m]);
End.
