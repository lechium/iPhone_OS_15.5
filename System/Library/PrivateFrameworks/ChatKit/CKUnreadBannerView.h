//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIImageView, UILabel, _UIBackdropView;
@protocol CKUnreadBannerViewDelegate;

__attribute__((visibility("hidden")))
@interface CKUnreadBannerView : UIView <UIGestureRecognizerDelegate>
{
    id <CKUnreadBannerViewDelegate> _delegate;	// 8 = 0x8
    unsigned long long _unreadCount;	// 16 = 0x10
    _UIBackdropView *_backdropView;	// 24 = 0x18
    UILabel *_label;	// 32 = 0x20
    UIImageView *_chevronView;	// 40 = 0x28
    UIView *_overlayView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000049ba3a
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) UIImageView *chevronView; // @synthesize chevronView=_chevronView;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(nonatomic) unsigned long long unreadCount; // @synthesize unreadCount=_unreadCount;
@property(nonatomic) __weak id <CKUnreadBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)stopAnimation;	// IMP=0x000000000049b920
- (void)startAnimation;	// IMP=0x000000000049b690
- (void)bannerPressed:(id)arg1;	// IMP=0x000000000049b4c8
- (void)layoutSubviews;	// IMP=0x000000000049b280
- (id)init;	// IMP=0x000000000049a222

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
