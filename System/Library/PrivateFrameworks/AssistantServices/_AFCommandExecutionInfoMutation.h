//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFCommandExecutionInfoMutating-Protocol.h>

@class AFCommandExecutionInfo, AFEndpointInfo, AFHomeInfo, AFInstanceInfo, AFPeerInfo, AFRequestHandlingContext, AFSpeechInfo, NSArray, NSDictionary, NSString, NSUUID;

@interface _AFCommandExecutionInfoMutation : NSObject <AFCommandExecutionInfoMutating>
{
    AFCommandExecutionInfo *_baseModel;	// 8 = 0x8
    NSString *_executionID;	// 16 = 0x10
    NSString *_requestID;	// 24 = 0x18
    NSUUID *_turnId;	// 32 = 0x20
    AFPeerInfo *_originPeerInfo;	// 40 = 0x28
    AFHomeInfo *_currentHomeInfo;	// 48 = 0x30
    AFEndpointInfo *_endpointInfo;	// 56 = 0x38
    AFInstanceInfo *_instanceInfo;	// 64 = 0x40
    AFSpeechInfo *_speechInfo;	// 72 = 0x48
    AFRequestHandlingContext *_requestHandlingContextSnapshot;	// 80 = 0x50
    NSArray *_deviceRestrictions;	// 88 = 0x58
    NSDictionary *_userInfo;	// 96 = 0x60
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasExecutionID:1;
        unsigned int hasRequestID:1;
        unsigned int hasTurnId:1;
        unsigned int hasOriginPeerInfo:1;
        unsigned int hasCurrentHomeInfo:1;
        unsigned int hasEndpointInfo:1;
        unsigned int hasInstanceInfo:1;
        unsigned int hasSpeechInfo:1;
        unsigned int hasRequestHandlingContextSnapshot:1;
        unsigned int hasDeviceRestrictions:1;
        unsigned int hasUserInfo:1;
    } _mutationFlags;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000159501
- (id)generate;	// IMP=0x000000000015915e
- (void)setUserInfo:(id)arg1;	// IMP=0x000000000015913c
- (void)setDeviceRestrictions:(id)arg1;	// IMP=0x000000000015911a
- (void)setRequestHandlingContextSnapshot:(id)arg1;	// IMP=0x00000000001590f8
- (void)setSpeechInfo:(id)arg1;	// IMP=0x00000000001590d6
- (void)setInstanceInfo:(id)arg1;	// IMP=0x00000000001590b6
- (void)setEndpointInfo:(id)arg1;	// IMP=0x0000000000159096
- (void)setCurrentHomeInfo:(id)arg1;	// IMP=0x0000000000159076
- (void)setOriginPeerInfo:(id)arg1;	// IMP=0x0000000000159056
- (void)setTurnId:(id)arg1;	// IMP=0x0000000000159036
- (void)setRequestID:(id)arg1;	// IMP=0x0000000000159016
- (void)setExecutionID:(id)arg1;	// IMP=0x0000000000158ff6
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000158f8b
- (id)init;	// IMP=0x0000000000158f77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
