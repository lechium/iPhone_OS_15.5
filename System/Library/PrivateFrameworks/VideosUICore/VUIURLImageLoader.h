//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideosUICore/NSURLSessionDataDelegate-Protocol.h>
#import <VideosUICore/NSURLSessionTaskDelegate-Protocol.h>
#import <VideosUICore/VUIImageLoader-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface VUIURLImageLoader : NSObject <NSURLSessionTaskDelegate, NSURLSessionDataDelegate, VUIImageLoader>
{
    _Bool _imageRotationEnabled;	// 8 = 0x8
    NSURLSession *_session;	// 16 = 0x10
    NSMutableDictionary *_loadOptionsByID;	// 24 = 0x18
    NSMutableDictionary *_loadIDsByURL;	// 32 = 0x20
    NSMutableDictionary *_taskOptionsByURL;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_processingQueue;	// 48 = 0x30
}

+ (id)sharedInstance;	// IMP=0x00000000000304ad
- (void).cxx_destruct;	// IMP=0x0000000000032f39
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(readonly, nonatomic) NSMutableDictionary *taskOptionsByURL; // @synthesize taskOptionsByURL=_taskOptionsByURL;
@property(readonly, nonatomic) NSMutableDictionary *loadIDsByURL; // @synthesize loadIDsByURL=_loadIDsByURL;
@property(readonly, nonatomic) NSMutableDictionary *loadOptionsByID; // @synthesize loadOptionsByID=_loadOptionsByID;
@property(readonly, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic, getter=isImageRotationEnabled) _Bool imageRotationEnabled; // @synthesize imageRotationEnabled=_imageRotationEnabled;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x00000000000320ed
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031fef
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x0000000000031d99
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000031b75
- (void)cancelLoad:(id)arg1;	// IMP=0x000000000003170b
- (id)loadImageForObject:(id)arg1 scaleToSize:(struct CGSize)arg2 cropToFit:(_Bool)arg3 imageDirection:(long long)arg4 requestLoader:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00000000000309bb
- (id)imageKeyForObject:(id)arg1;	// IMP=0x0000000000030861
- (id)URLForObject:(id)arg1;	// IMP=0x00000000000307d8
- (void)_executeOnProcessingQueue:(CDUnknownBlockType)arg1;	// IMP=0x00000000000306b8
- (id)init;	// IMP=0x0000000000030502

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

