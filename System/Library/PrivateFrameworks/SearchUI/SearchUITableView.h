//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableView.h>

@protocol SearchUITableViewSizingDelegate;

@interface SearchUITableView : UITableView
{
    id <SearchUITableViewSizingDelegate> _sizingDelegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000005e51a
@property __weak id <SearchUITableViewSizingDelegate> sizingDelegate; // @synthesize sizingDelegate=_sizingDelegate;
- (void)tlk_updateForAppearance:(id)arg1;	// IMP=0x000000000005e44c
- (void)didMoveToWindow;	// IMP=0x000000000005e40b
- (void)_dynamicUserInterfaceTraitDidChange;	// IMP=0x000000000005e3ca
- (void)safeAreaInsetsDidChange;	// IMP=0x000000000005e35d
- (void)setContentSize:(struct CGSize)arg1;	// IMP=0x000000000005e299
- (id)init;	// IMP=0x000000000005e11f

@end

