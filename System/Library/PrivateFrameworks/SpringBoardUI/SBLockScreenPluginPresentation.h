//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/NSCopying-Protocol.h>

@class _UILegibilitySettings;

@interface SBLockScreenPluginPresentation : NSObject <NSCopying>
{
    _UILegibilitySettings *legibilitySettings;	// 8 = 0x8
    struct UIEdgeInsets suggestedContentInsets;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000013bad
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings;
@property(nonatomic) struct UIEdgeInsets suggestedContentInsets; // @synthesize suggestedContentInsets;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000013b59
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000000013a21
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x00000000000139d1
- (id)succinctDescriptionBuilder;	// IMP=0x000000000001391f
- (id)succinctDescription;	// IMP=0x00000000000138cf
- (id)description;	// IMP=0x00000000000138bb

@end

