//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableDictionary, NSString, SDAirDropTransferManager;

__attribute__((visibility("hidden")))
@interface SDAirDropClassroomTransferManager
{
    NSMutableDictionary *_transferIDToProgress;	// 8 = 0x8
    SDAirDropTransferManager *_transferManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000021a8b4
@property(retain, nonatomic) SDAirDropTransferManager *transferManager; // @synthesize transferManager=_transferManager;
- (void)connectionInvalidated:(id)arg1;	// IMP=0x001000000021a740
- (void)connectionEstablished:(id)arg1;	// IMP=0x001000000021a637
- (_Bool)shouldAcceptNewConnection:(id)arg1;	// IMP=0x001000000021a62f
- (id)remoteObjectInterface;	// IMP=0x001000000021a60f
- (id)exportedInterface;	// IMP=0x001000000021a4bf
- (id)machServiceName;	// IMP=0x001000000021a4b2
- (void)alertManager:(id)arg1 cancelingTransferWithRecordID:(id)arg2 withFailureReason:(unsigned long long)arg3;	// IMP=0x001000000021a2d5
- (void)alertManager:(id)arg1 acceptingTransferWithRecordID:(id)arg2 withDestinationURL:(id)arg3 shouldExtractMediaFromPhotosBundlesForRecordID:(_Bool)arg4;	// IMP=0x001000000021a106
- (void)updateTransferWithIdentifier:(id)arg1 withState:(long long)arg2 information:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000021973a
- (void)replaceIconValue:(id)arg1 forKey:(id)arg2;	// IMP=0x001000000021961a
- (id)makeDestinationDirectoryWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000219395
- (void)_enumerateRemoteObjectProxiesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000219383
- (void)invalidate;	// IMP=0x0010000000219354
- (void)activate;	// IMP=0x0010000000219325
- (id)init;	// IMP=0x00100000002192c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
