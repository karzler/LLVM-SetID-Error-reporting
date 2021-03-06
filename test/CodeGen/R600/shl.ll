; RUN: llc < %s -march=r600 -mcpu=redwood | FileCheck %s

; CHECK: @shl_v4i32
; CHECK: LSHL * T{{[0-9]+\.[XYZW], T[0-9]+\.[XYZW], T[0-9]+\.[XYZW]}}
; CHECK: LSHL * T{{[0-9]+\.[XYZW], T[0-9]+\.[XYZW], T[0-9]+\.[XYZW]}}
; CHECK: LSHL * T{{[0-9]+\.[XYZW], T[0-9]+\.[XYZW], T[0-9]+\.[XYZW]}}
; CHECK: LSHL * T{{[0-9]+\.[XYZW], T[0-9]+\.[XYZW], T[0-9]+\.[XYZW]}}

define void @shl_v4i32(<4 x i32> addrspace(1)* %out, <4 x i32> %a, <4 x i32> %b) {
  %result = shl <4 x i32> %a, %b
  store <4 x i32> %result, <4 x i32> addrspace(1)* %out
  ret void
}

; XXX: Add SI test for i64 shl once i64 stores and i64 function arguments are
; supported.
