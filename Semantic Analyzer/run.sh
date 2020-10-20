YELLOW='\033[1;33m'
NOCOLOR='\033[0m'

function run() {
	flex scanner.l && yacc -d parser.y && gcc y.tab.c lex.yy.c -w
	local total_testcases="$1"
	echo "Running: $total_testcases" > out.log
	local start=1
	while [ $start -le $total_testcases ]
	do
		printf "\n\n" >>out.log
		for i in {1..35}
		do
			echo -ne "=" >> out.log
		done
		echo -ne "  ${YELLOW}Running TestCase $start${NOCOLOR}  " >> out.log
		for i in {1..35}
		do
			echo -ne "=" >>out.log
		done
		printf "\n" >> out.log
		local filename="tests/test"$start".c"
		./a.out $filename >> out.log
		((start++))
	done
}

number_of_files=`ls -l ./tests/ | egrep -c '^-'`
run $number_of_files
