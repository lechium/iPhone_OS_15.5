//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFHomeKitItemProtocol-Protocol.h>
#import <Home/NSCopying-Protocol.h>

@class HFItem, HMActionSet, NSString;
@protocol HFCharacteristicValueSource, HFHomeKitObject, HFServiceLikeItem;

@interface HFActionSetItem <HFHomeKitItemProtocol, NSCopying>
{
    HMActionSet *_actionSet;	// 8 = 0x8
    unsigned long long _actionSetItemStyle;	// 16 = 0x10
    id <HFCharacteristicValueSource> _valueSource;	// 24 = 0x18
    HFItem<HFServiceLikeItem> *_serviceLikeItem;	// 32 = 0x20
}

+ (id)_primaryStateForActionSet:(id)arg1 valueSource:(id)arg2 logger:(id)arg3 fastInitialUpdate:(_Bool)arg4;	// IMP=0x0000000000280c04
+ (_Bool)_value:(id)arg1 isApproximatelyEqualToValue:(id)arg2 forMinimumValue:(id)arg3 maximumValue:(id)arg4;	// IMP=0x0000000000280986
- (void).cxx_destruct;	// IMP=0x0000000000284a6a
@property(copy, nonatomic) HFItem<HFServiceLikeItem> *serviceLikeItem; // @synthesize serviceLikeItem=_serviceLikeItem;
@property(readonly, nonatomic) id <HFCharacteristicValueSource> valueSource; // @synthesize valueSource=_valueSource;
@property(readonly, nonatomic) unsigned long long actionSetItemStyle; // @synthesize actionSetItemStyle=_actionSetItemStyle;
@property(readonly, nonatomic) HMActionSet *actionSet; // @synthesize actionSet=_actionSet;
- (id)actionSetOperation:(id)arg1 errorFromError:(id)arg2;	// IMP=0x000000000028487f
- (id)turnOffActionSet;	// IMP=0x0000000000283fcb
- (id)executeActionSet;	// IMP=0x0000000000283d69
- (id)rooms;	// IMP=0x00000000002837ed
- (id)_mostCommonRoomForActionSet:(id)arg1;	// IMP=0x00000000002807c1
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000027fa22
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)arg1;	// IMP=0x000000000027fa1a
@property(readonly, nonatomic) id <HFHomeKitObject> homeKitObject;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000027f761
- (id)init;	// IMP=0x000000000027f6ac
- (id)initWithActionSet:(id)arg1 actionSetItemStyle:(unsigned long long)arg2 valueSource:(id)arg3;	// IMP=0x000000000027f5f7

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

