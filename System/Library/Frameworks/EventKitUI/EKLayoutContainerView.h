//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@protocol EKLayoutContainerViewDelegate;

@interface EKLayoutContainerView : UIView
{
    id <EKLayoutContainerViewDelegate> _delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014a2bf
@property(nonatomic) __weak id <EKLayoutContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)layoutSubviews;	// IMP=0x000000000014a1f5

@end

