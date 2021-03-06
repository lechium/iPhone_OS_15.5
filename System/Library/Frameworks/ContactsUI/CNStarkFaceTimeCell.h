//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ContactsUI/CNStarkActionViewDelegate-Protocol.h>

@class CNStarkActionView, NSDictionary, NSString, UILabel;
@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNStarkFaceTimeCell <CNStarkActionViewDelegate>
{
    id <CNPropertyCellDelegate> _delegate;	// 8 = 0x8
    NSDictionary *_labelTextAttributes;	// 16 = 0x10
    UILabel *_faceTimeLabel;	// 24 = 0x18
    CNStarkActionView *_actionView;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000000afe54
- (void).cxx_destruct;	// IMP=0x00000000000afe03
@property(readonly, nonatomic) CNStarkActionView *actionView; // @synthesize actionView=_actionView;
@property(retain, nonatomic) UILabel *faceTimeLabel; // @synthesize faceTimeLabel=_faceTimeLabel;
@property(copy, nonatomic) NSDictionary *labelTextAttributes; // @synthesize labelTextAttributes=_labelTextAttributes;
@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionViewTapped:(id)arg1;	// IMP=0x00000000000afd78
- (void)updateTransportButtons;	// IMP=0x00000000000afd72
- (_Bool)shouldShowStar;	// IMP=0x00000000000afd6a
- (_Bool)supportsTintColorValue;	// IMP=0x00000000000afd62
- (void)performDefaultAction;	// IMP=0x00000000000afceb
- (void)setSeparatorStyle:(long long)arg1;	// IMP=0x00000000000afcba
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000000afb99
- (id)constantConstraints;	// IMP=0x00000000000af7be
- (id)variableConstraints;	// IMP=0x00000000000af7b1
- (void)_cnui_applyContactStyle;	// IMP=0x00000000000af6b0
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000af4b4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

