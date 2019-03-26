from decimal import *	#Import Decimal
getcontext().prec=32	#Set precision
ans=format(ans,'.32f')	#Print without Scientific Notation
str(ans).rstrip('0')	#Delete trailing Zero
