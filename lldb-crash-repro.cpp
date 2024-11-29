struct helper
{
    int x;
};

int main()
{
    // Set a breakpoint here and debug with LLDB v19 on Windows.
    // CodeLLDB (using liblldb v19.1.0) also crashes.
    // The msys2 version of LLDB (v19.1.4) does not crash, interestingly.
    auto pointerToMember = &helper::x;
}
