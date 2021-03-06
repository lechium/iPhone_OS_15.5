//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableSet, NSString, NSXPCListener, TIImageCacheClient;
@protocol OS_dispatch_queue;

@interface TIImageCacheServer : NSObject
{
    NSXPCListener *_listener;	// 8 = 0x8
    TIImageCacheClient *_imageCache;	// 16 = 0x10
    NSMutableSet *_invalidBundles;	// 24 = 0x18
    MISSING_TYPE *_dispatchQueue;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0020000000002b6b
- (void).cxx_destruct;	// IMP=0x0020000000003621
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)cacheItem:(id)arg1 key:(id)arg2 group:(id)arg3;	// IMP=0x0010000000003515
- (void)_logInvalidConnection;	// IMP=0x001000000000345e
- (_Bool)_isValidItem:(id)arg1;	// IMP=0x00100000000033bf
- (_Bool)_isValidKey:(id)arg1 group:(id)arg2;	// IMP=0x0010000000003066
- (void)_createImageCacheIfNecessary;	// IMP=0x001000000000301a
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;	// IMP=0x0010000000002deb
- (id)_bundleIdForConnection:(id)arg1;	// IMP=0x0010000000002d6c
- (void)dealloc;	// IMP=0x0010000000002cee
- (id)init;	// IMP=0x0010000000002bfc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

