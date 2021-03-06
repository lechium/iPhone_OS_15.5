//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFSpeechRecordingAlertBehaviorMutating-Protocol.h>

@class AFSpeechRecordingAlertBehavior, NSString;

@interface _AFSpeechRecordingAlertBehaviorMutation : NSObject <AFSpeechRecordingAlertBehaviorMutating>
{
    AFSpeechRecordingAlertBehavior *_baseModel;	// 8 = 0x8
    long long _style;	// 16 = 0x10
    long long _beepSoundID;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasStyle:1;
        unsigned int hasBeepSoundID:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000051ac7
- (id)generate;	// IMP=0x0000000000051a15
- (void)setBeepSoundID:(long long)arg1;	// IMP=0x0000000000051a07
- (void)setStyle:(long long)arg1;	// IMP=0x00000000000519f9
- (id)initWithBaseModel:(id)arg1;	// IMP=0x000000000005198e
- (id)init;	// IMP=0x000000000005197a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

