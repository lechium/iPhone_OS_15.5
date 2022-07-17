//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMMCoreAnalyticsLogging-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface HMDCloudShareTrustManagerFailureLogEvent <HMMCoreAnalyticsLogging>
{
    NSNumber *_trustManagerErrorCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000007ea0e5
@property(readonly, copy) NSNumber *trustManagerErrorCode; // @synthesize trustManagerErrorCode=_trustManagerErrorCode;
- (id)initWithTrustManagerErrorCode:(long long)arg1 error:(id)arg2;	// IMP=0x00000000007e9f64
@property(readonly, nonatomic) NSDictionary *serializedEvent;
@property(readonly, nonatomic) NSString *eventName;

// Remaining properties
@property(readonly, nonatomic) NSString *accessoryIdentifier;

@end
