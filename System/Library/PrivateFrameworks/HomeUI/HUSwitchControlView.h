//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUControlView-Protocol.h>

@class NSString, UISwitch;
@protocol HUControlViewDelegate;

@interface HUSwitchControlView : UIView <HUControlView>
{
    NSString *_identifier;	// 8 = 0x8
    id <HUControlViewDelegate> _delegate;	// 16 = 0x10
    UISwitch *_switchView;	// 24 = 0x18
}

+ (Class)valueClass;	// IMP=0x0000000000281f05
- (void).cxx_destruct;	// IMP=0x0000000000282368
@property(readonly, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(nonatomic) __weak id <HUControlViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)_switchValueChanged:(id)arg1;	// IMP=0x0000000000282230
@property(nonatomic, getter=isDisabled) _Bool disabled;
@property(retain, nonatomic) id value;
- (struct CGSize)intrinsicContentSize;	// IMP=0x000000000028203e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000281fd0
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000281f16

// Remaining properties
@property(nonatomic) _Bool canBeHighlighted;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

