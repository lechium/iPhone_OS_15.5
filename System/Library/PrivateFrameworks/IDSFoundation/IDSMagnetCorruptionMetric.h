//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/CUTCoreAnalyticsMetric-Protocol.h>

@class NSDictionary, NSString;

@interface IDSMagnetCorruptionMetric : NSObject <CUTCoreAnalyticsMetric>
{
    unsigned long long _correctFramesSinceLastCorruption;	// 8 = 0x8
    unsigned long long _correctRawBytesSinceLastCorruption;	// 16 = 0x10
    unsigned long long _discardedRawBytes;	// 24 = 0x18
    unsigned long long _recoveryTimeInMs;	// 32 = 0x20
    unsigned long long _linkType;	// 40 = 0x28
}

@property(readonly, nonatomic) unsigned long long linkType; // @synthesize linkType=_linkType;
@property(readonly, nonatomic) unsigned long long recoveryTimeInMs; // @synthesize recoveryTimeInMs=_recoveryTimeInMs;
@property(readonly, nonatomic) unsigned long long discardedRawBytes; // @synthesize discardedRawBytes=_discardedRawBytes;
@property(readonly, nonatomic) unsigned long long correctRawBytesSinceLastCorruption; // @synthesize correctRawBytesSinceLastCorruption=_correctRawBytesSinceLastCorruption;
@property(readonly, nonatomic) unsigned long long correctFramesSinceLastCorruption; // @synthesize correctFramesSinceLastCorruption=_correctFramesSinceLastCorruption;
- (id)initWithCorrectFramesSinceLastCorruption:(unsigned long long)arg1 correctRawBytesSinceLastCorruption:(unsigned long long)arg2 discardedRawBytes:(unsigned long long)arg3 recoveryTimeInMs:(unsigned long long)arg4 linkType:(unsigned long long)arg5;	// IMP=0x00000000000ca89b
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

