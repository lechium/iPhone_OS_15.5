//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Translation/VSSpeechSynthesizerDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LTOfflineSpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate>
{
    CDUnknownBlockType _completion;	// 8 = 0x8
}

+ (long long)preferredVoiceGender;	// IMP=0x00000000000282a5
+ (void)initialize;	// IMP=0x0000000000028257
- (void).cxx_destruct;	// IMP=0x0000000000028b87
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange)arg2 forRequest:(id)arg3;	// IMP=0x0000000000028b81
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(_Bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;	// IMP=0x0000000000028955
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 withInstrumentMetrics:(id)arg3;	// IMP=0x000000000002888e
- (void)cancel;	// IMP=0x00000000000287d3
- (void)speak:(id)arg1 withContext:(id)arg2;	// IMP=0x0000000000028458
- (id)initWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000283ce

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
