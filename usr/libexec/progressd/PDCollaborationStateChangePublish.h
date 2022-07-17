//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary;

@interface PDCollaborationStateChangePublish
{
    long long _totalStateChanges;	// 24 = 0x18
    NSArray *_requestedStateChanges;	// 32 = 0x20
    NSMutableDictionary *_statesByError;	// 40 = 0x28
    NSMutableArray *_statesFromServer;	// 48 = 0x30
    NSMutableArray *_statesInConflict;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000170819
@property(readonly, nonatomic) NSMutableArray *statesInConflict; // @synthesize statesInConflict=_statesInConflict;
@property(readonly, nonatomic) NSMutableArray *statesFromServer; // @synthesize statesFromServer=_statesFromServer;
@property(readonly, nonatomic) NSMutableDictionary *statesByError; // @synthesize statesByError=_statesByError;
@property(readonly, nonatomic) NSArray *requestedStateChanges; // @synthesize requestedStateChanges=_requestedStateChanges;
- (id)errorWithUserInfo;	// IMP=0x00100000001705d3
- (_Bool)processPayloadFromResponse:(id)arg1 error:(id *)arg2;	// IMP=0x001000000016fe7e
- (_Bool)stopProcessingIfResponseStatusPayloadFailed;	// IMP=0x001000000016fe76
- (id)requestData;	// IMP=0x001000000016eea9
- (void)consolidateChangesByTargetAndOwner;	// IMP=0x001000000016eb30
- (id)assetsPayloadsForStateChange:(id)arg1;	// IMP=0x001000000016e0a2
- (MISSING_TYPE *)mergeExistingLocalStateIntoRequestStateChange: /* Error: Ran out of types for this method. */;	// IMP=0x001000000016d94b
- (long long)maxExecutionCount;	// IMP=0x001000000016d81d
- (_Bool)wantsToExecute;	// IMP=0x001000000016d7f9
- (Class)expectedResponseClass;	// IMP=0x001000000016d7e8
- (id)acceptContentType;	// IMP=0x001000000016d7db
- (id)requestContentType;	// IMP=0x001000000016d7ce
- (id)endpointIdentifier;	// IMP=0x001000000016d7c1
- (_Bool)acceptsPayloadType:(int)arg1;	// IMP=0x001000000016d7a8
- (_Bool)shouldProcessPayloadWithStatusCode:(int)arg1;	// IMP=0x001000000016d796
- (_Bool)shouldSaveStateChangeWithStatusCode:(int)arg1;	// IMP=0x001000000016d77f
- (_Bool)allowMixedResponseStatusCode;	// IMP=0x001000000016d777
- (id)logSubsystem;	// IMP=0x001000000016d763
- (id)initWithDatabase:(id)arg1 changedStates:(id)arg2;	// IMP=0x001000000016d67c

@end
