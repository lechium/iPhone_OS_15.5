//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UINavigationItem, _UINavigationBarLayout;

@interface _UINavigationBarItemStackEntry : NSObject
{
    _Bool _searchActive;	// 8 = 0x8
    UINavigationItem *_item;	// 16 = 0x10
    _UINavigationBarLayout *_normalLayout;	// 24 = 0x18
    _UINavigationBarLayout *_searchLayout;	// 32 = 0x20
}

+ (id)newEntryForItem:(id)arg1;	// IMP=0x000000000016d984
+ (id)entryForItem:(id)arg1 replaceExistingWithNew:(_Bool)arg2;	// IMP=0x000000000016d8e8
- (void).cxx_destruct;	// IMP=0x000000000016dce6
@property(retain, nonatomic) _UINavigationBarLayout *searchLayout; // @synthesize searchLayout=_searchLayout;
@property(retain, nonatomic) _UINavigationBarLayout *normalLayout; // @synthesize normalLayout=_normalLayout;
@property(nonatomic, getter=isSearchActive) _Bool searchActive; // @synthesize searchActive=_searchActive;
@property(readonly, nonatomic) UINavigationItem *item; // @synthesize item=_item;
- (id)description;	// IMP=0x000000000016dbdf
- (void)updateStateFromCounterpart:(id)arg1;	// IMP=0x000000000016da41
@property(readonly, nonatomic) _UINavigationBarLayout *inactiveLayout;
@property(readonly, nonatomic) _UINavigationBarLayout *activeLayout;
- (void)dealloc;	// IMP=0x000000000016d9a4

@end
