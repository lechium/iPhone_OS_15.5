//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class _UIStatusBarStringView;

__attribute__((visibility("hidden")))
@interface _UIStatusBarFullBackgroundActivityItem
{
    _UIStatusBarStringView *_detailStringView;	// 32 = 0x20
}

+ (id)detailDisplayIdentifier;	// IMP=0x0000000000dd580f
- (void).cxx_destruct;	// IMP=0x0000000000dd5fd9
@property(retain, nonatomic) _UIStatusBarStringView *detailStringView; // @synthesize detailStringView=_detailStringView;
- (id)removalAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000dd5e50
- (id)additionAnimationForDisplayItemWithIdentifier:(id)arg1;	// IMP=0x0000000000dd5ca2
- (id)viewForIdentifier:(id)arg1;	// IMP=0x0000000000dd5bf4
- (void)_create_backgroundView;	// IMP=0x0000000000dd5b87
- (void)_create_detailStringView;	// IMP=0x0000000000dd5b2d
- (id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2;	// IMP=0x0000000000dd5828

@end
