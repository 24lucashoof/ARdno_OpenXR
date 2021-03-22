// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.0.210312.4

#ifndef WINRT_Windows_Globalization_Collation_1_H
#define WINRT_Windows_Globalization_Collation_1_H
#include "winrt/impl/Windows.Foundation.Collections.0.h"
#include "winrt/impl/Windows.Globalization.Collation.0.h"
WINRT_EXPORT namespace winrt::Windows::Globalization::Collation
{
    struct __declspec(empty_bases) ICharacterGrouping :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGrouping>
    {
        ICharacterGrouping(std::nullptr_t = nullptr) noexcept {}
        ICharacterGrouping(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICharacterGrouping(ICharacterGrouping const&) noexcept = default;
        ICharacterGrouping(ICharacterGrouping&&) noexcept = default;
        ICharacterGrouping& operator=(ICharacterGrouping const&) & noexcept = default;
        ICharacterGrouping& operator=(ICharacterGrouping&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ICharacterGroupings :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGroupings>,
        impl::require<Windows::Globalization::Collation::ICharacterGroupings, Windows::Foundation::Collections::IIterable<Windows::Globalization::Collation::CharacterGrouping>, Windows::Foundation::Collections::IVectorView<Windows::Globalization::Collation::CharacterGrouping>>
    {
        ICharacterGroupings(std::nullptr_t = nullptr) noexcept {}
        ICharacterGroupings(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICharacterGroupings(ICharacterGroupings const&) noexcept = default;
        ICharacterGroupings(ICharacterGroupings&&) noexcept = default;
        ICharacterGroupings& operator=(ICharacterGroupings const&) & noexcept = default;
        ICharacterGroupings& operator=(ICharacterGroupings&&) & noexcept = default;
    };
    struct __declspec(empty_bases) ICharacterGroupingsFactory :
        Windows::Foundation::IInspectable,
        impl::consume_t<ICharacterGroupingsFactory>
    {
        ICharacterGroupingsFactory(std::nullptr_t = nullptr) noexcept {}
        ICharacterGroupingsFactory(void* ptr, take_ownership_from_abi_t) noexcept : Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
        ICharacterGroupingsFactory(ICharacterGroupingsFactory const&) noexcept = default;
        ICharacterGroupingsFactory(ICharacterGroupingsFactory&&) noexcept = default;
        ICharacterGroupingsFactory& operator=(ICharacterGroupingsFactory const&) & noexcept = default;
        ICharacterGroupingsFactory& operator=(ICharacterGroupingsFactory&&) & noexcept = default;
    };
}
#endif
