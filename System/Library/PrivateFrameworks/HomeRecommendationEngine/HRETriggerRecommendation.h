//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeRecommendationEngine/HREActionRecommendation-Protocol.h>

@class HFTriggerBuilder, HREActionVarianceCollection, NSMutableSet, NSSet, NSString;
@protocol HFIconDescriptor;

@interface HRETriggerRecommendation <HREActionRecommendation>
{
    HREActionVarianceCollection *allowedVariance;	// 8 = 0x8
    HFTriggerBuilder *_selectedTriggerBuilder;	// 16 = 0x10
    NSMutableSet *mutableTriggerBuilders;	// 24 = 0x18
    id <HFIconDescriptor> _iconDescriptor;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000e1fd
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
@property(retain, nonatomic) NSMutableSet *mutableTriggerBuilders; // @synthesize mutableTriggerBuilders;
@property(retain, nonatomic) HREActionVarianceCollection *allowedVariance; // @synthesize allowedVariance;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e117
- (id)descriptionBuilder;	// IMP=0x000000000000dd20
- (void)replaceTriggerBuilder:(id)arg1 withTriggerBuilder:(id)arg2 allowEditingExistingActions:(_Bool)arg3;	// IMP=0x000000000000db2a
@property(readonly, nonatomic) NSSet *addedActions;
- (id)compareForMatchingToTrigger:(id)arg1;	// IMP=0x000000000000d6ab
- (_Bool)includesObjects:(id)arg1;	// IMP=0x000000000000d10c
- (id)involvedObjects;	// IMP=0x000000000000cf0a
- (id)changedInvolvedObjects;	// IMP=0x000000000000cd1a
- (_Bool)containsRecommendableContent;	// IMP=0x000000000000caa9
- (_Bool)containsMeaningfulChanges;	// IMP=0x000000000000c731
@property(readonly, nonatomic) NSSet *triggerBuilders;
- (void)removeActions:(id)arg1;	// IMP=0x000000000000c6b4
- (void)addActions:(id)arg1 allowEditingExistingActions:(_Bool)arg2;	// IMP=0x000000000000c63f
- (void)addActions:(id)arg1;	// IMP=0x000000000000c628
- (void)removeAction:(id)arg1;	// IMP=0x000000000000c599
- (void)addAction:(id)arg1 allowEditingExistingActions:(_Bool)arg2;	// IMP=0x000000000000c14b
- (void)addAction:(id)arg1;	// IMP=0x000000000000c134
- (id)existingActionBuilder:(id)arg1 inSet:(id)arg2;	// IMP=0x000000000000c059
@property(readonly, nonatomic) NSSet *actions;
@property(retain, nonatomic) HFTriggerBuilder *selectedTriggerBuilder; // @synthesize selectedTriggerBuilder=_selectedTriggerBuilder;
- (id)initWithHome:(id)arg1 uniqueIdentifier:(id)arg2;	// IMP=0x000000000000bc74

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
