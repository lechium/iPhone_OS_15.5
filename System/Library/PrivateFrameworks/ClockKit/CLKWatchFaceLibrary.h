//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CLKWatchFaceLibrary : NSObject
{
    NSObject<OS_dispatch_queue> *_helperQueue;	// 8 = 0x8
}

+ (_Bool)_unzipFile:(id)arg1 toPath:(id)arg2;	// IMP=0x000000000005db0c
+ (id)errorWithCode:(long long)arg1;	// IMP=0x000000000005d01e
+ (id)sharedInstance;	// IMP=0x000000000005c9ac
- (void).cxx_destruct;	// IMP=0x000000000005df03
- (void)_importWatchFaceAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005dd94
- (void)_validateWatchFaceAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005d12c
- (void)_addWatchFaceAtURL:(id)arg1 shouldValidate:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005cbab
- (void)addWatchFaceAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000005cab5
- (id)init;	// IMP=0x000000000005ca31

@end
