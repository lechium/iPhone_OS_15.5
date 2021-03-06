//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SBLockScreenElementOverride : NSObject
{
    _Bool _hidden;	// 8 = 0x8
    long long _element;	// 16 = 0x10
    NSString *_text;	// 24 = 0x18
}

+ (id)overrideForHiddenElement:(long long)arg1;	// IMP=0x0000000000005728
+ (id)overrideForElement:(long long)arg1;	// IMP=0x00000000000056f0
- (void).cxx_destruct;	// IMP=0x000000000000592d
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(nonatomic) long long element; // @synthesize element=_element;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000058dc
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000000588c
- (id)succinctDescriptionBuilder;	// IMP=0x00000000000057cd
- (id)succinctDescription;	// IMP=0x000000000000577d
- (id)description;	// IMP=0x0000000000005769

@end

