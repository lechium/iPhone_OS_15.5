//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SoundAnalysis/SNSystemAudioAnalyzerProtocol-Protocol.h>

@protocol SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating;

__attribute__((visibility("hidden")))
@interface SNSystemAudioAnalyzerXPCPublisher : NSObject <SNSystemAudioAnalyzerProtocol>
{
    id <SNSystemAudioAnalyzerXPCProtocol><NSXPCProxyCreating> _subscriber;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000009cc5
- (void)setAudioConfiguration:(id)arg1;	// IMP=0x0000000000009bc9
- (void)stop;	// IMP=0x0000000000009ae6
- (void)start;	// IMP=0x0000000000009a03
- (void)removeAllRequests;	// IMP=0x0000000000009920
- (void)removeRequest:(id)arg1;	// IMP=0x0000000000009819
- (_Bool)addRequest:(id)arg1 withObserver:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000094ab
- (id)initWithSubscriber:(id)arg1;	// IMP=0x000000000000942e
- (id)init;	// IMP=0x00000000000093e5

@end
