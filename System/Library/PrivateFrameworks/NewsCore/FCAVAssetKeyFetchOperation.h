//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPersistableContentKeyRequest, NSData, NSURL;
@protocol FCAVAssetKeyCacheType, FCAVAssetKeyServiceType;

@interface FCAVAssetKeyFetchOperation
{
    NSData *_resultCKCData;	// 8 = 0x8
    CDUnknownBlockType _fetchCompletionHandler;	// 16 = 0x10
    AVPersistableContentKeyRequest *_keyRequest;	// 24 = 0x18
    NSURL *_keyURI;	// 32 = 0x20
    id <FCAVAssetKeyServiceType> _service;	// 40 = 0x28
    id <FCAVAssetKeyCacheType> _cache;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000002962cf
- (void)resetForRetry;	// IMP=0x0000000000295b44
- (_Bool)canRetryWithError:(id)arg1 retryAfter:(id *)arg2;	// IMP=0x0000000000295a94
- (unsigned long long)maxRetries;	// IMP=0x0000000000295a89
- (void)operationWillFinishWithError:(id)arg1;	// IMP=0x0000000000295a40
- (void)performOperation;	// IMP=0x00000000002953ba

@end
