//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UICollectionReusableView.h>

@class NSArray, NSString, UILabel;

@interface STSHeaderView : UICollectionReusableView
{
    UILabel *_label;	// 8 = 0x8
    NSArray *_constraints;	// 16 = 0x10
    NSString *_title;	// 24 = 0x18
    struct UIEdgeInsets _contentInsets;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002591d
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void)updateConstraints;	// IMP=0x000000000002556b
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000025405

@end

