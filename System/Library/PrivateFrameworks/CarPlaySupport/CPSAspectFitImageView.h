//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

@class NSLayoutConstraint;

@interface CPSAspectFitImageView : UIImageView
{
    NSLayoutConstraint *_aspectConstraint;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000004bdad
@property(retain, nonatomic) NSLayoutConstraint *aspectConstraint; // @synthesize aspectConstraint=_aspectConstraint;
- (void)_updateConstraints;	// IMP=0x000000000004ba8e
- (void)setImage:(id)arg1;	// IMP=0x000000000004ba4d
- (id)init;	// IMP=0x000000000004b9fc

@end
