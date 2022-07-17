//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIButton, UILabel;
@protocol DOCViewServiceErrorViewDelegate;

@interface DOCViewServiceErrorView : UIView
{
    UILabel *_titleLabel;	// 8 = 0x8
    UILabel *_subtitleLabel;	// 16 = 0x10
    UIButton *_tryAgainButton;	// 24 = 0x18
    id <DOCViewServiceErrorViewDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001ed1d
@property __weak id <DOCViewServiceErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *tryAgainButton; // @synthesize tryAgainButton=_tryAgainButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)didTapTryAgain;	// IMP=0x000000000001ec18
- (id)init;	// IMP=0x000000000001e4ac

@end
