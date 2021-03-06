//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpeakerRecognition/NSObject-Protocol.h>

@class NSData, NSDictionary, SSRSpeakerRecognitionContext;
@protocol SSRSpeakerRecognizerDelegate;

@protocol SSRSpeakerRecognizer <NSObject>
@property(readonly, nonatomic) NSDictionary *lastScoreCard;
- (void)resetWithContext:(SSRSpeakerRecognitionContext *)arg1;
- (void)endAudio;
- (void)processAudioData:(NSData *)arg1 numSamples:(unsigned long long)arg2;
- (id)initWithContext:(SSRSpeakerRecognitionContext *)arg1 delegate:(id <SSRSpeakerRecognizerDelegate>)arg2;
@end

