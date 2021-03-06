//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, WFAutomationTypeExplanationPlatterView;

@interface WFAutomationEmptyStateCell : UITableViewCell
{
    WFAutomationTypeExplanationPlatterView *_automationTypeView;	// 8 = 0x8
    NSArray *_currentConstraints;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017c074
@property(retain, nonatomic) NSArray *currentConstraints; // @synthesize currentConstraints=_currentConstraints;
@property(readonly, nonatomic) WFAutomationTypeExplanationPlatterView *automationTypeView; // @synthesize automationTypeView=_automationTypeView;
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x000000000017bf7a
- (void)updateLayoutConstraints;	// IMP=0x000000000017bdf6
- (void)prepareForReuse;	// IMP=0x000000000017bd89
- (void)configureForAutomationType:(unsigned long long)arg1 buttonTarget:(id)arg2 action:(SEL)arg3;	// IMP=0x000000000017bcde
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000017bb56

@end

