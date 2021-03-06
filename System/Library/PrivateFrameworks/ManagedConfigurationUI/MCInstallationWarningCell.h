//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, UILabel;

@interface MCInstallationWarningCell : UITableViewCell
{
    UILabel *_warningLabel;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
}

+ (id)reuseIdentifier;	// IMP=0x00000000000433d6
- (void).cxx_destruct;	// IMP=0x000000000004397c
@property(retain, nonatomic) NSArray *constraints; // @synthesize constraints=_constraints;
@property(retain, nonatomic) UILabel *warningLabel; // @synthesize warningLabel=_warningLabel;
- (void)_setupConstraints;	// IMP=0x00000000000435be
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000004358f
- (void)_setup;	// IMP=0x000000000004342f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000000433e3

@end

