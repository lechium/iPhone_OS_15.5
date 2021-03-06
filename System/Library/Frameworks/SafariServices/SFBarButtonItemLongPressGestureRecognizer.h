//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import <SafariServices/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface SFBarButtonItemLongPressGestureRecognizer : UILongPressGestureRecognizer <UIGestureRecognizerDelegate>
{
    UIBarButtonItem *_barButtonItem;	// 8 = 0x8
    id _target;	// 16 = 0x10
    SEL _longPressAction;	// 24 = 0x18
    SEL _touchDownAction;	// 32 = 0x20
}

+ (id)gestureRecognizerTarget:(id)arg1 longPressAction:(SEL)arg2 touchDownAction:(SEL)arg3 attachedToBarButtonItem:(id)arg4;	// IMP=0x00000000000da70d
- (void).cxx_destruct;	// IMP=0x00000000000dac6c
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;	// IMP=0x00000000000dabd9
- (void)_updateMinimumPressDurationForContentSizeCategory:(id)arg1;	// IMP=0x00000000000dab9c
- (void)_contentSizeCategoryDidChange:(id)arg1;	// IMP=0x00000000000dab17
- (void)_invokeLongPressAction;	// IMP=0x00000000000daa72
- (void)longPress:(id)arg1;	// IMP=0x00000000000daa39
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x00000000000da8b2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

