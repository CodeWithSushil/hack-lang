## Hack Lang

* example of hack lang

```hack
<?hh
<<__EntryPoint>>
function main(): void {
    echo "Hello, Hack!\n";
}
```

### Non-Blocking I/O (async/await)
```hack
<?hh
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
```

A MVC framework.

