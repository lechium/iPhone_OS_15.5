//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SUSimpleMenuViewController
{
    NSString *_cancelButtonTitle;	// 32 = 0x20
    NSArray *_titles;	// 40 = 0x28
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(copy, nonatomic) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;
- (void)_cancelAction:(id)arg1;	// IMP=0x00000000000a6fbc
- (void)reloadContentSizeForViewInPopover;	// IMP=0x00000000000a6f26
- (id)titleOfMenuItemAtIndex:(long long)arg1;	// IMP=0x00000000000a6f09
- (long long)numberOfMenuItems;	// IMP=0x00000000000a6eec
- (_Bool)isMenuItemEnabledAtIndex:(long long)arg1;	// IMP=0x00000000000a6ee4
- (void)dealloc;	// IMP=0x00000000000a6d20
- (id)initWithTitles:(id)arg1;	// IMP=0x00000000000a6cc2

@end

