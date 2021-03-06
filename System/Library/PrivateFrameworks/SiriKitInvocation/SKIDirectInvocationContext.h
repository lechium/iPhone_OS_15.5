//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface SKIDirectInvocationContext : NSObject
{
    _Bool _voiceTriggerEnabled;	// 8 = 0x8
    _Bool _textToSpeechEnabled;	// 9 = 0x9
    _Bool _eyesFree;	// 10 = 0xa
    NSString *_inputOrigin;	// 16 = 0x10
    NSString *_interactionType;	// 24 = 0x18
}

+ (id)contextForAnnounceNotifications;	// IMP=0x000000000000386e
+ (id)contextForCarPlayDirectAction;	// IMP=0x00000000000037e1
- (void).cxx_destruct;	// IMP=0x0000000000001673
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=_interactionType;
@property(copy, nonatomic) NSString *inputOrigin; // @synthesize inputOrigin=_inputOrigin;
@property(nonatomic, getter=isEyesFree) _Bool eyesFree; // @synthesize eyesFree=_eyesFree;
@property(nonatomic, getter=isTextToSpeechEnabled) _Bool textToSpeechEnabled; // @synthesize textToSpeechEnabled=_textToSpeechEnabled;
@property(nonatomic, getter=isVoiceTriggerEnabled) _Bool voiceTriggerEnabled; // @synthesize voiceTriggerEnabled=_voiceTriggerEnabled;
- (id)init;	// IMP=0x0000000000001560

@end

