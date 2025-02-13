<?hh
<<__EntryPoint>>
function main(): void {
    echo "Hello, Hack!\n";
}

// Non-blocking I/O asych await 
async function fetchData(): Awaitable<string> {
    // Simulate API call
    await SleepWaitHandle::create(2_000_000);
    return "Data fetched!";
}

<<__EntryPoint>>
async function main(): Awaitable<void> {
    $result = await fetchData();
    echo $result; // "Data fetched!"
}


