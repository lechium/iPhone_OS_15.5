//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFEnumerationParameter.h>

#import <ActionKit/WFActionEventObserver-Protocol.h>

@class NSString, WFAction;

@interface WFSpeakTextVoicePickerParameter : WFEnumerationParameter <WFActionEventObserver>
{
    WFAction *_action;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002be6e8
@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
- (void)action:(id)arg1 parameterStateDidChangeForKey:(id)arg2;	// IMP=0x00000000002be60e
- (id)localizedLabelForPossibleState:(id)arg1;	// IMP=0x00000000002be58a
- (id)possibleStates;	// IMP=0x00000000002be4b2
- (id)defaultSerializedRepresentation;	// IMP=0x00000000002be344
- (_Bool)isHidden;	// IMP=0x00000000002be2fb
- (id)selectedLanguageCode;	// IMP=0x00000000002be1f3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
