//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFAccessoryRepresentableItem-Protocol.h>
#import <Home/HFActionBuilderFactory-Protocol.h>
#import <Home/HFGroupableItemProtocol-Protocol.h>
#import <Home/HFServiceLikeBuilderCreating-Protocol.h>
#import <Home/HFServiceLikeItem-Protocol.h>

@class HMHome, HMServiceGroup, NSSet, NSString;
@protocol HFAccessoryRepresentable, HFCharacteristicValueSource, HFHomeKitObject;

@interface HFServiceGroupItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFGroupableItemProtocol>
{
    id <HFCharacteristicValueSource> _valueSource;	// 8 = 0x8
    HMServiceGroup *_serviceGroup;	// 16 = 0x10
}

+ (id)_combinedWriteErrorForError:(id)arg1 serviceGroupTitle:(id)arg2;	// IMP=0x000000000020522f
+ (_Bool)_isControlItem:(id)arg1 identicalToControlItem:(id)arg2;	// IMP=0x0000000000204643
+ (_Bool)_isControlItem:(id)arg1 similarToControlItem:(id)arg2;	// IMP=0x000000000020451a
+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;	// IMP=0x000000000017b1ad
- (void).cxx_destruct;	// IMP=0x0000000000206c23
@property(readonly, nonatomic) HMServiceGroup *serviceGroup; // @synthesize serviceGroup=_serviceGroup;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
- (id)namingComponentForHomeKitObject;	// IMP=0x0000000000206b9e
- (id)_sortDescriptorsForServiceItems;	// IMP=0x0000000000206679
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(CDUnknownBlockType)arg2;	// IMP=0x0000000000206073
- (id)_mergedIconDescriptorForServiceItems:(id)arg1;	// IMP=0x0000000000205b71
- (long long)_highestIntegerValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;	// IMP=0x0000000000205942
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;	// IMP=0x0000000000205832
- (double)_averageNumericalValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;	// IMP=0x00000000002055d0
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;	// IMP=0x0000000000205374
- (id)serviceLikeBuilderInHome:(id)arg1;	// IMP=0x00000000002051a2
- (id)accessories;	// IMP=0x0000000000205136
@property(readonly, nonatomic) NSSet *services;
@property(readonly, nonatomic) HMHome *home;
- (id)currentStateActionBuildersForHome:(id)arg1;	// IMP=0x00000000002049f9
- (_Bool)actionsMayRequireDeviceUnlock;	// IMP=0x0000000000204999
- (_Bool)containsActions;	// IMP=0x0000000000204939
- (id)controlPanelItems;	// IMP=0x00000000002048f8
- (id)allControlItems;	// IMP=0x00000000002048ab
- (id)incrementalStateControlItem;	// IMP=0x000000000020486f
- (id)primaryStateControlItem;	// IMP=0x0000000000204833
- (id)_aggregatedValueSource;	// IMP=0x000000000020470f
- (id)_buildControlItemsForServiceItems:(id)arg1;	// IMP=0x0000000000203df1
- (id)_buildServiceItems;	// IMP=0x0000000000203c82
@property(readonly, nonatomic) _Bool isContainedWithinItemGroup;
@property(readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property(readonly, nonatomic) _Bool isItemGroup;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x0000000000202b55
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithValueSource:(id)arg1;	// IMP=0x00000000002029be
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000020296b
- (id)init;	// IMP=0x00000000002028e4
- (id)initWithValueSource:(id)arg1 serviceGroup:(id)arg2;	// IMP=0x0000000000202842
@property(readonly, nonatomic) id <HFAccessoryRepresentable> accessoryRepresentableObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

