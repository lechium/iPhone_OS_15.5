//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSRSpeakerAnalyzerSAT : NSObject
{
}

- (id)getVoiceRecognizerResults;	// IMP=0x000000000004f477
- (id)resetForNewRequest;	// IMP=0x000000000004f46f
- (void)endAudio;	// IMP=0x000000000004f469
- (void)processAudioData:(id)arg1 numSamples:(unsigned long long)arg2;	// IMP=0x000000000004f463
- (id)initWithVoiceRecognitionContext:(id)arg1 delegate:(id)arg2 queue:(id)arg3;	// IMP=0x000000000004f455

@end
