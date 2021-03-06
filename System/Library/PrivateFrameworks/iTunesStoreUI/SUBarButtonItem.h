//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIBarButtonItem.h>

@class NSString, SUTouchCaptureView, SUUIAppearance, UINavigationItem, UIView;

@interface SUBarButtonItem : UIBarButtonItem
{
    UIView *_accessoryView;	// 8 = 0x8
    struct UIEdgeInsets _accessoryViewInsets;	// 16 = 0x10
    SUUIAppearance *_confirmationAppearance;	// 48 = 0x30
    UINavigationItem *_lastNavigationItem;	// 56 = 0x38
    NSString *_preConfirmationTitle;	// 64 = 0x40
    SUTouchCaptureView *_touchCaptureView;	// 72 = 0x48
}

+ (Class)classForNavigationButton;	// IMP=0x00000000000dd9ef
@property(nonatomic) struct UIEdgeInsets accessoryViewInsets; // @synthesize accessoryViewInsets=_accessoryViewInsets;
@property(retain, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
- (void)_updateViewForAccessoryChange;	// IMP=0x00000000000ddfea
- (void)_setTitle:(id)arg1 isConfirmation:(_Bool)arg2 appearance:(id)arg3 animated:(_Bool)arg4;	// IMP=0x00000000000ddd43
- (void)_removeTouchCaptureView;	// IMP=0x00000000000ddcbf
- (id)_navigationButton;	// IMP=0x00000000000ddc37
- (void)_addTouchCaptureViewForNavigationButton:(id)arg1;	// IMP=0x00000000000ddb89
- (void)_touchCaptureAction:(id)arg1;	// IMP=0x00000000000ddb33
- (id)createViewForNavigationItem:(id)arg1;	// IMP=0x00000000000dda63
- (void)configureFromScriptButton:(id)arg1;	// IMP=0x00000000000dda00
- (void)showConfirmationWithTitle:(id)arg1 appearance:(id)arg2 animated:(_Bool)arg3;	// IMP=0x00000000000dd93f
@property(nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation;
- (void)hideConfirmationWithAppearance:(id)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000dd6d7
- (void)dealloc;	// IMP=0x00000000000dd656

@end

