//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE, NSString, UIButton;

@interface HRUITextAndActionCell : UITableViewCell
{
    MISSING_TYPE *explanationLabel;	// 8 = 0x8
    MISSING_TYPE *actionButton;	// 16 = 0x10
    MISSING_TYPE *explanation;	// 24 = 0x18
    MISSING_TYPE *actionTitle;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000015e3f0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000015dc70
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x000000000015dc20
@property(nonatomic, copy) NSString *actionTitle;
@property(nonatomic, copy) NSString *explanation;
@property(nonatomic, readonly) UIButton *actionButton; // @synthesize actionButton;

@end

