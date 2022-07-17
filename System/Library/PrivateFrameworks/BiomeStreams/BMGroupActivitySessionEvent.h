//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BiomeStreams/BMProtoBufWrapper-Protocol.h>
#import <BiomeStreams/BMStoreData-Protocol.h>

@class NSArray, NSString;

@interface BMGroupActivitySessionEvent <BMStoreData, BMProtoBufWrapper>
{
    _Bool _isActive;	// 8 = 0x8
    NSString *_sourceBundleID;	// 16 = 0x10
    NSString *_activitySessionID;	// 24 = 0x18
    NSString *_activityID;	// 32 = 0x20
    NSString *_messagesChatGuid;	// 40 = 0x28
    NSArray *_participantHandles;	// 48 = 0x30
    NSArray *_memberHandles;	// 56 = 0x38
    NSString *_experienceType;	// 64 = 0x40
}

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;	// IMP=0x000000000008791c
- (void).cxx_destruct;	// IMP=0x0000000000088476
@property(readonly, copy, nonatomic) NSString *experienceType; // @synthesize experienceType=_experienceType;
@property(readonly, copy, nonatomic) NSArray *memberHandles; // @synthesize memberHandles=_memberHandles;
@property(readonly, copy, nonatomic) NSArray *participantHandles; // @synthesize participantHandles=_participantHandles;
@property(readonly, copy, nonatomic) NSString *messagesChatGuid; // @synthesize messagesChatGuid=_messagesChatGuid;
@property(readonly, copy, nonatomic) NSString *activityID; // @synthesize activityID=_activityID;
@property(readonly, copy, nonatomic) NSString *activitySessionID; // @synthesize activitySessionID=_activitySessionID;
@property(readonly, copy, nonatomic) NSString *sourceBundleID; // @synthesize sourceBundleID=_sourceBundleID;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000087f0f
@property(readonly) unsigned long long hash;
- (id)proto;	// IMP=0x0000000000087c60
- (id)initWithProtoData:(id)arg1;	// IMP=0x0000000000087bc4
- (id)initWithProto:(id)arg1;	// IMP=0x00000000000879c7
- (id)encodeAsProto;	// IMP=0x0000000000087977
- (id)serialize;	// IMP=0x0000000000087965
@property(readonly, nonatomic) unsigned int dataVersion;
@property(readonly, copy) NSString *description;
- (id)initWithIsActive:(_Bool)arg1 sourceBundleID:(id)arg2 activitySessionID:(id)arg3 activityID:(id)arg4 messagesChatGuid:(id)arg5 participantHandles:(id)arg6 memberHandles:(id)arg7 experienceType:(id)arg8;	// IMP=0x000000000008769f
- (id)init;	// IMP=0x0000000000087699

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
