//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SiriPlaybackControlIntents/SetAudioLanguageIntentHandling-Protocol.h>

@class MISSING_TYPE;

@interface _TtC26SiriPlaybackControlIntents29SetAudioLanguageIntentHandler : NSObject <SetAudioLanguageIntentHandling>
{
    MISSING_TYPE *playbackController;	// 8 = 0x8
    MISSING_TYPE *deviceSelector;	// 48 = 0x30
    MISSING_TYPE *analyticsService;	// 56 = 0x38
    MISSING_TYPE *aceServiceHelper;	// 96 = 0x60
    MISSING_TYPE *deviceState;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000000bb6f0
- (void)confirmSetAudioLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bb130
- (void)resolveLanguageForSetAudioLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bafe0
- (void)resolveDeviceForSetAudioLanguage:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000bad70
- (void)handleSetAudioLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000000ba200
- (id)init;	// IMP=0x00000000000b9ec0

@end

