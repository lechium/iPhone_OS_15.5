//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAccessibilityStateMutating-Protocol.h>

@class AFAccessibilityState, NSString;

@interface _AFAccessibilityStateMutation : NSObject <AFAccessibilityStateMutating>
{
    AFAccessibilityState *_baseModel;	// 8 = 0x8
    long long _isVoiceOverTouchEnabled;	// 16 = 0x10
    long long _isVibrationDisabled;	// 24 = 0x18
    struct _mutationFlags {
        unsigned int isDirty:1;
        unsigned int hasIsVoiceOverTouchEnabled:1;
        unsigned int hasIsVibrationDisabled:1;
    } _mutationFlags;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000045020
- (id)generate;	// IMP=0x0000000000044f6e
- (void)setIsVibrationDisabled:(long long)arg1;	// IMP=0x0000000000044f60
- (void)setIsVoiceOverTouchEnabled:(long long)arg1;	// IMP=0x0000000000044f52
- (id)initWithBaseModel:(id)arg1;	// IMP=0x0000000000044ee7
- (id)init;	// IMP=0x0000000000044ed3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
