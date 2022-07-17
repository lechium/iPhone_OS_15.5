//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, WBSCyclerItemListRepresentation;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerOperationContext : NSObject
{
    id <WBSCyclerTestTarget> _testTarget;	// 8 = 0x8
    WBSCyclerItemListRepresentation *_topLevelItem;	// 16 = 0x10
    NSString *_titlePrefix;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000055dec
@property(copy, nonatomic) NSString *titlePrefix; // @synthesize titlePrefix=_titlePrefix;
@property(retain, nonatomic) WBSCyclerItemListRepresentation *topLevelItem; // @synthesize topLevelItem=_topLevelItem;
@property(retain, nonatomic) id <WBSCyclerTestTarget> testTarget; // @synthesize testTarget=_testTarget;
- (id)_copyItem:(id)arg1 filteringWithIdentifierWhitelist:(id)arg2;	// IMP=0x0000000000055b05
- (id)_buildDictionaryOfDescendantIdentifiersToParentIdentifiersFromList:(id)arg1;	// IMP=0x0000000000055883
- (_Bool)_isItemValid:(id)arg1;	// IMP=0x00000000000556d4
- (_Bool)_isItemPrefixed:(id)arg1;	// IMP=0x0000000000055674
- (id)randomValidStrictListDescendantOfTopLevelItem;	// IMP=0x0000000000055645
- (id)randomValidStrictListDescendantOfList:(id)arg1;	// IMP=0x0000000000055551
- (id)randomValidStrictDescendantOfTopLevelItem;	// IMP=0x0000000000055522
- (id)randomValidStrictDescendantOfList:(id)arg1;	// IMP=0x000000000005546d
- (id)randomDescendantOfList:(id)arg1 enforcingTitlePrefixValidity:(_Bool)arg2 passingTest:(CDUnknownBlockType)arg3;	// IMP=0x000000000005535e
- (id)randomItemTitle;	// IMP=0x00000000000552f9
- (id)filterOutItemsWithoutTitlePrefixInList:(id)arg1;	// IMP=0x0000000000054fe9

@end
