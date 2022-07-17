//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSURLSessionDownloadDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSURL *_serverConfigurationURL;	// 8 = 0x8
    NSDictionary *_serverConfigurationDict;	// 16 = 0x10
    NSMutableDictionary *_userDefaultsCache;	// 24 = 0x18
    CDUnknownBlockType _configurationPlistDidUpdateBlock;	// 32 = 0x20
    NSOperationQueue *_downloadQueue;	// 40 = 0x28
    NSURLSession *_urlSession;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_queue;	// 56 = 0x38
    NSObject<OS_dispatch_queue> *_callbackQueue;	// 64 = 0x40
    id <NSObject> _defaultsDidChangeNotificationObserver;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000270326
- (void)dealloc;	// IMP=0x00000000002702b0
- (void)reset;	// IMP=0x000000000027024f
- (void)_reset;	// IMP=0x00000000002701b6
- (void)_loadServerConfigurationDictionary;	// IMP=0x000000000026fe7d
- (void)_parsePlistWithURL:(id)arg1;	// IMP=0x000000000026fafd
- (void)loadCachedServerConfiguration;	// IMP=0x000000000026f99d
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000026f6e0
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x000000000026f664
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;	// IMP=0x000000000026f3ab
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x000000000026f23c
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;	// IMP=0x000000000026ed4f
- (id)defaultsForIdentifier:(id)arg1;	// IMP=0x000000000026eb25
- (id)initWithPersonaID:(id)arg1;	// IMP=0x000000000026e546
- (void)_prepopulateGlobalUserDefaults;	// IMP=0x000000000026e441

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
