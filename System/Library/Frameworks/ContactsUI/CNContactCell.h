//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <ContactsUI/CNIndentableCell-Protocol.h>

@class CNCardGroupItem, NSArray;

@interface CNContactCell : UITableViewCell <CNIndentableCell>
{
    NSArray *_constantConstraints;	// 8 = 0x8
    NSArray *_variableConstraints;	// 16 = 0x10
    CNCardGroupItem *_cardGroupItem;	// 24 = 0x18
}

+ (_Bool)shouldIndentWhileEditing;	// IMP=0x000000000004aac5
- (void).cxx_destruct;	// IMP=0x000000000004aa5c
@property(retain, nonatomic) CNCardGroupItem *cardGroupItem; // @synthesize cardGroupItem=_cardGroupItem;
- (void)_setAnimating:(_Bool)arg1 clippingAdjacentCells:(_Bool)arg2;	// IMP=0x000000000004a956
- (void)contentSizeCategoryDidChange:(id)arg1;	// IMP=0x000000000004a8b6
@property(readonly, nonatomic) double minCellHeight;
- (void)updateConstraints;	// IMP=0x000000000004a792
@property(readonly, nonatomic) NSArray *variableConstraints;
@property(readonly, nonatomic) NSArray *constantConstraints;
@property(readonly, nonatomic) _Bool hasGapBetweenSeparatorAndTrailingEdge;
@property(nonatomic) _Bool showSeparator;
- (void)performAccessoryAction;	// IMP=0x000000000004a4f1
- (_Bool)shouldPerformAccessoryAction;	// IMP=0x000000000004a4e9
- (void)performDefaultAction;	// IMP=0x000000000004a4e3
- (_Bool)shouldPerformDefaultAction;	// IMP=0x000000000004a4ce
- (void)prepareForReuse;	// IMP=0x000000000004a48e
- (void)dealloc;	// IMP=0x000000000004a3ae
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000004a312

@end
