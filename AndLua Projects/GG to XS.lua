function split(szFullString, szSeparator) local nFindStartIndex = 1 local nSplitIndex = 1 local nSplitArray = {} while true do local nFindLastIndex = string.find(szFullString, szSeparator, nFindStartIndex) if not nFindLastIndex then nSplitArray[nSplitIndex] = string.sub(szFullString, nFindStartIndex, string.len(szFullString)) break end nSplitArray[nSplitIndex] = string.sub(szFullString, nFindStartIndex, nFindLastIndex - 1) nFindStartIndex = nFindLastIndex + string.len(szSeparator) nSplitIndex = nSplitIndex + 1 end return nSplitArray end function xgxc(szpy, qmxg) for x = 1, #(qmxg) do xgpy = szpy + qmxg[x]["offset"] xglx = qmxg[x]["type"] xgsz = qmxg[x]["value"] gg.setValues({[1] = {address = xgpy, flags = xglx, value = xgsz}}) xgsl = xgsl + 1 end end function xqmnb(qmnb) gg.clearResults() gg.setRanges(qmnb[1]["memory"]) gg.searchNumber(qmnb[3]["value"], qmnb[3]["type"]) if gg.getResultCount() == 0 then gg.toast(qmnb[2]["name"] .. "开启失败") else gg.refineNumber(qmnb[3]["value"], qmnb[3]["type"]) gg.refineNumber(qmnb[3]["value"], qmnb[3]["type"]) gg.refineNumber(qmnb[3]["value"], qmnb[3]["type"]) if gg.getResultCount() == 0 then gg.toast(qmnb[2]["name"] .. "开启失败") else sl = gg.getResults(999999) sz = gg.getResultCount() xgsl = 0 if sz > 999999 then sz = 999999 end for i = 1, sz do pdsz = true for v = 4, #(qmnb) do if pdsz == true then pysz = {} pysz[1] = {} pysz[1].address = sl[i].address + qmnb[v]["offset"] pysz[1].flags = qmnb[v]["type"] szpy = gg.getValues(pysz) pdpd = qmnb[v]["lv"] .. ";" .. szpy[1].value szpd = split(pdpd, ";") tzszpd = szpd[1] pyszpd = szpd[2] if tzszpd == pyszpd then pdjg = true pdsz = true else pdjg = false pdsz = false end end end if pdjg == true then szpy = sl[i].address xgxc(szpy, qmxg) xgjg = true end end if xgjg == true then gg.toast(qmnb[2]["name"] .. "开启成功,共修改" .. xgsl .. "条数据") else gg.toast(qmnb[2]["name"] .. "开启失败") end end end end

function Main()
  SN = gg.multiChoice({
 "range attack",
"Limb Luffy",
"Full-screen self-scan",
"AKM no",
"M4, no",
"Exit the script"
}, No,"welcome")
  if SN == nil then
  else
  if SN[1] == true then
    a()
  end
 if SN[2]==true then
 b()
 end
 if SN[3]==true then
 c()
end
if SN[4]==true then
 d()
end
if SN[5]==true then
 e()
end
if SN[6]==true then
f()
end
  if SN[7] == true then
   Exit()
  end
end
  XGCK = -1
end
















function a()
qmnb = {
{["memory"] = gg.REGION_ANONYMOUS},
{["name"] = "范围"},
{["value"] = 9.20161819458, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 0, ["offset"] = 12, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 0, ["offset"] = 16, ["type"] = gg.TYPE_FLOAT},
}
qmxg = {
{["value"] = 245, ["offset"] = 24, ["type"] = gg.TYPE_FLOAT},
{["value"] = 245, ["offset"] = 28, ["type"] = gg.TYPE_FLOAT},
{["value"] = 245, ["offset"] = 32, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)
end


function b()
qmnb = {
{["memory"] = gg.REGION_ANONYMOUS},
{["name"] = "下蹲路飞"},
{["value"] =0.00012300909, ["type"] = gg.TYPE_FLOAT},
{["lv"] =-0.90990304947, ["offset"] = 4, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 0.4148209691, ["offset"] = 8, ["type"] = gg.TYPE_FLOAT},
 }
qmxg = {
{["value"] =330, ["offset"] = 12, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)

qmnb = {
{["memory"] = gg.REGION_ANONYMOUS},
{["name"] = "趴下路飞"},
{["value"] =25.46948814392, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 2.9802322e-8, ["offset"] = 12, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 18.38614463806, ["offset"] = 24, ["type"] = gg.TYPE_FLOAT},
 }
qmxg = {
{["value"] =240, ["offset"] = 28, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)

end


function c()
qmnb = {
{["memory"] = gg.REGION_C_DATA},
{["name"] = "全屏自瞄"},
{["value"] =1478828288.0, ["type"] = gg.TYPE_FLOAT},
{["lv"] =180, ["offset"] = -88, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 360, ["offset"] = -96, ["type"] = gg.TYPE_FLOAT},
 }
qmxg = {
{["value"] =6666, ["offset"] = -84, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)
end





function d()
qmnb = {
{["memory"] = gg.REGION_ANONYMOUS},
{["name"] ="AKM无后"},
{["value"] =8.19999980927, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 2.09999990463, ["offset"] = 8, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 0.33000001311, ["offset"] = 24, ["type"] = gg.TYPE_FLOAT},
 }
qmxg = {
{["value"] =0.01, ["offset"] = 40, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)
end

function e()
qmnb = {
{["memory"] = gg.REGION_ANONYMOUS},
{["name"] ="M4无后"},
{["value"] =0.33000001311, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 0.60000002384, ["offset"] = 4, ["type"] = gg.TYPE_FLOAT},
{["lv"] = 6.0, ["offset"] = 12, ["type"] = gg.TYPE_FLOAT},
 }
qmxg = {
{["value"] =0.01, ["offset"] = 16, ["type"] = gg.TYPE_FLOAT},
}
xqmnb(qmnb)
end

function Exit()
print("游戏愉快")
os.exit()
end
cs = "谢谢使用"



while true do
  if gg.isVisible(true) then
    XGCK = 1
    gg.setVisible(false)
  end
  gg.clearResults()
  if XGCK == 1 then
    Main()
  end
end