//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKDataListSuggestionsControl : NSObject
{
    struct WeakPtr<WebKit::WebDataListSuggestionsDropdownIOS, WTF::EmptyCounter> _dropdown;	// 8 = 0x8
    struct Vector<WebCore::DataListSuggestion, 0UL, WTF::CrashOnOverflow, 16UL, WTF::FastMalloc> _suggestions;	// 16 = 0x10
    _Bool _isShowingSuggestions;	// 32 = 0x20
    WKContentView *_view;	// 40 = 0x28
}

- (id).cxx_construct;	// IMP=0x00000000003ff200
- (void).cxx_destruct;	// IMP=0x00000000003ff1b6
@property(nonatomic) __weak WKContentView *view; // @synthesize view=_view;
@property(nonatomic) _Bool isShowingSuggestions; // @synthesize isShowingSuggestions=_isShowingSuggestions;
- (long long)textAlignment;	// IMP=0x00000000003ff15c
- (struct String)suggestionAtIndex:(long long)arg1;	// IMP=0x00000000003ff131
- (long long)suggestionsCount;	// IMP=0x00000000003ff128
- (id)textSuggestions;	// IMP=0x00000000003ff04d
- (void)invalidate;	// IMP=0x00000000003ff047
- (void)didSelectOptionAtIndex:(long long)arg1;	// IMP=0x00000000003fefe7
- (void)showSuggestionsDropdown:(void *)arg1 activationType:(unsigned char)arg2;	// IMP=0x00000000003fef66
- (void)updateWithInformation:(void *)arg1;	// IMP=0x00000000003fef38
- (id)initWithInformation:(void *)arg1 inView:(id)arg2;	// IMP=0x00000000003fee91

@end
