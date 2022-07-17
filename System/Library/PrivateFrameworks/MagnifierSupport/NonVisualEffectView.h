//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSString, UIVisualEffect, _UIVisualEffectBackdropView;

@interface NonVisualEffectView : UIView
{
    UIView *_contentView;	// 8 = 0x8
    UIView *_backgroundView;	// 16 = 0x10
    double _cornerRadius;	// 24 = 0x18
    UIVisualEffect *_effect;	// 32 = 0x20
    NSString *__groupName;	// 40 = 0x28
    _UIVisualEffectBackdropView *__captureView;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000056d2
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic, setter=_setCaptureView:) __weak _UIVisualEffectBackdropView *_captureView; // @synthesize _captureView=__captureView;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName; // @synthesize _groupName=__groupName;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
- (double)_cornerRadius;	// IMP=0x000000000000564f
- (void)_setCornerRadius:(double)arg1;	// IMP=0x00000000000054ec
@property(readonly, nonatomic) UIView *contentView;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000051b3
- (id)initWithEffect:(id)arg1;	// IMP=0x000000000000511a
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000000050cc

@end
