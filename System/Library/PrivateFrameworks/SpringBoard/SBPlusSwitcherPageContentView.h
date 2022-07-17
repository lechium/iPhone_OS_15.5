//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBAppSwitcherPageContentView-Protocol.h>

@class MTMaterialView, NSString, UIImageView;

@interface SBPlusSwitcherPageContentView : UIView <SBAppSwitcherPageContentView>
{
    MTMaterialView *_materialView;	// 8 = 0x8
    UIImageView *_plusImageView;	// 16 = 0x10
    _Bool contentRequiresGroupOpacity;	// 24 = 0x18
    _Bool active;	// 25 = 0x19
    _Bool visible;	// 26 = 0x1a
    double cornerRadius;	// 32 = 0x20
    long long orientation;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000001a7697
@property(nonatomic, getter=isVisible) _Bool visible; // @synthesize visible;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active;
@property(readonly, nonatomic) _Bool contentRequiresGroupOpacity; // @synthesize contentRequiresGroupOpacity;
@property(nonatomic) long long orientation; // @synthesize orientation;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius;
@property(nonatomic) unsigned long long maskedCorners;
- (void)invalidate;	// IMP=0x00000000001a754a
- (void)layoutSubviews;	// IMP=0x00000000001a7421
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000001a7240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
