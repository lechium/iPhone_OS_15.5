//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol AXUISoftwareKeyboardManagerDelegate;

@interface AXUISoftwareKeyboardManager : NSObject
{
    NSMutableSet *_reasonsToDisableSoftwareKeyboard;	// 8 = 0x8
    NSMutableSet *_reasonsToEnableSoftwareKeyboard;	// 16 = 0x10
    id <AXUISoftwareKeyboardManagerDelegate> _delegate;	// 24 = 0x18
}

+ (id)sharedInstance;	// IMP=0x0000000000024374
- (void).cxx_destruct;	// IMP=0x0000000000024f79
@property(nonatomic) __weak id <AXUISoftwareKeyboardManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeReasonToDisableSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000024da2
- (void)addReasonToDisableSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000024bbe
- (void)removeReasonToEnableSoftwareKeyboard:(id)arg1;	// IMP=0x00000000000249fd
- (void)addReasonToEnableSoftwareKeyboard:(id)arg1;	// IMP=0x0000000000024819
- (void)_updateHardwareKeyboardState;	// IMP=0x0000000000024735
- (void)_setIsHardwareKeyboardAttached:(_Bool)arg1;	// IMP=0x0000000000024690
- (void)_wst_setIsHardwareKeyboardAttached:(id)arg1;	// IMP=0x0000000000024562
- (void)_overrideSetHardwareKeyboardAttached:(_Bool)arg1;	// IMP=0x0000000000024554
- (_Bool)isHardwareKeyboardAttached;	// IMP=0x0000000000024544
- (void)updateKeyboardHardwareState;	// IMP=0x00000000000244f8
- (void)dealloc;	// IMP=0x000000000002448c
- (id)init;	// IMP=0x00000000000243c9

@end

