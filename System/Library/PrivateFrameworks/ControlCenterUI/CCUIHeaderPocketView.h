//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CCUISensorStatusView, CCUIStatusBar, SBUIChevronView;
@protocol CCUIStatusBarDelegate;

@interface CCUIHeaderPocketView : UIView
{
    UIView *_headerBackgroundView;	// 8 = 0x8
    UIView *_headerLineView;	// 16 = 0x10
    SBUIChevronView *_headerChevronView;	// 24 = 0x18
    CCUISensorStatusView *_sensorStatusView;	// 32 = 0x20
    CCUIStatusBar *_statusBar;	// 40 = 0x28
    id <CCUIStatusBarDelegate> _statusBarDelegate;	// 48 = 0x30
    unsigned long long _mode;	// 56 = 0x38
    double _backgroundAlpha;	// 64 = 0x40
    UIView *_customBackgroundView;	// 72 = 0x48
    double _chevronAlpha;	// 80 = 0x50
    double _statusBarAlpha;	// 88 = 0x58
    double _sensorStatusViewAlpha;	// 96 = 0x60
    double _contentAlphaMultiplier;	// 104 = 0x68
    double _verticalContentTranslation;	// 112 = 0x70
    long long _interfaceOrientation;	// 120 = 0x78
    UIView *_statusLabelView;	// 128 = 0x80
    struct UIEdgeInsets _edgeInsets;	// 136 = 0x88
    struct CGAffineTransform _contentTransform;	// 168 = 0xa8
}

- (void).cxx_destruct;	// IMP=0x0000000000014890
@property(retain, nonatomic) UIView *statusLabelView; // @synthesize statusLabelView=_statusLabelView;
@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) struct CGAffineTransform contentTransform; // @synthesize contentTransform=_contentTransform;
@property(nonatomic) double verticalContentTranslation; // @synthesize verticalContentTranslation=_verticalContentTranslation;
@property(nonatomic) double contentAlphaMultiplier; // @synthesize contentAlphaMultiplier=_contentAlphaMultiplier;
@property(nonatomic) double sensorStatusViewAlpha; // @synthesize sensorStatusViewAlpha=_sensorStatusViewAlpha;
@property(nonatomic) double statusBarAlpha; // @synthesize statusBarAlpha=_statusBarAlpha;
@property(nonatomic) double chevronAlpha; // @synthesize chevronAlpha=_chevronAlpha;
@property(nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) double backgroundAlpha; // @synthesize backgroundAlpha=_backgroundAlpha;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) CCUISensorStatusView *sensorStatusView; // @synthesize sensorStatusView=_sensorStatusView;
@property(nonatomic) __weak id <CCUIStatusBarDelegate> statusBarDelegate; // @synthesize statusBarDelegate=_statusBarDelegate;
@property(readonly, nonatomic) CCUIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (void)_setHeaderBackgroundView:(id)arg1;	// IMP=0x0000000000014698
- (id)_newDefaultBackgroundView;	// IMP=0x0000000000014676
- (void)_updateContentTransform;	// IMP=0x00000000000145b2
- (void)_updateAlpha;	// IMP=0x000000000001451c
- (double)additionalHeightForOrientation:(long long)arg1;	// IMP=0x0000000000013bf9
@property(nonatomic) unsigned long long chevronState; // @dynamic chevronState;
@property(nonatomic) struct CGAffineTransform compactScaleTransform; // @dynamic compactScaleTransform;
@property(readonly, nonatomic) struct CGRect contentBounds; // @dynamic contentBounds;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x000000000001323d
- (void)layoutSubviews;	// IMP=0x0000000000012801
- (void)removeSensorStatusForSensorType:(unsigned long long)arg1;	// IMP=0x0000000000012799
- (void)addSensorStatusForStatusType:(unsigned long long)arg1 sensorActivityData:(id)arg2;	// IMP=0x000000000001277c
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x000000000001254b

@end

