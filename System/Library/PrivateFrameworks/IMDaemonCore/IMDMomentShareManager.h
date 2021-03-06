//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IMDaemonCore/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMDMomentShareManager : NSObject <PHPhotoLibraryChangeObserver>
{
    NSMutableDictionary *_outstandingFetchResults;	// 8 = 0x8
    NSMutableDictionary *_messageGUIDtoTransferMap;	// 16 = 0x10
    NSMutableDictionary *_messageGUIDtoMessage;	// 24 = 0x18
    NSMutableDictionary *_assetUUIDToTransfersPendingAssetResults;	// 32 = 0x20
}

+ (id)_fetchResultForCuratedOrFirstForMomentShare:(id)arg1;	// IMP=0x000000000002bd4f
+ (id)_fileTransferForAssetUUID:(id)arg1 forMessage:(id)arg2 momentShare:(id)arg3 atIndex:(unsigned long long)arg4;	// IMP=0x000000000002ba78
+ (id)_generateTransfersForAssetUUIDs:(id)arg1 forMessage:(id)arg2 inChat:(id)arg3 momentShare:(id)arg4;	// IMP=0x000000000002b2f0
+ (void)_clearCMMTransfersForCMMMessage:(id)arg1;	// IMP=0x000000000002b01f
+ (void)_requestResourceFileURLsForAsset:(id)arg1 fileTransfer:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000002a418
+ (id)_copiedFileURLFromAssetExportFileURLs:(id)arg1 transferGUID:(id)arg2 error:(id *)arg3;	// IMP=0x000000000002a042
+ (id)_copyItemAtURL:(id)arg1 toTemporaryDirectoryWithName:(id)arg2 isDirectory:(_Bool)arg3 error:(id *)arg4;	// IMP=0x0000000000029d1c
+ (id)_loadCMMTransfersForMessage:(id)arg1;	// IMP=0x000000000002854d
+ (void)fetchMomentShareFromShareURL:(id)arg1 forMessage:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000026d4e
+ (id)sharedInstance;	// IMP=0x00000000000263d0
- (void).cxx_destruct;	// IMP=0x000000000002bf54
@property(retain, nonatomic) NSMutableDictionary *assetUUIDToTransfersPendingAssetResults; // @synthesize assetUUIDToTransfersPendingAssetResults=_assetUUIDToTransfersPendingAssetResults;
@property(retain, nonatomic) NSMutableDictionary *messageGUIDtoMessage; // @synthesize messageGUIDtoMessage=_messageGUIDtoMessage;
@property(retain, nonatomic) NSMutableDictionary *messageGUIDtoTransferMap; // @synthesize messageGUIDtoTransferMap=_messageGUIDtoTransferMap;
@property(retain, nonatomic) NSMutableDictionary *outstandingFetchResults; // @synthesize outstandingFetchResults=_outstandingFetchResults;
- (void)_persistAttachmentAtfileURL:(id)arg1 forFileTransfer:(id)arg2;	// IMP=0x000000000002ab73
- (void)_processAssetsFromFetchResult:(id)arg1 message:(id)arg2;	// IMP=0x00000000000295de
- (void)_requestAssetsForFileTransfers:(id)arg1 withAssetFetch:(id)arg2 forMessage:(id)arg3 momentShare:(id)arg4;	// IMP=0x0000000000029263
- (_Bool)messageHasUnfinishedTransfers:(id)arg1;	// IMP=0x0000000000029100
- (id)_assetUUIDToUnfinishedTransferMapFromTransfers:(id)arg1;	// IMP=0x0000000000028e6e
- (void)regenerateTransfersForMessage:(id)arg1 inChat:(id)arg2 addingAssetWithUUID:(id)arg3;	// IMP=0x0000000000028846
- (void)_processGeneratedCMMMessage:(id)arg1 inChat:(id)arg2 momentShare:(id)arg3;	// IMP=0x000000000002838d
- (void)_processAcceptedCMMMessage:(id)arg1 inChat:(id)arg2 momentShare:(id)arg3;	// IMP=0x00000000000281a4
- (void)_processRegisteredCMMMessage:(id)arg1 inChat:(id)arg2 momentShare:(id)arg3 isRetry:(_Bool)arg4;	// IMP=0x0000000000027a9a
- (void)registerAndAcceptMomentShareForMessage:(id)arg1 inChat:(id)arg2 resetAssetTransfers:(_Bool)arg3;	// IMP=0x0000000000027383
- (void)generateTransfersFromFetchResult:(id)arg1 withContect:(id)arg2;	// IMP=0x0000000000026912
- (void)startMonitoringFetchResult:(id)arg1 withContext:(id)arg2;	// IMP=0x00000000000267d1
- (void)photoLibraryDidChange:(id)arg1;	// IMP=0x0000000000026545
- (id)init;	// IMP=0x0000000000026425

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

