//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCMClientConnection, MCMXPCMessageOperationDelete, NSArray, NSMutableDictionary;

@interface MCMCommandOperationDelete
{
    _Bool _traverseLinks;	// 8 = 0x8
    _Bool _waitForDiskSpaceReclaim;	// 9 = 0x9
    _Bool _useLocking;	// 10 = 0xa
    _Bool _removeAllCodeSignInfo;	// 11 = 0xb
    _Bool _runFromManifests;	// 12 = 0xc
    NSArray *_concreteContainerIdentities;	// 16 = 0x10
    MCMClientConnection *_clientConnection;	// 24 = 0x18
    NSArray *_containerIdentities;	// 32 = 0x20
    CDUnknownBlockType _onError;	// 40 = 0x28
    MCMXPCMessageOperationDelete *_message;	// 48 = 0x30
    NSMutableDictionary *_referenceCounts;	// 56 = 0x38
}

+ (id)_materializeContainerIdentityFromManifestPlistV1:(id)arg1 userIdentityCache:(id)arg2 error:(id *)arg3;	// IMP=0x0020000000078d94
+ (id)_materializeContainerIdentityFromManifestPlist:(id)arg1 userIdentityCache:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000078c3e
+ (id)_materializeContainerIdentityFromManifestAtURL:(id)arg1 userIdentityCache:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000078919
+ (Class)incomingMessageClass;	// IMP=0x0010000000078908
+ (unsigned long long)command;	// IMP=0x00100000000788fd
+ (id)commandForOperationDeleteFromManifestsUseLocking:(_Bool)arg1 removeAllCodeSignInfo:(_Bool)arg2 userIdentityCache:(id)arg3 onError:(CDUnknownBlockType)arg4;	// IMP=0x0010000000078195
+ (id)commandForOperationDeleteWithContainerIdentities:(id)arg1 useLocking:(_Bool)arg2 removeAllCodeSignInfo:(_Bool)arg3 userIdentityCache:(id)arg4 onError:(CDUnknownBlockType)arg5;	// IMP=0x00100000000780ef
- (void).cxx_destruct;	// IMP=0x0020000000077e46
@property(readonly, nonatomic) _Bool runFromManifests; // @synthesize runFromManifests=_runFromManifests;
@property(readonly, nonatomic) NSMutableDictionary *referenceCounts; // @synthesize referenceCounts=_referenceCounts;
@property(readonly, nonatomic) MCMXPCMessageOperationDelete *message; // @synthesize message=_message;
@property(readonly, nonatomic) CDUnknownBlockType onError; // @synthesize onError=_onError;
@property(readonly, nonatomic) _Bool removeAllCodeSignInfo; // @synthesize removeAllCodeSignInfo=_removeAllCodeSignInfo;
@property(readonly, nonatomic) _Bool useLocking; // @synthesize useLocking=_useLocking;
@property(readonly, nonatomic) NSArray *containerIdentities; // @synthesize containerIdentities=_containerIdentities;
@property(retain, nonatomic) MCMClientConnection *clientConnection; // @synthesize clientConnection=_clientConnection;
@property(readonly, nonatomic) _Bool waitForDiskSpaceReclaim; // @synthesize waitForDiskSpaceReclaim=_waitForDiskSpaceReclaim;
@property(readonly, nonatomic) _Bool traverseLinks; // @synthesize traverseLinks=_traverseLinks;
@property(readonly, nonatomic) NSArray *concreteContainerIdentities; // @synthesize concreteContainerIdentities=_concreteContainerIdentities;
- (id)_stableFileNameForDataOperationPlistWithContainerIdentity:(id)arg1;	// IMP=0x0010000000077b07
- (_Bool)_removeDeleteManifestIfExistsForContainerIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007795b
- (id)_urlForDeleteManifestWithContainerIdentity:(id)arg1;	// IMP=0x0010000000077881
- (_Bool)_writeDeleteManifestForItem:(id)arg1 error:(id *)arg2;	// IMP=0x001000000007725f
- (_Bool)_writeDeleteManifestsForItems:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000076f7c
- (void)_setManifestURLsForItems:(id)arg1;	// IMP=0x0010000000076c5c
- (id)_groupContainersToDeleteWhenReconcilingRemovalOfContainer:(id)arg1;	// IMP=0x0010000000076729
- (unsigned long long)_preflightReferenceCountAfterRemovingRefererenceToIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x001000000007669c
- (id)_preflightReferenceCountsForContainerClass:(unsigned long long)arg1;	// IMP=0x001000000007658a
- (id)_replyFromRelayToDaemonWithContainerIdentities:(id)arg1;	// IMP=0x0010000000075f26
- (void)_removeLinksTargetingItems:(id)arg1;	// IMP=0x001000000007547f
- (id)_deleteItems:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000074308
- (id)_containerIdentitiesToDeleteTransitivelyFromMetadata:(id)arg1;	// IMP=0x0010000000073908
- (id)_containersToDeleteRecursivelyStartingWithContainerIdentities:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000072bb8
- (_Bool)fromQueue:(id)arg1 executeWithError:(unsigned long long *)arg2;	// IMP=0x0010000000071b1c
- (id)initWithMessage:(id)arg1 clientIdentity:(id)arg2 userIdentityCache:(id)arg3;	// IMP=0x00100000000719c7
- (id)initWithContainerIdentities:(id)arg1 traverseLinks:(_Bool)arg2 waitForDiskSpaceReclaim:(_Bool)arg3 useLocking:(_Bool)arg4 removeAllCodeSignInfo:(_Bool)arg5 runFromManifests:(_Bool)arg6 userIdentityCache:(id)arg7 onError:(CDUnknownBlockType)arg8;	// IMP=0x001000000007188c

@end
