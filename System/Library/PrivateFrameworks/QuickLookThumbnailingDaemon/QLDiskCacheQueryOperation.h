//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class NSMutableDictionary, NSObject, _QLCacheThread;
@protocol OS_dispatch_queue;

@interface QLDiskCacheQueryOperation : NSOperation
{
    NSMutableDictionary *_thumbnailRequestBatch;	// 8 = 0x8
    long long _thumbnailRequestCount;	// 16 = 0x10
    _QLCacheThread *_cacheThread;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001a61b
@property(retain) _QLCacheThread *cacheThread; // @synthesize cacheThread=_cacheThread;
@property long long thumbnailRequestCount; // @synthesize thumbnailRequestCount=_thumbnailRequestCount;
@property(retain) NSMutableDictionary *thumbnailRequestBatch; // @synthesize thumbnailRequestBatch=_thumbnailRequestBatch;
- (void)cancel;	// IMP=0x0000000000019ff7
- (void)main;	// IMP=0x00000000000196be
- (_Bool)appendThumbnailRequest:(id)arg1;	// IMP=0x000000000001931b
- (void)dealloc;	// IMP=0x00000000000192ad
- (id)initWithCacheThread:(id)arg1;	// IMP=0x00000000000191e8

@end
