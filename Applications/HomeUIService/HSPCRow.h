//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

@class MISSING_TYPE, UITextField, UIView;

@interface HSPCRow : UITableViewCell
{
    _Bool _constraintsSet;	// 8 = 0x8
    UIView *_leftView;	// 16 = 0x10
    UITextField *_textField;	// 24 = 0x18
}

+ (double)leadingSeparatorMargin;	// IMP=0x002000000003e821
+ (double)horizontalSpacing;	// IMP=0x001000000003e813
+ (double)horizontalTrailingMargin;	// IMP=0x001000000003e805
+ (MISSING_TYPE *)horizontalLeadingMargin;	// IMP=0x001000000003e7f7
+ (struct CGSize)leftImageSize;	// IMP=0x001000000003e7e6
+ (id)_reuseIdentifier;	// IMP=0x001000000003e7d9
- (void).cxx_destruct;	// IMP=0x002000000003eb04
@property(nonatomic) _Bool constraintsSet; // @synthesize constraintsSet=_constraintsSet;
@property(readonly, nonatomic) __weak UITextField *textField; // @synthesize textField=_textField;
@property(nonatomic) __weak UIView *leftView; // @synthesize leftView=_leftView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x001000000003e879

@end
