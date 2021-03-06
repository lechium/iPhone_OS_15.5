//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/UITextViewDelegate-Protocol.h>

@class HFItem, NSArray, NSString, UILabel, UITextView;
@protocol HUResizableCellDelegate;

@interface HUInstructionsCell : UITableViewCell <UITextViewDelegate, HUCellProtocol>
{
    _Bool _hidesTopSpacing;	// 8 = 0x8
    HFItem *_item;	// 16 = 0x10
    double _contentBottomMargin;	// 24 = 0x18
    UILabel *_titleLabel;	// 32 = 0x20
    UITextView *_descriptionView;	// 40 = 0x28
    NSArray *_constraints;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000986d8
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UITextView *descriptionView; // @synthesize descriptionView=_descriptionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double contentBottomMargin; // @synthesize contentBottomMargin=_contentBottomMargin;
@property(nonatomic) _Bool hidesTopSpacing; // @synthesize hidesTopSpacing=_hidesTopSpacing;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;	// IMP=0x0000000000098534
- (void)updateConstraints;	// IMP=0x000000000009655c
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x00000000000958a3
- (void)layoutSubviews;	// IMP=0x0000000000095862
- (void)prepareForReuse;	// IMP=0x0000000000095819
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000953b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end

