//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class SVXSpeechSynthesisRequest;

@protocol SVXClientSpeechSynthesisServicing <NSObject>
- (void)stopRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)cancelPendingRequest:(SVXSpeechSynthesisRequest *)arg1;
- (void)enqueueRequest:(SVXSpeechSynthesisRequest *)arg1 completion:(void (^)(SVXSpeechSynthesisResult *))arg2;
- (void)synthesizeRequest:(SVXSpeechSynthesisRequest *)arg1 audioChunkHandler:(void (^)(VSAudioData *, unsigned long long))arg2 completion:(void (^)(SVXSpeechSynthesisResult *))arg3;
- (void)synthesizeRequest:(SVXSpeechSynthesisRequest *)arg1 completion:(void (^)(SVXSpeechSynthesisResult *))arg2;
- (void)prewarmRequest:(SVXSpeechSynthesisRequest *)arg1;
@end

