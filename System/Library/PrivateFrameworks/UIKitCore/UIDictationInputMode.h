//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIKeyboardInputMode, UITouch;

@interface UIDictationInputMode
{
    UITouch *_triggeringTouch;	// 96 = 0x60
    UIKeyboardInputMode *_currentInputModeForDictation;	// 104 = 0x68
}

+ (_Bool)currentInputModeSupportsDictation;	// IMP=0x00000000008e36f7
@property(retain, nonatomic) UIKeyboardInputMode *currentInputModeForDictation; // @synthesize currentInputModeForDictation=_currentInputModeForDictation;
@property(retain, nonatomic) UITouch *triggeringTouch; // @synthesize triggeringTouch=_triggeringTouch;
- (_Bool)includeBarHeight;	// IMP=0x00000000008e3710
- (Class)viewControllerClass;	// IMP=0x00000000008e3521
- (void)dealloc;	// IMP=0x00000000008e34c9

@end
