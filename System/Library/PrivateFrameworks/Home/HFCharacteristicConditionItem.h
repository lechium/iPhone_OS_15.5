//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFConditionItem-Protocol.h>

@class HFCharacteristicCondition, NSString;

@interface HFCharacteristicConditionItem <HFConditionItem>
{
    HFCharacteristicCondition *_condition;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000026c6d7
@property(readonly, nonatomic) HFCharacteristicCondition *condition; // @synthesize condition=_condition;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000026c51e
- (id)initWithCondition:(id)arg1;	// IMP=0x000000000026c435
- (id)init;	// IMP=0x000000000026c380

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

