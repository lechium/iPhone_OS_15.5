//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, TSIntervalFilter;
@protocol OS_dispatch_queue;

@interface TSIntervalTimeLineFilter
{
    unsigned long long _AAnchor[8];	// 8 = 0x8
    unsigned long long _BAnchor[8];	// 72 = 0x48
    long long _AEntries[8];	// 136 = 0x88
    long long _BEntries[8];	// 200 = 0xc8
    NSObject<OS_dispatch_queue> *_syncQueue;	// 264 = 0x108
    long long _validIndex;	// 272 = 0x110
    TSIntervalFilter *_aIntervalFilter;	// 280 = 0x118
    TSIntervalFilter *_bIntervalFilter;	// 288 = 0x120
}

- (void).cxx_destruct;	// IMP=0x0000000000005e27
- (_Bool)canConvertTime;	// IMP=0x0000000000005e12
- (void)changeToNewFilterSize:(unsigned char)arg1;	// IMP=0x0000000000005d64
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 multiIntervalCount:(unsigned int)arg3;	// IMP=0x0000000000005ca7
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2;	// IMP=0x0000000000005bf4
- (void)resetFilter;	// IMP=0x0000000000005b51
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;	// IMP=0x0000000000005aa9
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;	// IMP=0x00000000000059e1
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;	// IMP=0x0000000000005779
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;	// IMP=0x000000000000564f
- (void)getAnchors:(CDStruct_4bcfbbae *)arg1 andRateRatio:(CDStruct_4bcfbbae *)arg2;	// IMP=0x0000000000005572
- (CDStruct_4bcfbbae)rateRatio;	// IMP=0x00000000000054e0
- (void)addTimestamps:(CDStruct_4bcfbbae)arg1;	// IMP=0x00000000000053b7
- (id)initWithExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 filterSize:(unsigned char)arg3;	// IMP=0x000000000000526c

@end

