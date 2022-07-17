//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXHARingBuffer, NSMutableDictionary, NSTimer;
@protocol OS_dispatch_queue;

@interface AXSDUltronInternalRecordingManager : NSObject
{
    double _sampleLength;	// 8 = 0x8
    NSTimer *_cleanupTimer;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_fileProcessingQueue;	// 24 = 0x18
    AXHARingBuffer *_audioRingBuffer;	// 32 = 0x20
    NSMutableDictionary *_detectionResultCollection;	// 40 = 0x28
    NSMutableDictionary *_currentDetections;	// 48 = 0x30
}

+ (void)_reduceFileDirectorySize;	// IMP=0x000000000006355f
+ (_Bool)_cleanupUltronFiles:(id)arg1;	// IMP=0x0000000000061ccc
+ (id)_retrieveFilesOlderThan:(double)arg1;	// IMP=0x0000000000061882
+ (id)filesNearestDate:(id)arg1;	// IMP=0x0000000000061559
+ (id)_directory;	// IMP=0x0000000000061432
+ (id)path;	// IMP=0x0000000000061425
+ (void)cleanupUltron;	// IMP=0x00000000000611e4
+ (void)unenroll;	// IMP=0x000000000006115c
+ (void)enroll;	// IMP=0x0000000000061035
+ (_Bool)isEnrolled;	// IMP=0x0000000000060fcb
+ (id)defaults;	// IMP=0x0000000000060f9b
- (void).cxx_destruct;	// IMP=0x00000000000642c5
- (id)audioFileSettings;	// IMP=0x0000000000063482
- (id)getDictionaryForListenType;	// IMP=0x00000000000633ea
- (void)_recordResultToFile:(id)arg1;	// IMP=0x00000000000621f6
- (void)saveDetectionResult:(id)arg1;	// IMP=0x0000000000061f31
- (void)listenEngineFailedToStartWithError:(id)arg1;	// IMP=0x0000000000061c8b
- (void)trackBuffer:(id)arg1 atTime:(id)arg2;	// IMP=0x0000000000061bf5
- (void)dealloc;	// IMP=0x0000000000060f59
- (id)initWithSampleLength:(double)arg1 bufferSize:(double)arg2;	// IMP=0x0000000000060cd3

@end
