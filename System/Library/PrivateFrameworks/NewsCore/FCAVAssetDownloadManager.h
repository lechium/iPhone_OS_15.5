//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/AVAssetDownloadDelegate-Protocol.h>

@class FCAsyncOnceOperation, FCThreadSafeMutableDictionary, NFLazy, NSString;
@protocol FCAVAssetCacheType, FCAVAssetKeyCacheType;

@interface FCAVAssetDownloadManager : NSObject <AVAssetDownloadDelegate>
{
    id <FCAVAssetCacheType> _assetCache;	// 8 = 0x8
    id <FCAVAssetKeyCacheType> _keyCache;	// 16 = 0x10
    FCAsyncOnceOperation *_restoreBackgroundDownloadsOnce;	// 24 = 0x18
    NFLazy *_URLSession;	// 32 = 0x20
    FCThreadSafeMutableDictionary *_activeDownloadsByAssetID;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001ae004
- (id)_restoreBackgroundDownloadsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000001ad9cf
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000001ad062
- (void)URLSession:(id)arg1 assetDownloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x00000000001ac977
- (id)init;	// IMP=0x00000000001abf88

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

