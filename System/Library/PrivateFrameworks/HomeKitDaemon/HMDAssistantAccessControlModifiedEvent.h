//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitMetrics/HMMLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSString;

@interface HMDAssistantAccessControlModifiedEvent : HMMLogEvent <HMDAWDLogEvent>
{
    _Bool _isEnabled;	// 8 = 0x8
    _Bool _areActivityNotificationsEnabledForPersonalRequests;	// 9 = 0x9
    unsigned long long _options;	// 16 = 0x10
    unsigned long long _numEnabledAccessories;	// 24 = 0x18
    unsigned long long _numCapableAccessories;	// 32 = 0x20
}

+ (id)eventWithIsEnabled:(_Bool)arg1 options:(unsigned long long)arg2 areActivityNotificationsEnabledForPersonalRequests:(_Bool)arg3 numEnabledAccessories:(unsigned long long)arg4 numCapableAccessories:(unsigned long long)arg5;	// IMP=0x000000000043f59a
@property(nonatomic) unsigned long long numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property(nonatomic) unsigned long long numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property(nonatomic) _Bool areActivityNotificationsEnabledForPersonalRequests; // @synthesize areActivityNotificationsEnabledForPersonalRequests=_areActivityNotificationsEnabledForPersonalRequests;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (id)metricForAWD;	// IMP=0x00000000008657b5
- (unsigned int)AWDMessageType;	// IMP=0x00000000008657aa

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
