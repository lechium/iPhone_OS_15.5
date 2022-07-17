//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMMLogEvent, NSString;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject
{
    NSString *_sessionID;	// 8 = 0x8
    HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *_metric;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a41a41
@property(retain, nonatomic) HMMLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;	// IMP=0x0000000000a4199f
- (void)dealloc;	// IMP=0x0000000000a41828
- (id)initWithSessionID:(id)arg1;	// IMP=0x0000000000a417ba

@end
