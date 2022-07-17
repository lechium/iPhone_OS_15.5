//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NBRemoteObjectClassC
{
}

- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x0040000000012519
- (void)sendDeleteBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000001231f
- (void)sendDeleteBackupRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011f72
- (void)sendCreateBackupResponse:(id)arg1 withRequestIdentifier:(id)arg2 error:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000011d22
- (void)sendCreateBackupRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000119be
- (void)sendRestoreResponse:(id)arg1 withRequestIdentifier:(id)arg2 withSentBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000117c4
- (void)sendBackupPayload:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000011249
- (id)activelyPairingDevice;	// IMP=0x001000000001110c
- (void)sendRestoreRequest:(id)arg1 withResponseBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000010dcd
- (void)sendBackupListResponse:(id)arg1 error:(id)arg2 withRequestIdentifier:(id)arg3 withSentBlock:(CDUnknownBlockType)arg4;	// IMP=0x0010000000010a9a
- (void)sendBackupListRequestWithResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000010569
- (id)protobufFromBackup:(id)arg1;	// IMP=0x001000000000ffd0
- (id)backupFromProtobuf:(id)arg1;	// IMP=0x001000000000f9dc
- (id)class:(Class)arg1 fromBytes:(id)arg2;	// IMP=0x001000000000f73b
- (id)bytesFromClass:(id)arg1;	// IMP=0x001000000000f514
- (id)readWatchFaceFromFile:(id)arg1;	// IMP=0x001000000000f4fb
- (id)writeWatchFaceToFile:(id)arg1;	// IMP=0x001000000000f262
- (id)sha256FromData:(id)arg1;	// IMP=0x001000000000f1a2
- (id)dataFromUUID:(id)arg1;	// IMP=0x001000000000f122
- (id)uuidFromData:(id)arg1;	// IMP=0x001000000000f0a2
- (void)idsHandleDeleteBackupRequest:(id)arg1;	// IMP=0x001000000000ee78
- (void)idsHandlePayloadRestoreRequest:(id)arg1 context:(id)arg2;	// IMP=0x001000000000ed0f
- (void)idsHandleRestoreRequest:(id)arg1;	// IMP=0x001000000000eaa6
- (void)idsHandleBackupListRequest:(id)arg1;	// IMP=0x001000000000e95c
- (void)registerProtobufHandlers;	// IMP=0x001000000000e8b0
- (id)initWithDelegate:(id)arg1 andQueue:(id)arg2;	// IMP=0x001000000000e874

@end
