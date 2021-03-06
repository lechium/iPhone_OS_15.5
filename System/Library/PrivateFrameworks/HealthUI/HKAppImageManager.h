//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSURLSessionDataDelegate-Protocol.h>
#import <HealthUI/NSURLSessionDelegate-Protocol.h>
#import <HealthUI/NSURLSessionTaskDelegate-Protocol.h>

@class NSCache, NSMapTable, NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HKAppImageManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSURLSession *_session;	// 8 = 0x8
    NSMapTable *_containers;	// 16 = 0x10
    NSMutableDictionary *_urlConnections;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_managerQueue;	// 32 = 0x20
    NSCache *_iconCache;	// 40 = 0x28
    NSMutableDictionary *_outstandingRequests;	// 48 = 0x30
}

+ (id)defaultAppIconTableUI;	// IMP=0x000000000029466e
+ (id)defaultAppIcon;	// IMP=0x00000000002944d6
+ (id)sharedImageManager;	// IMP=0x00000000002942e0
- (void).cxx_destruct;	// IMP=0x000000000029763c
@property(retain) NSMutableDictionary *outstandingRequests; // @synthesize outstandingRequests=_outstandingRequests;
@property(retain) NSCache *iconCache; // @synthesize iconCache=_iconCache;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x000000000029717b
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000000297042
- (void)_enqueueRequestForAppIconForIdentifier:(id)arg1;	// IMP=0x00000000002967e0
- (void)_dispatchResponsesForAppIconForIdentifier:(id)arg1 appImage:(id)arg2;	// IMP=0x000000000029651c
- (id)_queue_fetchIconFromLaunchServicesWithIdentifier:(id)arg1;	// IMP=0x00000000002963e2
- (void)_queue_loadAppIconForSource:(id)arg1 onCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000295fdf
- (void)_queue_cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x0000000000295fc9
- (id)_queue_researchStudyIconForSource:(id)arg1;	// IMP=0x0000000000295dc4
- (id)researchStudyIconForSource:(id)arg1;	// IMP=0x0000000000295c87
- (id)iconForDevice:(id)arg1;	// IMP=0x0000000000295bf6
- (void)loadAppImageAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000295773
- (id)_queue_synchronousLoadIconForSource:(id)arg1;	// IMP=0x0000000000294f0d
- (void)loadIconForSource:(id)arg1 syncHandler:(CDUnknownBlockType)arg2 asyncHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000294cbc
- (id)iconForSource:(id)arg1;	// IMP=0x0000000000294b3a
- (void)loadIconForSource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002948bb
- (void)cacheAppIcon:(id)arg1 forIdentifier:(id)arg2;	// IMP=0x00000000002947d1
- (void)clearImageCache;	// IMP=0x0000000000294761
- (id)init;	// IMP=0x0000000000294335

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

