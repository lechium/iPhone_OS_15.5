//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UISearchBar, UIView, UIViewController;
@protocol WFDrawerPane;

@interface WFDrawerItem : NSObject
{
    UIViewController<WFDrawerPane> *_drawerPane;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000023ac32
@property(nonatomic) __weak UIViewController<WFDrawerPane> *drawerPane; // @synthesize drawerPane=_drawerPane;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;	// IMP=0x000000000023ab5e
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x000000000023aace
- (void)scrollViewWillBeginDragging:(id)arg1;	// IMP=0x000000000023aa3e
@property(nonatomic) double fauxHeaderHeight;
@property(retain, nonatomic) UIView *titleView;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) UISearchBar *searchBar;
- (id)initWithDrawerPane:(id)arg1;	// IMP=0x000000000023a6de

@end

