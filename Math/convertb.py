cs="0123456789ABCDEF"	#convierte un int o BigInt a cualquier base
def convb(n,b):   
   if n<b:return cs[n]
   else:return convb(n//b,b)+cs[n%b]
