//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriVOX/NSObject-Protocol.h>

@class NSDictionary, NSString, SVXSpeechSynthesisAudio;

@protocol SVXSpeechSynthesisRequestMutating <NSObject>
- (void)setStreamID:(NSString *)arg1;
- (void)setPresynthesizedAudio:(SVXSpeechSynthesisAudio *)arg1;
- (void)setLocalizationKey:(NSString *)arg1;
- (void)setSpeakableContext:(NSDictionary *)arg1;
- (void)setSpeakableText:(NSString *)arg1;
- (void)setOptions:(unsigned long long)arg1;
- (void)setPriority:(long long)arg1;
@end

