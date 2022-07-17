//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, SNAudioQueueConfiguration, SNAudioRecordingQueueScheduler;

__attribute__((visibility("hidden")))
@interface SNAudioRecordingQueue : NSObject
{
    AVAudioFormat *_recordFormat;	// 8 = 0x8
    SNAudioQueueConfiguration *_audioQueueConfiguration;	// 16 = 0x10
    _Bool _running;	// 24 = 0x18
    struct OpaqueAudioQueue *_audioQueue;	// 32 = 0x20
    SNAudioRecordingQueueScheduler *_aqCallbackScheduler;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000608b0
- (void)_stop;	// IMP=0x000000000006080a
- (void)stop;	// IMP=0x00000000000607f8
- (_Bool)startHandlingBuffersOnQueue:(id)arg1 audioSession:(id)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000604ed
- (void)dealloc;	// IMP=0x00000000000604af
- (id)initWithFormat:(id)arg1 audioQueueConfiguration:(id)arg2;	// IMP=0x00000000000603fe

@end
