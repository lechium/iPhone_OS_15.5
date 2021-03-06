//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSService, NSArray, NSMutableSet, NSString;
@protocol MSPSharedTripGroupSessionDelegate, OS_os_transaction;

__attribute__((visibility("hidden")))
@interface MSPSharedTripGroupSession : NSObject
{
    _Bool _joined;	// 8 = 0x8
    NSString *_joinedFromHandle;	// 16 = 0x10
    NSString *_joinedFromAccountIdentifier;	// 24 = 0x18
    _Bool _initiator;	// 32 = 0x20
    NSString *_groupID;	// 40 = 0x28
    unsigned long long _nbClients;	// 48 = 0x30
    NSMutableSet *_liveModeParticipantIdentifiers;	// 56 = 0x38
    IDSService *_sharingIDSService;	// 64 = 0x40
    NSMutableSet *_identifiers;	// 72 = 0x48
    NSObject<OS_os_transaction> *_transaction;	// 80 = 0x50
    NSString *_initiatorIdentifier;	// 88 = 0x58
    NSString *_initiatorDisplayName;	// 96 = 0x60
    id <MSPSharedTripGroupSessionDelegate> _delegate;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0000000000071bf1
@property(nonatomic) __weak id <MSPSharedTripGroupSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *initiatorDisplayName; // @synthesize initiatorDisplayName=_initiatorDisplayName;
@property(readonly, nonatomic) NSString *initiatorIdentifier; // @synthesize initiatorIdentifier=_initiatorIdentifier;
- (void)participantDidLeave:(id)arg1;	// IMP=0x0000000000071998
- (void)participantDidJoin:(id)arg1;	// IMP=0x0000000000071785
- (_Bool)_validParticipant:(id)arg1;	// IMP=0x00000000000714a5
- (id)_currentRoutePath;	// IMP=0x00000000000713f6
- (_Bool)_sendChunkMessage:(id)arg1 to:(id)arg2 packet:(id)arg3 requirement:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0000000000070f18
- (_Bool)sendChunkedMessage:(id)arg1 to:(id)arg2 requirement:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000070663
- (_Bool)sendChunkedMessage:(id)arg1 to:(id)arg2 error:(id *)arg3;	// IMP=0x000000000007064b
- (_Bool)sendCommand:(id)arg1 fromHandle:(id)arg2 fromAccountID:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000070244
- (void)_sharingEndedWithError:(id)arg1;	// IMP=0x0000000000070183
- (void)_sharingEnded;	// IMP=0x000000000007016f
- (_Bool)sessionIsAliveAfterRemovingSharingIdentifiers:(id)arg1;	// IMP=0x000000000007001e
- (void)addSharingWith:(id)arg1;	// IMP=0x000000000006ff48
@property(readonly, nonatomic) _Bool inLiveMode;
- (_Bool)_leaveLiveMode:(id *)arg1;	// IMP=0x000000000006fe50
- (_Bool)_joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006fd13
- (_Bool)leaveLiveModeForced:(id *)arg1;	// IMP=0x000000000006fc78
- (_Bool)leaveLiveModeIfNeeded:(id *)arg1;	// IMP=0x000000000006fb8d
- (_Bool)joinLiveModeFromHandle:(id)arg1 fromAccountID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000006fa6f
@property(readonly, nonatomic) NSArray *accountIdentifiers;
@property(readonly, nonatomic) NSString *identifier;
- (void)dealloc;	// IMP=0x000000000006f95b
- (id)initWithService:(id)arg1 groupID:(id)arg2 initiator:(_Bool)arg3 initiatorIdentifier:(id)arg4;	// IMP=0x000000000006f7de

@end

