//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSLocalMessageTimedOutMetric : NSObject <CUTCoreAnalyticsMetric>
{
    _Bool _isToDefaultPairedDevice;	// 8 = 0x8
    NSString *_service;	// 16 = 0x10
    unsigned long long _messageSize;	// 24 = 0x18
    unsigned long long _linkType;	// 32 = 0x20
    unsigned long long _deliveryError;	// 40 = 0x28
    unsigned long long _RTT;	// 48 = 0x30
    unsigned long long _priority;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x000000000012f1ca
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) unsigned long long RTT; // @synthesize RTT=_RTT;
@property(readonly, nonatomic) unsigned long long deliveryError; // @synthesize deliveryError=_deliveryError;
@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, nonatomic) _Bool isToDefaultPairedDevice; // @synthesize isToDefaultPairedDevice=_isToDefaultPairedDevice;
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(_Bool)arg2 messageSize:(unsigned long long)arg3 linkType:(unsigned long long)arg4 deliveryError:(unsigned long long)arg5 RTT:(unsigned long long)arg6 priority:(unsigned long long)arg7;	// IMP=0x000000000012f0db
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

