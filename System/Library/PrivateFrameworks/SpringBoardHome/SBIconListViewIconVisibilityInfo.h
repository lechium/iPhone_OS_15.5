//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/NSCopying-Protocol.h>

@class NSMapTable, NSString;

@interface SBIconListViewIconVisibilityInfo : NSObject <BSDescriptionProviding, NSCopying>
{
    NSMapTable *_visibleRects;	// 8 = 0x8
    _Bool _normalized;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000018f3ac
@property(nonatomic, getter=isNormalized) _Bool normalized; // @synthesize normalized=_normalized;
- (id)succinctDescriptionBuilder;	// IMP=0x000000000018f37e
- (id)succinctDescription;	// IMP=0x000000000018f32e
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x000000000018f29d
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x000000000018f24d
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000018f1ac
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000018f0fb
- (void)enumerateVisibleIconsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000018eee5
@property(readonly, copy, nonatomic) NSMapTable *visibleIconRects;
- (void)addValuesFromIconVisibilityInfo:(id)arg1;	// IMP=0x000000000018edcd
- (void)setVisibleRect:(struct CGRect)arg1 forIcon:(id)arg2;	// IMP=0x000000000018ec46
- (struct CGRect)visibleRectForIcon:(id)arg1;	// IMP=0x000000000018ebdc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

