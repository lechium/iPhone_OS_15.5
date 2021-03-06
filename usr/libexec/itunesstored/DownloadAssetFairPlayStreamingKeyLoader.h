//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IPodLibraryItem, NSMutableDictionary, NSString;
@protocol DownloadAssetFairPlayStreamingKeyLoaderDelegate, OS_dispatch_queue;

@interface DownloadAssetFairPlayStreamingKeyLoader : NSObject
{
    NSObject<OS_dispatch_queue> *_resourceLoaderQueue;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_persistenceQueue;	// 16 = 0x10
    NSMutableDictionary *_mutableCachedKeys;	// 24 = 0x18
    id <DownloadAssetFairPlayStreamingKeyLoaderDelegate> _delegate;	// 32 = 0x20
    long long _downloadIdentifier;	// 40 = 0x28
    IPodLibraryItem *_libraryItem;	// 48 = 0x30
    long long _rentalIdentifier;	// 56 = 0x38
    long long _storeItemIdentifier;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000000a7be3
@property(readonly, nonatomic) long long storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(readonly, nonatomic) long long rentalIdentifier; // @synthesize rentalIdentifier=_rentalIdentifier;
@property(readonly, nonatomic) IPodLibraryItem *libraryItem; // @synthesize libraryItem=_libraryItem;
@property(readonly) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property __weak id <DownloadAssetFairPlayStreamingKeyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_track;	// IMP=0x00100000000a7852
- (void)_persistURI:(id)arg1 persistentContentKey:(id)arg2;	// IMP=0x00100000000a784c
- (void)_persistKeys;	// IMP=0x00100000000a7846
- (id)_pastisKeyServerURL;	// IMP=0x00100000000a778e
- (id)_pastisCertificateURL;	// IMP=0x00100000000a76d6
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;	// IMP=0x00100000000a76ce
- (void)persistKeys;	// IMP=0x00100000000a76c8
- (void)applyResourceLoaderDelegate:(id)arg1;	// IMP=0x00100000000a76a9
- (id)initWithDownloadEntity:(id)arg1;	// IMP=0x00100000000a752e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

