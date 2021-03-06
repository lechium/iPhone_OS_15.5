//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _EARSpeechRecognizer;
@protocol OS_dispatch_queue;

@interface _EARSpeechRecognitionAudioBuffer : NSObject
{
    shared_ptr_809f9c31 _buffer;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    _EARSpeechRecognizer *_speechRecognizer;	// 32 = 0x20
    _Bool _cancelled;	// 40 = 0x28
    _Bool _ended;	// 41 = 0x29
}

+ (void)initialize;	// IMP=0x00000000000f531c
- (id).cxx_construct;	// IMP=0x00000000000f5a4b
- (void).cxx_destruct;	// IMP=0x00000000000f5a1c
- (unsigned long long)packetArrivalTimestampFromAudioTime:(float)arg1;	// IMP=0x00000000000f595c
@property(readonly, nonatomic) double bufferedAudioDuration;
- (void)_detachFromRecognizer;	// IMP=0x00000000000f588c
- (void)_setUnderlyingBuffer:(shared_ptr_809f9c31)arg1;	// IMP=0x00000000000f5730
- (void)cancelRecognition;	// IMP=0x00000000000f567c
- (void)triggerServerSideEndPointer;	// IMP=0x00000000000f55fd
- (void)endAudio;	// IMP=0x00000000000f558c
- (void)addAudioSampleData:(id)arg1;	// IMP=0x00000000000f548e
- (void)addAudioSamples:(const short *)arg1 count:(unsigned long long)arg2;	// IMP=0x00000000000f5424
- (id)_initWithAudioBuffer:(shared_ptr_809f9c31)arg1 speechRecognizer:(id)arg2;	// IMP=0x00000000000f5344

@end

