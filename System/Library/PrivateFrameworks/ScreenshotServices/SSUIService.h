//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SSUIServiceClient;

@interface SSUIService : NSObject
{
    SSUIServiceClient *_client;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000000bd9d
- (void)_runPPTNamed:(id)arg1 numberOfRequiredScreenshots:(unsigned long long)arg2;	// IMP=0x000000000000bd0e
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x000000000000bc4b
- (void)showScreenshotUIForImage:(id)arg1 options:(id)arg2;	// IMP=0x000000000000bc36
- (void)showScreenshotUI;	// IMP=0x000000000000bbfa
- (id)init;	// IMP=0x000000000000bba9

@end

