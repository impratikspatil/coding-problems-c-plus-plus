Profit=[10,200,34,56,12]
Jobs=["j1","j2","j3","j4","j5"]
Deadline=[2,3,3,3,4]
pjoblist=list(zip(Profit,Jobs,Deadline))
pjoblist=sorted(pjoblist,key=lambda x:x[0],reverse=True)
print(pjoblist)

profit=0
ans=[]
slot=[]
for i in range(len(Jobs)):
    ans.append('null')
    slot.append(0)

print(ans)
print(slot)

for i in range(len(Jobs)):
    job=pjoblist[i]
    
    for j in range(job[2],-1,-1):
        if(slot[j]==0):
            ans[j]=job[1]
            profit+=job[0]
            slot[j]=1
            break
print(ans)
print(f"profit is {profit}")