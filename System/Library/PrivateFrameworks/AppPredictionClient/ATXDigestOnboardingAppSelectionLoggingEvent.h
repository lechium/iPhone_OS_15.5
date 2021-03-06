//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXProtoBufWrapper-Protocol.h>
#import <AppPredictionClient/BMStoreData-Protocol.h>

@class NSString, NSUUID;

@interface ATXDigestOnboardingAppSelectionLoggingEvent : NSObject <BMStoreData, ATXProtoBufWrapper>
{
    _Bool _addedToDigest;	// 8 = 0x8
    _Bool _wasShownInDigestOnboarding;	// 9 = 0x9
    NSUUID *_sessionUUID;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    unsigned long long _avgNumBasicNotifications;	// 32 = 0x20
    unsigned long long _avgNumMessageNotfications;	// 40 = 0x28
    unsigned long long _avgNumTimeSensitiveNonMessageNotifications;	// 48 = 0x30
    unsigned long long _rank;	// 56 = 0x38
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000004dfff
- (void).cxx_destruct;	// IMP=0x000000000004e449
@property(readonly, nonatomic) _Bool wasShownInDigestOnboarding; // @synthesize wasShownInDigestOnboarding=_wasShownInDigestOnboarding;
@property(readonly, nonatomic) _Bool addedToDigest; // @synthesize addedToDigest=_addedToDigest;
@property(readonly, nonatomic) unsigned long long rank; // @synthesize rank=_rank;
@property(readonly, nonatomic) unsigned long long avgNumTimeSensitiveNonMessageNotifications; // @synthesize avgNumTimeSensitiveNonMessageNotifications=_avgNumTimeSensitiveNonMessageNotifications;
@property(readonly, nonatomic) unsigned long long avgNumMessageNotfications; // @synthesize avgNumMessageNotfications=_avgNumMessageNotfications;
@property(readonly, nonatomic) unsigned long long avgNumBasicNotifications; // @synthesize avgNumBasicNotifications=_avgNumBasicNotifications;
@property(readonly, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (id)proto;	// IMP=0x000000000004e31c
- (id)initWithProto:(id)arg1;	// IMP=0x000000000004e128
- (id)encodeAsProto;	// IMP=0x000000000004e0d8
- (id)initWithProtoData:(id)arg1;	// IMP=0x000000000004e05a
- (id)serialize;	// IMP=0x000000000004e048
@property(readonly, nonatomic) unsigned int dataVersion;
- (id)initWithSessionUUID:(id)arg1 bundleId:(id)arg2 avgNumBasicNotifications:(unsigned long long)arg3 avgNumMessageNotifications:(unsigned long long)arg4 avgNumTimeSensitiveNonMessageNotifications:(unsigned long long)arg5 rank:(unsigned long long)arg6 addedToDigest:(_Bool)arg7 wasShownInDigestOnboarding:(_Bool)arg8;	// IMP=0x000000000004df28

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

