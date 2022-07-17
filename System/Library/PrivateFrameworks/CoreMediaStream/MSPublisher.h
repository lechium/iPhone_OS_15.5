//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreMediaStream/MSPublishStorageProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublishStreamsProtocolDelegate-Protocol.h>
#import <CoreMediaStream/MSPublisher-Protocol.h>

@class MSMediaStreamDaemon, MSObjectQueue, MSPublishStreamsProtocol, NSArray, NSMutableArray, NSMutableDictionary, NSString, NSURL;
@protocol MSPublishStorageProtocol, MSPublisherDelegate;

@interface MSPublisher <MSPublisher, MSPublishStreamsProtocolDelegate, MSPublishStorageProtocolDelegate>
{
    id <MSPublisherDelegate> _delegate;	// 48 = 0x30
    MSMediaStreamDaemon *_daemon;	// 56 = 0x38
    int _state;	// 64 = 0x40
    MSObjectQueue *_uploadQueue;	// 72 = 0x48
    MSObjectQueue *_derivativesQueue;	// 80 = 0x50
    MSObjectQueue *_quarantinedQueue;	// 88 = 0x58
    NSArray *_pendingDerivativesQueue;	// 96 = 0x60
    NSMutableArray *_requestAuthQueue;	// 104 = 0x68
    unsigned long long _sendingQueueCount;	// 112 = 0x70
    NSMutableArray *_sendingQueue;	// 120 = 0x78
    NSMutableDictionary *_fileHashToAssetMap;	// 128 = 0x80
    MSPublishStreamsProtocol *_protocol;	// 136 = 0x88
    id <MSPublishStorageProtocol> _storageProtocol;	// 144 = 0x90
    NSURL *_storageProtocolURL;	// 152 = 0x98
    NSMutableArray *_tempFiles;	// 160 = 0xa0
    NSMutableDictionary *_maxSizeByUTI;	// 168 = 0xa8
    long long _publishTargetByteCount;	// 176 = 0xb0
    int _publishBatchSize;	// 184 = 0xb8
    int _maxErrorCount;	// 188 = 0xbc
}

