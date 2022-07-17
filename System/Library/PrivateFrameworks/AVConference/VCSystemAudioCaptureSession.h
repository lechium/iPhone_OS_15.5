//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class VCSystemAudioCapture;

__attribute__((visibility("hidden")))
@interface VCSystemAudioCaptureSession : NSObject
{
    struct _opaque_pthread_mutex_t _stateLock;	// 8 = 0x8
    struct AudioStreamBasicDescription _audioBasicDescription;	// 72 = 0x48
    unsigned int _samplesPerFrame;	// 112 = 0x70
    VCSystemAudioCapture *_systemAudioCapture;	// 120 = 0x78
    struct opaqueCMSimpleQueue *_poolQueue;	// 128 = 0x80
    struct opaqueCMSimpleQueue *_outputQueue;	// 136 = 0x88
}

- (void)resetAudioBufferPool;	// IMP=0x00000000001f35ec
- (void)cleanupQueue:(struct opaqueCMSimpleQueue **)arg1;	// IMP=0x00000000001f356b
- (_Bool)createAudioBufferPool;	// IMP=0x00000000001f33ad
- (_Bool)stop;	// IMP=0x00000000001f329e
- (_Bool)start;	// IMP=0x00000000001f31a4
- (void)dealloc;	// IMP=0x00000000001f3070
- (id)initWithConfiguration:(CDStruct_0a4efd25 *)arg1;	// IMP=0x00000000001f292a

@end
