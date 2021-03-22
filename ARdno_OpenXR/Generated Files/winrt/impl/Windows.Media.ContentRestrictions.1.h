// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Media_ContentRestrictions_1_H
#define WINRT_Windows_Media_ContentRestrictions_1_H
#include "winrt/impl/Windows.Media.ContentRestrictions.0.h"
WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions
{
    struct __declspec(empty_bases) IContentRestrictionsBrowsePolicy :
        Windows::Foundation::IInspectable,
        impl::consume_t<IContentRestrictionsBrowsePolicy>
    {
        IContentRestrictionsBrowsePolicy(std::nullptr_t = nullptr) noexcept {}
        IContentRestrictionsBrowsePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IContentRestrictionsBrowsePolicy(IContentRestrictionsBrowsePolicy const&) noexcept = default;
        IContentRestrictionsBrowsePolicy(IContentRestrictionsBrowsePolicy&&) noexcept = default;
        IContentRestrictionsBrowsePolicy& operator=(IContentRestrictionsBrowsePolicy const&) & noexcept = default;
        IContentRestrictionsBrowsePolicy& operator=(IContentRestrictionsBrowsePolicy&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRatedContentDescription :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentDescription>
    {
        IRatedContentDescription(std::nullptr_t = nullptr) noexcept {}
        IRatedContentDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRatedContentDescription(IRatedContentDescription const&) noexcept = default;
        IRatedContentDescription(IRatedContentDescription&&) noexcept = default;
        IRatedContentDescription& operator=(IRatedContentDescription const&) & noexcept = default;
        IRatedContentDescription& operator=(IRatedContentDescription&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRatedContentDescriptionFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentDescriptionFactory>
    {
        IRatedContentDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
        IRatedContentDescriptionFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRatedContentDescriptionFactory(IRatedContentDescriptionFactory const&) noexcept = default;
        IRatedContentDescriptionFactory(IRatedContentDescriptionFactory&&) noexcept = default;
        IRatedContentDescriptionFactory& operator=(IRatedContentDescriptionFactory const&) & noexcept = default;
        IRatedContentDescriptionFactory& operator=(IRatedContentDescriptionFactory&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRatedContentRestrictions :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentRestrictions>
    {
        IRatedContentRestrictions(std::nullptr_t = nullptr) noexcept {}
        IRatedContentRestrictions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRatedContentRestrictions(IRatedContentRestrictions const&) noexcept = default;
        IRatedContentRestrictions(IRatedContentRestrictions&&) noexcept = default;
        IRatedContentRestrictions& operator=(IRatedContentRestrictions const&) & noexcept = default;
        IRatedContentRestrictions& operator=(IRatedContentRestrictions&&) & noexcept = default;
    };
    struct __declspec(empty_bases) IRatedContentRestrictionsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<IRatedContentRestrictionsFactory>
    {
        IRatedContentRestrictionsFactory(std::nullptr_t = nullptr) noexcept {}
        IRatedContentRestrictionsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        IRatedContentRestrictionsFactory(IRatedContentRestrictionsFactory const&) noexcept = default;
        IRatedContentRestrictionsFactory(IRatedContentRestrictionsFactory&&) noexcept = default;
        IRatedContentRestrictionsFactory& operator=(IRatedContentRestrictionsFactory const&) & noexcept = default;
        IRatedContentRestrictionsFactory& operator=(IRatedContentRestrictionsFactory&&) & noexcept = default;
    };
}
#endif