+ (_Bool)isInRetryState;	// IMP=0x0000000000011d3f
+ (void)stopAllActivities;	// IMP=0x0000000000011c0b
+ (id)personIDsWithOutstandingActivities;	// IMP=0x0000000000011bc4
+ (id)nextActivityDateForPersonID:(id)arg1;	// IMP=0x0000000000011b5c
+ (id)nextActivityDate;	// IMP=0x00000000000119b1
+ (void)_setMasterNextActivityDate:(id)arg1 forPersonID:(id)arg2;	// IMP=0x00000000000117f9
+ (void)forgetPersonID:(id)arg1;	// IMP=0x0000000000011775
+ (id)_clearInstantiatedPublishersByPersonID;	// IMP=0x0000000000011759
+ (id)existingPublisherForPersonID:(id)arg1;	// IMP=0x0000000000011740
+ (id)publisherForPersonID:(id)arg1;	// IMP=0x0000000000011621
- (void).cxx_destruct;	// IMP=0x000000000001109d
@property(nonatomic) int publishBatchSize; // @synthesize publishBatchSize=_publishBatchSize;
@property(nonatomic) long long publishTargetByteCount; // @synthesize publishTargetByteCount=_publishTargetByteCount;
@property(retain, nonatomic) NSURL *storageProtocolURL; // @synthesize storageProtocolURL=_storageProtocolURL;
@property(nonatomic) MSMediaStreamDaemon *daemon; // @synthesize daemon=_daemon;
@property(nonatomic) id <MSPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_isInRetryState;	// IMP=0x0000000000010fcd
- (void)stop;	// IMP=0x0000000000010fbb
- (void)abort;	// IMP=0x0000000000010fa9
- (void)_forget;	// IMP=0x0000000000010f62
- (void)_abort;	// IMP=0x0000000000010c7c
- (id)_abortedError;	// IMP=0x0000000000010c20
- (int)_stop;	// IMP=0x0000000000010b55
- (void)publishStreamsProtocol:(id)arg1 didFinishSendingUploadCompleteError:(id)arg2;	// IMP=0x000000000001021b
- (void)_sendUploadComplete;	// IMP=0x00000000000101a4
- (void)publishStorageProtocolDidFinishPublishingAllAssets:(id)arg1;	// IMP=0x000000000000e7c8
- (void)_categorizeError:(id)arg1 setOutIsIgnorable:(_Bool *)arg2 setOutIsCounted:(_Bool *)arg3 setOutIsFatal:(_Bool *)arg4 setOutNeedsBackoff:(_Bool *)arg5 setOutIsTemporary:(_Bool *)arg6 setOutIsTokenAuth:(_Bool *)arg7 setOutIsAuthError:(_Bool *)arg8;	// IMP=0x000000000000e655
- (void)publishStorageProtocol:(id)arg1 didFinishUsingFD:(int)arg2 forAsset:(id)arg3;	// IMP=0x000000000000e4b9
- (int)publishStorageProtocol:(id)arg1 didRequestFDForAsset:(id)arg2;	// IMP=0x000000000000ddfd
- (void)publishStorageProtocol:(id)arg1 didFinishUploadingAsset:(id)arg2 error:(id)arg3;	// IMP=0x000000000000dc57
- (void)_sendFilesToMMCS;	// IMP=0x000000000000d478
- (void)publishStreamsProtocol:(id)arg1 didReceiveAuthenticationError:(id)arg2;	// IMP=0x000000000000d317
- (void)publishStreamsProtocol:(id)arg1 didFinishUploadingMetadataResponse:(id)arg2 error:(id)arg3;	// IMP=0x000000000000b3eb
- (id)_invalidStreamsResponseErrorUnderlyingError:(id)arg1;	// IMP=0x000000000000b342
- (void)_sendMetadataToStreams;	// IMP=0x000000000000a8a4
- (void)submitAssetCollectionsForPublication:(id)arg1 skipAssetCollections:(id)arg2;	// IMP=0x00000000000093da
- (void)_didFinishUsingAssetCollections:(id)arg1;	// IMP=0x0000000000009196
- (void)_removeAssetsInAssetCollectionWrappersFromAssetMap:(id)arg1;	// IMP=0x0000000000008e25
- (void)_removeAssetFromFileHashMap:(id)arg1;	// IMP=0x0000000000008d35
- (void)_addAssetToFileHashMap:(id)arg1;	// IMP=0x0000000000008b2b
- (void)_requestDerivatives;	// IMP=0x00000000000080e8
- (void)publish;	// IMP=0x0000000000007e12
- (_Bool)_isAllowedToUpload;	// IMP=0x0000000000007c83
- (void)reenqueueQuarantinedAssetCollections;	// IMP=0x0000000000007794
- (id)_checkObjectWrappers:(id)arg1;	// IMP=0x00000000000074ab
- (id)_checkAssetCollectionFiles:(id)arg1;	// IMP=0x000000000000710b
- (id)_collectionWithNoDerivatives:(id)arg1;	// IMP=0x0000000000007006
- (_Bool)_verifyAssetFile:(id)arg1;	// IMP=0x0000000000006f1f
- (void)_quarantineOrDiscardWrappers:(id)arg1 withError:(id)arg2;	// IMP=0x0000000000006a91
- (void)_registerAllAssetsForWrapper:(id)arg1;	// IMP=0x00000000000068c1
- (void)_registerAsset:(id)arg1;	// IMP=0x0000000000006856
- (void)_serverSideConfigurationDidChange:(id)arg1;	// IMP=0x0000000000006634
- (void)_refreshServerSideConfiguredParameters;	// IMP=0x0000000000005ffa
- (void)computeHashForAsset:(id)arg1;	// IMP=0x0000000000005fdd
- (_Bool)dequeueAssetCollectionWithGUIDs:(id)arg1 outError:(id *)arg2;	// IMP=0x0000000000005b38
- (_Bool)enqueueAssetCollections:(id)arg1 outError:(id *)arg2;	// IMP=0x000000000000578d
- (void)_updateMasterManifest;	// IMP=0x0000000000005629
- (void)dealloc;	// IMP=0x00000000000055eb
- (void)deactivate;	// IMP=0x000000000000544b
- (id)initWithPersonID:(id)arg1 baseURL:(id)arg2;	// IMP=0x0000000000005010

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
