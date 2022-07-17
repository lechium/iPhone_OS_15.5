//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriCore/NSCopying-Protocol.h>

@class NSMapTable;

@interface SiriCorePingInfo : NSObject <NSCopying>
{
    NSMapTable *_outstandingPings;	// 8 = 0x8
    long long _pingAcknowledgedCount;	// 16 = 0x10
    double _avgPingTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000011f90
@property(readonly, nonatomic) double avgPingTime; // @synthesize avgPingTime=_avgPingTime;
@property(readonly, nonatomic) long long pingAcknowledgedCount; // @synthesize pingAcknowledgedCount=_pingAcknowledgedCount;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000011f4d
- (unsigned long long)numberOfUnacknowledgedPings;	// IMP=0x0000000000011f37
- (void)markPongReceivedWithIndex:(long long)arg1;	// IMP=0x0000000000011e41
- (void)markPingSentWithIndex:(long long)arg1;	// IMP=0x0000000000011d80

@end
