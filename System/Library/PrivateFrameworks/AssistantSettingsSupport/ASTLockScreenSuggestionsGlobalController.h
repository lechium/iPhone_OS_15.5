//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PSSpecifier;

@interface ASTLockScreenSuggestionsGlobalController : NSObject
{
    PSSpecifier *_specifier;	// 8 = 0x8
    CDUnknownBlockType _onChangeCallback;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000003d6d
- (void)setLockScreenSuggestionsEnabled:(id)arg1 forSpecifier:(id)arg2;	// IMP=0x0000000000003c8c
- (id)isLockScreenSuggestionEnabled:(id)arg1;	// IMP=0x0000000000003c21
- (id)specifier;	// IMP=0x0000000000003afb
- (id)initWithOnChangeCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000003a90

@end

