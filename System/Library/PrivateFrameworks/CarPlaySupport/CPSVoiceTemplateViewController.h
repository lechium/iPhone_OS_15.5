//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPVoiceTemplateProviding-Protocol.h>

@class CPSVoiceView, NSString, UITapGestureRecognizer;

@interface CPSVoiceTemplateViewController <CPVoiceTemplateProviding>
{
    CPSVoiceView *_titleView;	// 8 = 0x8
    UITapGestureRecognizer *_backGestureRecognizer;	// 16 = 0x10
    double _lastVoiceTemplateStateChangeTime;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000049c4
@property(nonatomic) double lastVoiceTemplateStateChangeTime; // @synthesize lastVoiceTemplateStateChangeTime=_lastVoiceTemplateStateChangeTime;
@property(retain, nonatomic) UITapGestureRecognizer *backGestureRecognizer; // @synthesize backGestureRecognizer=_backGestureRecognizer;
@property(retain, nonatomic) CPSVoiceView *titleView; // @synthesize titleView=_titleView;
- (void)_activateStateWithIdentifier:(id)arg1;	// IMP=0x0000000000004645
- (id)_stateWithIdentifier:(id)arg1;	// IMP=0x0000000000004487
- (void)_backGestureFired:(id)arg1;	// IMP=0x000000000000444b
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x00000000000043bb
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x000000000000432b
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000000423d
- (void)_viewDidLoad;	// IMP=0x0000000000003c14
- (id)voiceTemplate;	// IMP=0x0000000000003b8f
- (id)initWithVoiceTemplate:(id)arg1 templateDelegate:(id)arg2 templateEnvironment:(id)arg3;	// IMP=0x0000000000003b0b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

