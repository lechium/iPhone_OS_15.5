//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSQRAllocationMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned int _result;	// 8 = 0x8
    unsigned int _hasRecipientAccepted;	// 12 = 0xc
    unsigned int _payloadSize;	// 16 = 0x10
    unsigned long long _duration;	// 24 = 0x18
    NSString *_topic;	// 32 = 0x20
    NSString *_service;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000009a7e5
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(readonly, nonatomic) NSString *topic; // @synthesize topic=_topic;
@property(readonly, nonatomic) unsigned int payloadSize; // @synthesize payloadSize=_payloadSize;
@property(readonly, nonatomic) unsigned int hasRecipientAccepted; // @synthesize hasRecipientAccepted=_hasRecipientAccepted;
@property(readonly, nonatomic) unsigned int result; // @synthesize result=_result;
@property(readonly, nonatomic) unsigned long long duration; // @synthesize duration=_duration;
- (id)initWithDuration:(unsigned long long)arg1 result:(unsigned int)arg2 hasRecipientAccepted:(unsigned int)arg3 payloadSize:(unsigned int)arg4 topic:(id)arg5 service:(id)arg6;	// IMP=0x000000000009a6ee
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

