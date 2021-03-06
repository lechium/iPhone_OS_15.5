//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <TelephonyUI/_UIActionSliderDelegate-Protocol.h>

@class NSString, UIButton, UIImageView, _UIActionSlider;
@protocol TPSlidingButtonDelegateProtocol;

@interface TPSlidingButton : UIView <_UIActionSliderDelegate>
{
    int _type;	// 8 = 0x8
    UIButton *_sideButtonRight;	// 16 = 0x10
    id <TPSlidingButtonDelegateProtocol> _delegate;	// 24 = 0x18
    UIImageView *_dialImageView;	// 32 = 0x20
    _UIActionSlider *_acceptButton;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000029341
@property(retain) _UIActionSlider *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain) UIImageView *dialImageView; // @synthesize dialImageView=_dialImageView;
@property id <TPSlidingButtonDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property int type; // @synthesize type=_type;
@property(retain) UIButton *sideButtonRight; // @synthesize sideButtonRight=_sideButtonRight;
- (void)actionSliderDidCompleteSlide:(id)arg1;	// IMP=0x0000000000028125
- (void)actionSlider:(id)arg1 didUpdateSlideWithValue:(double)arg2;	// IMP=0x000000000002804c
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000027ff2
- (void)layoutSubviews;	// IMP=0x0000000000027f7d
- (void)dealloc;	// IMP=0x0000000000027f3f
- (id)initWithSlidingButtonType:(int)arg1;	// IMP=0x00000000000279de

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

