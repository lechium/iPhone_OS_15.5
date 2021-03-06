//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/BMStoreData-Protocol.h>

@class NSArray, NSString, NSUUID;

@interface ATXDigestOnboardingLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>
{
    _Bool _didSelectShowMore;	// 8 = 0x8
    int _entrySource;	// 12 = 0xc
    int _digestOnboardingOutcome;	// 16 = 0x10
    int _finalUIShown;	// 20 = 0x14
    NSUUID *_sessionUUID;	// 24 = 0x18
    double _timeTaken;	// 32 = 0x20
    NSArray *_deliveryTimes;	// 40 = 0x28
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x0000000000012b3e
- (void).cxx_destruct;	// IMP=0x00000000000133fc
@property(readonly, nonatomic) NSArray *deliveryTimes; // @synthesize deliveryTimes=_deliveryTimes;
@property(readonly, nonatomic) double timeTaken; // @synthesize timeTaken=_timeTaken;
@property(readonly, nonatomic) _Bool didSelectShowMore; // @synthesize didSelectShowMore=_didSelectShowMore;
@property(readonly, nonatomic) int finalUIShown; // @synthesize finalUIShown=_finalUIShown;
@property(readonly, nonatomic) int digestOnboardingOutcome; // @synthesize digestOnboardingOutcome=_digestOnboardingOutcome;
@property(readonly, nonatomic) int entrySource; // @synthesize entrySource=_entrySource;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (id)proto;	// IMP=0x00000000000130ec
- (id)initWithProto:(id)arg1;	// IMP=0x0000000000012c67
- (id)encodeAsProto;	// IMP=0x0000000000012c17
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000012b99
- (id)serialize;	// IMP=0x0000000000012b87
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithSessionUUID:(id)arg1 entrySource:(int)arg2 digestOnboardingOutcome:(int)arg3 finalUIShown:(int)arg4 didSelectShowMore:(_Bool)arg5 timeTaken:(double)arg6 deliveryTimes:(id)arg7;	// IMP=0x0000000000012a60

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

