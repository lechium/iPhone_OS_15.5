//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

#import <UserNotificationsUIKit/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIColor;

@interface NCNotificationManagementBlueButton : UIButton <UIPointerInteractionDelegate>
{
    UIColor *_backgroundColor;	// 8 = 0x8
}

+ (id)buttonWithTitle:(id)arg1;	// IMP=0x00000000000cf363
- (void).cxx_destruct;	// IMP=0x00000000000cf916
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;	// IMP=0x00000000000cf87f
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;	// IMP=0x00000000000cf869
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x00000000000cf6ea
- (void)setBackgroundColor:(id)arg1;	// IMP=0x00000000000cf664
- (id)backgroundColor;	// IMP=0x00000000000cf64f
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000cf3d9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

