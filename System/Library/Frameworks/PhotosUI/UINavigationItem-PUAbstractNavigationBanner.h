//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UINavigationItem.h>

@class PUAbstractNavigationBanner;

@interface UINavigationItem (PUAbstractNavigationBanner)
@property(retain, nonatomic, setter=pu_setBanner:) PUAbstractNavigationBanner *pu_banner;
- (void)pu_setDefaultBackBarButtonItemWithTitle:(id)arg1;	// IMP=0x00000000004a8034
- (_Bool)_pu_shouldUpdateBarButtonItems:(id)arg1 withNewBarButtonItems:(id)arg2;	// IMP=0x00000000004a7e85
- (_Bool)pu_shouldUpdateRightBarButtonItems:(id)arg1;	// IMP=0x00000000004a7e16
- (_Bool)pu_shouldUpdateLeftBarButtonItems:(id)arg1;	// IMP=0x00000000004a7da7
@end
