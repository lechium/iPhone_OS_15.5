//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UISearchDisplayController.h>

@interface SUSearchDisplayController : UISearchDisplayController
{
    _Bool _store_navigationBarHidingEnabled;	// 8 = 0x8
}

- (void)setNavigationBarHidingEnabled:(_Bool)arg1;	// IMP=0x00000000000dd10d
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00000000000dcfc9
- (_Bool)isNavigationBarHidingEnabled;	// IMP=0x00000000000dcfb9
- (id)_createPopoverController;	// IMP=0x00000000000dcf6d
- (void)_updateSearchBarMaskIfNecessary;	// IMP=0x00000000000dcf67
- (void)_noEventSetSearchFieldText:(id)arg1;	// IMP=0x00000000000dce9f

@end
