//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNCardActionGroupItem, CNContactAction, CNTransportButton, UILabel;

__attribute__((visibility("hidden")))
@interface CNContactActionCell
{
    UILabel *_label;	// 8 = 0x8
    CNTransportButton *_transportIcon;	// 16 = 0x10
}

+ (_Bool)shouldIndentWhileEditing;	// IMP=0x00000000000341b5
- (void).cxx_destruct;	// IMP=0x0000000000034184
@property(retain, nonatomic) CNTransportButton *transportIcon; // @synthesize transportIcon=_transportIcon;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
- (void)tintColorDidChange;	// IMP=0x0000000000034050
- (id)variableConstraints;	// IMP=0x0000000000033e66
@property(readonly, nonatomic) CNContactAction *action;
@property(readonly, nonatomic) CNCardActionGroupItem *actionGroupItem;
- (void)setCardGroupItem:(id)arg1;	// IMP=0x0000000000033a2e
- (void)setLabelTextAttributes:(id)arg1;	// IMP=0x000000000003372c
- (id)rightMostView;	// IMP=0x00000000000336a5
- (_Bool)shouldPerformDefaultAction;	// IMP=0x000000000003369d
- (double)minCellHeight;	// IMP=0x000000000003368f
- (id)labelView;	// IMP=0x0000000000033642

@end

