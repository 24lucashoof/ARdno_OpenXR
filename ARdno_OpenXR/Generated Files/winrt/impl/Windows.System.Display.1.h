// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_System_Display_1_H
#define WINRT_Windows_System_Display_1_H
#include "winrt/impl/Windows.System.Display.0.h"
WINRT_EXPORT namespace winrt::Windows::System::Display
{
    struct __declspec(empty_bases) IDisplayRequest :
        Windows::Foundation::IInspectable,
        impl::consume_t<IDisplayRequest>
    {
        IDisplayRequest(std::nullptr_t = nullptr) noexcept {}
        IDisplayRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IDisplayRequest(IDisplayRequest const&) noexcept = default;
        IDisplayRequest(IDisplayRequest&&) noexcept = default;
        IDisplayRequest& operator=(IDisplayRequest const&) & noexcept = default;
        IDisplayRequest& operator=(IDisplayRequest&&) & noexcept = default;
    };
}
#endif
