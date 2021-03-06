//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCContentArchivable-Protocol.h>

@class FCContentArchive, FCInterestToken, FCOperation, NFUnfairLock, NSDate, NSError, NSHashTable, NSString, NSURL, NTPBAsset;
@protocol FCAssetDataProvider, FCAssetHandleDelegate, OS_dispatch_group;

@interface FCAssetHandle : NSObject <FCContentArchivable>
{
    id <FCAssetDataProvider> _dataProvider;	// 8 = 0x8
    NSError *_downloadError;	// 16 = 0x10
    NSURL *_remoteURL;	// 24 = 0x18
    FCOperation *_fetchOperation;	// 32 = 0x20
    NSHashTable *_downloadRequests;	// 40 = 0x28
    NSObject<OS_dispatch_group> *_fetchGroup;	// 48 = 0x30
    unsigned long long _countOfPenalizedDownloadAttempts;	// 56 = 0x38
    NSDate *_dateOfLastDownloadAttempt;	// 64 = 0x40
    NFUnfairLock *_stateLock;	// 72 = 0x48
    id <FCAssetHandleDelegate> _delegate;	// 80 = 0x50
    FCInterestToken *_holdToken;	// 88 = 0x58
    NSString *_assetKey;	// 96 = 0x60
    long long _lifetimeHint;	// 104 = 0x68
    NSString *_rawFilePath;	// 112 = 0x70
    NTPBAsset *_assetMetadata;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x000000000007418a
@property(readonly, nonatomic) NSURL *remoteURL;
@property(readonly) NSError *downloadError;
@property(retain) id <FCAssetDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(readonly, nonatomic) FCContentArchive *contentArchive;
- (id)fetchDataProviderWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000073e16
- (id)fetchDataProviderWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000073cd5
@property(readonly, copy, nonatomic) NSString *uniqueKey;
@property(readonly, copy) NSString *filePath;
- (id)downloadIfNeededWithGroup:(id)arg1;	// IMP=0x0000000000073b85
- (id)downloadIfNeededWithCompletionQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072bb5
- (id)downloadIfNeededWithPriority:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000072b58
- (id)downloadIfNeededWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000728a6
- (void)dealloc;	// IMP=0x000000000007283c

@end

