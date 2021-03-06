//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol _CNAvatarViewDelegate;

@interface _CNAvatarView : UIView
{
    id <_CNAvatarViewDelegate> _delegate;	// 8 = 0x8
    NSArray *_likenessProviders;	// 16 = 0x10
    NSArray *_likenessViews;	// 24 = 0x18
    NSArray *_subviewsConstraints;	// 32 = 0x20
}

+ (_Bool)requiresConstraintBasedLayout;	// IMP=0x00000000000acb39
- (void).cxx_destruct;	// IMP=0x00000000000ac930
@property(copy, nonatomic) NSArray *subviewsConstraints; // @synthesize subviewsConstraints=_subviewsConstraints;
@property(copy, nonatomic) NSArray *likenessViews; // @synthesize likenessViews=_likenessViews;
@property(retain, nonatomic) NSArray *likenessProviders; // @synthesize likenessProviders=_likenessProviders;
@property(nonatomic) __weak id <_CNAvatarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;	// IMP=0x00000000000ac403
- (void)setupSubviews;	// IMP=0x00000000000ac2b1

@end

