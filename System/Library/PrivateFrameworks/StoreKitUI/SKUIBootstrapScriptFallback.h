//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <StoreKitUI/IKAppScriptFallbackHandler-Protocol.h>

@class NSString, NSURL;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SKUIBootstrapScriptFallback : NSObject <IKAppScriptFallbackHandler>
{
    NSURL *_cacheFolder;	// 8 = 0x8
    NSString *_cacheFilename;	// 16 = 0x10
    double _maximumAge;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_queue;	// 32 = 0x20
}

+ (id)cacheFilenameForStoreFrontIdentifier:(id)arg1;	// IMP=0x00000000003681c4
+ (id)defaultCacheFolder;	// IMP=0x000000000036802a
- (void).cxx_destruct;	// IMP=0x0000000000369a2d
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property double maximumAge; // @synthesize maximumAge=_maximumAge;
@property(readonly, copy, nonatomic) NSString *cacheFilename; // @synthesize cacheFilename=_cacheFilename;
@property(readonly, nonatomic) NSURL *cacheFolder; // @synthesize cacheFolder=_cacheFolder;
- (_Bool)_setCacheAge:(id)arg1 error:(id *)arg2;	// IMP=0x00000000003697ff
- (void)_runWhenBackgroundWorkFinished:(CDUnknownBlockType)arg1;	// IMP=0x000000000036976c
- (void)_logError:(id)arg1 forOperation:(id)arg2;	// IMP=0x0000000000369592
@property(readonly, nonatomic) long long _unsynchronizedState;
- (void)_createCacheDirectoriesIfNeeded;	// IMP=0x00000000003692f9
- (void)invalidate;	// IMP=0x0000000000368dfc
- (void)scriptEvaluated:(id)arg1;	// IMP=0x0000000000368c9b
- (id)retrieveScript:(id *)arg1;	// IMP=0x0000000000368830
- (_Bool)canFallbackForError:(id)arg1;	// IMP=0x0000000000368605
@property(readonly) _Bool isBagAvailable;
@property(readonly, copy, nonatomic) NSURL *cachedFileLocation;
@property(readonly) long long state;
- (id)init;	// IMP=0x00000000003683a0
- (id)initWithFilename:(id)arg1;	// IMP=0x000000000036832a
- (id)initWithCacheFolder:(id)arg1 filename:(id)arg2;	// IMP=0x0000000000368243

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

