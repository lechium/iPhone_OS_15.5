//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class UIViewController, VUISeparatorView;

__attribute__((visibility("hidden")))
@interface VUILibraryCollectionViewCell : UICollectionViewCell
{
    UIViewController *_viewController;	// 8 = 0x8
    VUISeparatorView *_topSeparatorView;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000015b030
@property(retain, nonatomic) VUISeparatorView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)layoutSubviews;	// IMP=0x000000000015ae74
- (void)prepareForReuse;	// IMP=0x000000000015ad13

@end
