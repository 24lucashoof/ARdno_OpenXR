// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Media_ContentRestrictions_2_H
#define WINRT_Windows_Media_ContentRestrictions_2_H
#include "winrt/impl/Windows.Media.ContentRestrictions.1.h"
WINRT_EXPORT namespace winrt::Windows::Media::ContentRestrictions
{
    struct __declspec(empty_bases) ContentRestrictionsBrowsePolicy : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy
    {
        ContentRestrictionsBrowsePolicy(std::nullptr_t) noexcept {}
        ContentRestrictionsBrowsePolicy(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IContentRestrictionsBrowsePolicy(ptr, take_ownership_from_abi) {}
        ContentRestrictionsBrowsePolicy(ContentRestrictionsBrowsePolicy const&) noexcept = default;
        ContentRestrictionsBrowsePolicy(ContentRestrictionsBrowsePolicy&&) noexcept = default;
        ContentRestrictionsBrowsePolicy& operator=(ContentRestrictionsBrowsePolicy const&) & noexcept = default;
        ContentRestrictionsBrowsePolicy& operator=(ContentRestrictionsBrowsePolicy&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RatedContentDescription : Windows::Media::ContentRestrictions::IRatedContentDescription
    {
        RatedContentDescription(std::nullptr_t) noexcept {}
        RatedContentDescription(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentDescription(ptr, take_ownership_from_abi) {}
        RatedContentDescription(param::hstring const& id, param::hstring const& title, Windows::Media::ContentRestrictions::RatedContentCategory const& category);
        RatedContentDescription(RatedContentDescription const&) noexcept = default;
        RatedContentDescription(RatedContentDescription&&) noexcept = default;
        RatedContentDescription& operator=(RatedContentDescription const&) & noexcept = default;
        RatedContentDescription& operator=(RatedContentDescription&&) & noexcept = default;
    };
    struct __declspec(empty_bases) RatedContentRestrictions : Windows::Media::ContentRestrictions::IRatedContentRestrictions
    {
        RatedContentRestrictions(std::nullptr_t) noexcept {}
        RatedContentRestrictions(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Media::ContentRestrictions::IRatedContentRestrictions(ptr, take_ownership_from_abi) {}
        RatedContentRestrictions();
        explicit RatedContentRestrictions(uint32_t maxAgeRating);
        RatedContentRestrictions(RatedContentRestrictions const&) noexcept = default;
        RatedContentRestrictions(RatedContentRestrictions&&) noexcept = default;
        RatedContentRestrictions& operator=(RatedContentRestrictions const&) & noexcept = default;
        RatedContentRestrictions& operator=(RatedContentRestrictions&&) & noexcept = default;
    };
}
#endif
