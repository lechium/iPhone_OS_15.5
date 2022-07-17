//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableSet;

@interface SBSwitcherModelRemovalResults : NSObject
{
    NSMutableSet *_appLayouts;	// 8 = 0x8
    NSMutableDictionary *_appLayoutToAction;	// 16 = 0x10
    NSMutableDictionary *_displayItemToHide;	// 24 = 0x18
    NSMutableDictionary *_appLayoutToReplacement;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000059141b
- (id)replacementAppLayoutForAppLayout:(id)arg1;	// IMP=0x0000000000591405
- (_Bool)willHideDisplayItem:(id)arg1;	// IMP=0x00000000005913bd
- (void)executeActionForAppLayout:(id)arg1;	// IMP=0x0000000000591347
- (void)setReplacementAppLayout:(id)arg1 forAppLayout:(id)arg2;	// IMP=0x0000000000591331
- (void)setHide:(_Bool)arg1 forDisplayItem:(id)arg2;	// IMP=0x00000000005912af
- (void)removeAppLayout:(id)arg1;	// IMP=0x0000000000591299
- (void)setAction:(CDUnknownBlockType)arg1 forAppLayout:(id)arg2;	// IMP=0x0000000000591191
@property(readonly, copy, nonatomic) NSArray *appLayouts;
- (id)init;	// IMP=0x0000000000591094

@end
