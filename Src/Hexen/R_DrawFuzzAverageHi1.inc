{$IFNDEF NO_INLINE_LOOPS}
  while count >= 32 do
  begin
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    count := count - 32;
  end;

  while count >= 4 do
  begin
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    {$I R_DrawColumnFuzzHi_Loop1.inc}
    count := count - 4;
  end;
{$ENDIF}

  for i := 0 to count do
  begin
    {$I R_DrawColumnFuzzHi_Loop1.inc}
  end;
