//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UITextView;

@interface HKMedicalIDEmergencyAccessLearnMoreCell : UITableViewCell
{
    UITextView *_bodyTextView;	// 8 = 0x8
    NSAttributedString *_body;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001243aa
@property(copy, nonatomic) NSAttributedString *body; // @synthesize body=_body;
- (void)_setUpConstraints;	// IMP=0x0000000000123f84
- (void)_addSubviews;	// IMP=0x0000000000123f30
- (void)_setUpViews;	// IMP=0x0000000000123de5
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0000000000123d32

@end

