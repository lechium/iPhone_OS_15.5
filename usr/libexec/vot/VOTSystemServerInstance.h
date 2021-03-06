//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXIPCServer;

@interface VOTSystemServerInstance : NSObject
{
    AXIPCServer *_server;	// 8 = 0x8
}

+ (id)serverInstance;	// IMP=0x0040000000127f7c
- (void).cxx_destruct;	// IMP=0x001000000012a809
- (id)isBluetoothBrailleDisplayConnected:(id)arg1;	// IMP=0x001000000012a6f1
- (id)isScreenCurtainEnabled:(id)arg1;	// IMP=0x001000000012a5d9
- (id)isHandwritingInputUIShowing:(id)arg1;	// IMP=0x001000000012a4f6
- (id)isBrailleInputUIShowing:(id)arg1;	// IMP=0x001000000012a3de
- (void)handleAutomationTestingCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000129cbc
- (void)_updateRotorsForElementWithErrorMessage:(id *)arg1;	// IMP=0x0010000000129ba4
- (id)voiceOverCommandTriggered:(id)arg1;	// IMP=0x001000000012905b
- (id)voiceOverGestureTriggered:(id)arg1;	// IMP=0x0010000000128e2f
- (id)voiceOverCurrentFocusedElement:(id)arg1;	// IMP=0x0010000000128cdc
- (id)currentRotorName:(id)arg1;	// IMP=0x0010000000128b39
- (id)lastSpokenContents:(id)arg1;	// IMP=0x001000000012890a
- (id)lastSpokenPhrases:(id)arg1;	// IMP=0x00100000001284f5
- (id)lastSoundsPlayed:(id)arg1;	// IMP=0x0010000000128414
- (id)lastScreenChange:(id)arg1;	// IMP=0x0010000000128330
- (void)dealloc;	// IMP=0x00100000001282eb
- (id)_initServer;	// IMP=0x0010000000127fe1
- (void)_modifyRotorItems:(id)arg1 shouldEnable:(_Bool)arg2;	// IMP=0x001000000012a819

@end

