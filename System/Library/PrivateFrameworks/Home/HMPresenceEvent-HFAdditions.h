//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMPresenceEvent.h>

#import <Home/HFLocationBasedEvent-Protocol.h>

@class NSString;

@interface HMPresenceEvent (HFAdditions) <HFLocationBasedEvent>
+ (unsigned long long)hf_presenceDisableReasonsForHome:(id)arg1;	// IMP=0x00000000000650f5
+ (unsigned long long)hf_locationEventTypeForPresenceEventType:(unsigned long long)arg1;	// IMP=0x0000000000065093
@property(readonly, nonatomic) unsigned long long hf_eventType;
@property(readonly, nonatomic) unsigned long long hf_activationGranularity;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;	// IMP=0x00000000000783fb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
