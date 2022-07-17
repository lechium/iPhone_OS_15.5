//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/HFConditionItem-Protocol.h>

@class HFPresenceCondition, HMHome, NSString;

@interface HFPresenceConditionItem <HFConditionItem>
{
    HFPresenceCondition *_condition;	// 8 = 0x8
    HMHome *_home;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000016a6d0
@property(readonly, nonatomic) HMHome *home; // @synthesize home=_home;
@property(retain, nonatomic) HFPresenceCondition *condition; // @synthesize condition=_condition;
- (id)_subclass_updateWithOptions:(id)arg1;	// IMP=0x000000000016a48a
- (id)initWithCondition:(id)arg1 home:(id)arg2;	// IMP=0x000000000016a3e8
- (id)init;	// IMP=0x000000000016a333

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
