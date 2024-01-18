program Math;

Uses
  SysUtils;

type
  Math = class
  public
    a, b: Double;
  public
    constructor Create(number1, number2: Double);
    function Add: Double;
    function Subtract: Double;
    function Multiply: Double;
    function Divide: Double;
  end.

constructor Math.Create(number1, number2: Double);
begin
  a := number1;
  b := number2;
end;

function Math.Add: Double;
begin
  Result := a + b;
end;

function Math.Subtract: Double;
begin
  Result := a - b;
end;

function Math.Multiply: Double;
begin
  Result := a * b;
end;

function Math.Divide: Double;
begin
  if b <> 0 then
    Result := a / b
  else
  begin
    Writeln('Deleniye na 0!');
    Result := 0;
  end;
end;

var
  math: Math;

begin
  math := Math.Create(10.0, 5.0);

  Writeln('Summa: ', math.Add);
  Writeln('Raznost: ', math.Subtract);
  Writeln('Proizvedeniye: ', math.Multiply);
  Writeln('Deleniye: ', math.Divide);

  Readln;
end;
procedure TestMath;
var
  math1, math2, math3, math4, math5: Math;
begin

  math1 := Math.Create(10.0, 5.0);
  Assert(math1.Add = 15.0);

  math2 := Math.Create(10.0, 5.0);
  Assert(math2.Subtract = 5.0);

  math3 := Math.Create(10.0, 5.0);
  Assert(math3.Multiply = 50.0);

  math4 := Math.Create(10.0, 5.0);
  Assert(math4.Divide = 2.0);

  math5 := Math.Create(10.0, 0.0);
  Assert(math5.Divide = 0.0);
end;

begin
  TestMath;
  WriteLn('Vse testi provedeni!');
end.