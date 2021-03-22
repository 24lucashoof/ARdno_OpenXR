// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Web_UI_2_H
#define WINRT_Windows_Web_UI_2_H
#include "winrt/impl/Windows.Web.UI.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::UI
{
    struct __declspec(empty_bases) WebViewControlContentLoadingEventArgs : Windows::Web::UI::IWebViewControlContentLoadingEventArgs
    {
        WebViewControlContentLoadingEventArgs(std::nullptr_t) noexcept {}
        WebViewControlContentLoadingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlContentLoadingEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlContentLoadingEventArgs(WebViewControlContentLoadingEventArgs const&) noexcept = default;
        WebViewControlContentLoadingEventArgs(WebViewControlContentLoadingEventArgs&&) noexcept = default;
        WebViewControlContentLoadingEventArgs& operator=(WebViewControlContentLoadingEventArgs const&) & noexcept = default;
        WebViewControlContentLoadingEventArgs& operator=(WebViewControlContentLoadingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlDOMContentLoadedEventArgs : Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs
    {
        WebViewControlDOMContentLoadedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlDOMContentLoadedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlDOMContentLoadedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlDOMContentLoadedEventArgs(WebViewControlDOMContentLoadedEventArgs const&) noexcept = default;
        WebViewControlDOMContentLoadedEventArgs(WebViewControlDOMContentLoadedEventArgs&&) noexcept = default;
        WebViewControlDOMContentLoadedEventArgs& operator=(WebViewControlDOMContentLoadedEventArgs const&) & noexcept = default;
        WebViewControlDOMContentLoadedEventArgs& operator=(WebViewControlDOMContentLoadedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlDeferredPermissionRequest : Windows::Web::UI::IWebViewControlDeferredPermissionRequest
    {
        WebViewControlDeferredPermissionRequest(std::nullptr_t) noexcept {}
        WebViewControlDeferredPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlDeferredPermissionRequest(ptr, take_ownership_from_abi) {}
        WebViewControlDeferredPermissionRequest(WebViewControlDeferredPermissionRequest const&) noexcept = default;
        WebViewControlDeferredPermissionRequest(WebViewControlDeferredPermissionRequest&&) noexcept = default;
        WebViewControlDeferredPermissionRequest& operator=(WebViewControlDeferredPermissionRequest const&) & noexcept = default;
        WebViewControlDeferredPermissionRequest& operator=(WebViewControlDeferredPermissionRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlLongRunningScriptDetectedEventArgs : Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs
    {
        WebViewControlLongRunningScriptDetectedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlLongRunningScriptDetectedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlLongRunningScriptDetectedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlLongRunningScriptDetectedEventArgs(WebViewControlLongRunningScriptDetectedEventArgs const&) noexcept = default;
        WebViewControlLongRunningScriptDetectedEventArgs(WebViewControlLongRunningScriptDetectedEventArgs&&) noexcept = default;
        WebViewControlLongRunningScriptDetectedEventArgs& operator=(WebViewControlLongRunningScriptDetectedEventArgs const&) & noexcept = default;
        WebViewControlLongRunningScriptDetectedEventArgs& operator=(WebViewControlLongRunningScriptDetectedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlNavigationCompletedEventArgs : Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs
    {
        WebViewControlNavigationCompletedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNavigationCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNavigationCompletedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlNavigationCompletedEventArgs(WebViewControlNavigationCompletedEventArgs const&) noexcept = default;
        WebViewControlNavigationCompletedEventArgs(WebViewControlNavigationCompletedEventArgs&&) noexcept = default;
        WebViewControlNavigationCompletedEventArgs& operator=(WebViewControlNavigationCompletedEventArgs const&) & noexcept = default;
        WebViewControlNavigationCompletedEventArgs& operator=(WebViewControlNavigationCompletedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlNavigationStartingEventArgs : Windows::Web::UI::IWebViewControlNavigationStartingEventArgs
    {
        WebViewControlNavigationStartingEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNavigationStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNavigationStartingEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlNavigationStartingEventArgs(WebViewControlNavigationStartingEventArgs const&) noexcept = default;
        WebViewControlNavigationStartingEventArgs(WebViewControlNavigationStartingEventArgs&&) noexcept = default;
        WebViewControlNavigationStartingEventArgs& operator=(WebViewControlNavigationStartingEventArgs const&) & noexcept = default;
        WebViewControlNavigationStartingEventArgs& operator=(WebViewControlNavigationStartingEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlNewWindowRequestedEventArgs : Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs,
        impl::require<WebViewControlNewWindowRequestedEventArgs, Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs2>
    {
        WebViewControlNewWindowRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlNewWindowRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlNewWindowRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlNewWindowRequestedEventArgs(WebViewControlNewWindowRequestedEventArgs const&) noexcept = default;
        WebViewControlNewWindowRequestedEventArgs(WebViewControlNewWindowRequestedEventArgs&&) noexcept = default;
        WebViewControlNewWindowRequestedEventArgs& operator=(WebViewControlNewWindowRequestedEventArgs const&) & noexcept = default;
        WebViewControlNewWindowRequestedEventArgs& operator=(WebViewControlNewWindowRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlPermissionRequest : Windows::Web::UI::IWebViewControlPermissionRequest
    {
        WebViewControlPermissionRequest(std::nullptr_t) noexcept {}
        WebViewControlPermissionRequest(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlPermissionRequest(ptr, take_ownership_from_abi) {}
        WebViewControlPermissionRequest(WebViewControlPermissionRequest const&) noexcept = default;
        WebViewControlPermissionRequest(WebViewControlPermissionRequest&&) noexcept = default;
        WebViewControlPermissionRequest& operator=(WebViewControlPermissionRequest const&) & noexcept = default;
        WebViewControlPermissionRequest& operator=(WebViewControlPermissionRequest&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlPermissionRequestedEventArgs : Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs
    {
        WebViewControlPermissionRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlPermissionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlPermissionRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlPermissionRequestedEventArgs(WebViewControlPermissionRequestedEventArgs const&) noexcept = default;
        WebViewControlPermissionRequestedEventArgs(WebViewControlPermissionRequestedEventArgs&&) noexcept = default;
        WebViewControlPermissionRequestedEventArgs& operator=(WebViewControlPermissionRequestedEventArgs const&) & noexcept = default;
        WebViewControlPermissionRequestedEventArgs& operator=(WebViewControlPermissionRequestedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlScriptNotifyEventArgs : Windows::Web::UI::IWebViewControlScriptNotifyEventArgs
    {
        WebViewControlScriptNotifyEventArgs(std::nullptr_t) noexcept {}
        WebViewControlScriptNotifyEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlScriptNotifyEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlScriptNotifyEventArgs(WebViewControlScriptNotifyEventArgs const&) noexcept = default;
        WebViewControlScriptNotifyEventArgs(WebViewControlScriptNotifyEventArgs&&) noexcept = default;
        WebViewControlScriptNotifyEventArgs& operator=(WebViewControlScriptNotifyEventArgs const&) & noexcept = default;
        WebViewControlScriptNotifyEventArgs& operator=(WebViewControlScriptNotifyEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlSettings : Windows::Web::UI::IWebViewControlSettings
    {
        WebViewControlSettings(std::nullptr_t) noexcept {}
        WebViewControlSettings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlSettings(ptr, take_ownership_from_abi) {}
        WebViewControlSettings(WebViewControlSettings const&) noexcept = default;
        WebViewControlSettings(WebViewControlSettings&&) noexcept = default;
        WebViewControlSettings& operator=(WebViewControlSettings const&) & noexcept = default;
        WebViewControlSettings& operator=(WebViewControlSettings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlUnsupportedUriSchemeIdentifiedEventArgs : Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs
    {
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlUnsupportedUriSchemeIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(WebViewControlUnsupportedUriSchemeIdentifiedEventArgs const&) noexcept = default;
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs(WebViewControlUnsupportedUriSchemeIdentifiedEventArgs&&) noexcept = default;
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs& operator=(WebViewControlUnsupportedUriSchemeIdentifiedEventArgs const&) & noexcept = default;
        WebViewControlUnsupportedUriSchemeIdentifiedEventArgs& operator=(WebViewControlUnsupportedUriSchemeIdentifiedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlUnviewableContentIdentifiedEventArgs : Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs
    {
        WebViewControlUnviewableContentIdentifiedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlUnviewableContentIdentifiedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlUnviewableContentIdentifiedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlUnviewableContentIdentifiedEventArgs(WebViewControlUnviewableContentIdentifiedEventArgs const&) noexcept = default;
        WebViewControlUnviewableContentIdentifiedEventArgs(WebViewControlUnviewableContentIdentifiedEventArgs&&) noexcept = default;
        WebViewControlUnviewableContentIdentifiedEventArgs& operator=(WebViewControlUnviewableContentIdentifiedEventArgs const&) & noexcept = default;
        WebViewControlUnviewableContentIdentifiedEventArgs& operator=(WebViewControlUnviewableContentIdentifiedEventArgs&&) & noexcept = default;
    };
    struct __declspec(empty_bases) WebViewControlWebResourceRequestedEventArgs : Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs
    {
        WebViewControlWebResourceRequestedEventArgs(std::nullptr_t) noexcept {}
        WebViewControlWebResourceRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Web::UI::IWebViewControlWebResourceRequestedEventArgs(ptr, take_ownership_from_abi) {}
        WebViewControlWebResourceRequestedEventArgs(WebViewControlWebResourceRequestedEventArgs const&) noexcept = default;
        WebViewControlWebResourceRequestedEventArgs(WebViewControlWebResourceRequestedEventArgs&&) noexcept = default;
        WebViewControlWebResourceRequestedEventArgs& operator=(WebViewControlWebResourceRequestedEventArgs const&) & noexcept = default;
        WebViewControlWebResourceRequestedEventArgs& operator=(WebViewControlWebResourceRequestedEventArgs&&) & noexcept = default;
    };
}
#endif
