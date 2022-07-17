//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface AAUIProfileSummaryView : UIView
{
    UIImageView *_profileImageView;	// 8 = 0x8
    UILabel *_nameLabel;	// 16 = 0x10
    UILabel *_emailLabel;	// 24 = 0x18
    _Bool _hidesPhoto;	// 32 = 0x20
    double _topPadding;	// 40 = 0x28
}

+ (double)desiredHeight;	// IMP=0x00000000000522a7
- (void).cxx_destruct;	// IMP=0x0000000000052423
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(nonatomic) _Bool hidesPhoto; // @synthesize hidesPhoto=_hidesPhoto;
- (void)layoutSubviews;	// IMP=0x0000000000051bfd
- (id)initWithName:(id)arg1 email:(id)arg2 image:(id)arg3;	// IMP=0x00000000000518a1

@end
