//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NAIdentifiable-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface HFControlPanelItem <NAIdentifiable>
{
    NSString *_uniqueIdentifier;	// 8 = 0x8
    NSSet *_controlItems;	// 16 = 0x10
    NSDictionary *_displayResults;	// 24 = 0x18
    NSDictionary *_controlItemsByUUID;	// 32 = 0x20
    NSDictionary *_UUIDsByControlItemPointer;	// 40 = 0x28
}

+ (id)na_identity;	// IMP=0x0000000000123f9d
+ (id)standardControlPanelItemsForControlItems:(id)arg1;	// IMP=0x00000000001c7597
+ (id)_controlPanelItemRules;	// IMP=0x00000000001c647a
- (void).cxx_destruct;	// IMP=0x00000000001245aa
@property(readonly, nonatomic) NSDictionary *UUIDsByControlItemPointer; // @synthesize UUIDsByControlItemPointer=_UUIDsByControlItemPointer;
@property(readonly, nonatomic) NSDictionary *controlItemsByUUID; // @synthesize controlItemsByUUID=_controlItemsByUUID;
@property(readonly, nonatomic) NSDictionary *displayResults; // @synthesize displayResults=_displayResults;
@property(readonly, copy, nonatomic) NSSet *controlItems; // @synthesize controlItems=_controlItems;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (long long)sortPriority;	// IMP=0x0000000000124407
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000124336
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000123eac
- (id)controlItemForIdentifier:(id)arg1;	// IMP=0x0000000000123e29
- (id)identifierForControlItem:(id)arg1;	// IMP=0x0000000000123d80
- (id)init;	// IMP=0x0000000000123ccb
- (id)initWithControlItems:(id)arg1 displayResults:(id)arg2;	// IMP=0x00000000001239c4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end
