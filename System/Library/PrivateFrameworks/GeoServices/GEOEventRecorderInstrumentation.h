//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString;
@protocol OS_dispatch_queue;

@interface GEOEventRecorderInstrumentation : NSObject
{
    NSObject<OS_dispatch_queue> *_loggingQueue;	// 8 = 0x8
    NSString *_filepath;	// 16 = 0x10
    NSString *_geoFilepath;	// 24 = 0x18
    NSString *_movieFilepath;	// 32 = 0x20
    NSDate *_startDate;	// 40 = 0x28
}

+ (void)endInstrumentation;	// IMP=0x000000000112e193
+ (id)defaultInstrumentation;	// IMP=0x000000000112e182
+ (id)initializeDefaultInstrumentation;	// IMP=0x000000000112e145
- (void).cxx_destruct;	// IMP=0x000000000112e8b5
- (void)initializeFilepaths;	// IMP=0x000000000112e63d
- (void)_captureScreenVideo:(id)arg1;	// IMP=0x000000000112e562
- (void)captureEventRecorderScreenVideo;	// IMP=0x000000000112e54c
- (void)writeString:(id)arg1 ToFilepath:(id)arg2;	// IMP=0x000000000112e22f
- (void)captureUserActionLogMessageEvent:(id)arg1;	// IMP=0x000000000112e219
- (void)captureUIEvent:(id)arg1;	// IMP=0x000000000112e203
- (void)_setupLogging;	// IMP=0x000000000112e1f1
- (id)getRecordedFilePaths;	// IMP=0x000000000112e1b0
- (id)init;	// IMP=0x000000000112e0d2

@end
