//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, _UIButtonBarButton;

@interface TUIButtonBarItemView : UIView
{
    _Bool _collapsedItem;	// 8 = 0x8
    UIBarButtonItem *_associatedItem;	// 16 = 0x10
    UIBarButtonItemGroup *_associatedGroup;	// 24 = 0x18
    _UIButtonBarButton *_barButtonView;	// 32 = 0x20
    UIView *_customView;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000057020
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) _UIButtonBarButton *barButtonView; // @synthesize barButtonView=_barButtonView;
@property(retain, nonatomic) UIBarButtonItemGroup *associatedGroup; // @synthesize associatedGroup=_associatedGroup;
@property(retain, nonatomic) UIBarButtonItem *associatedItem; // @synthesize associatedItem=_associatedItem;
@property(nonatomic, getter=isCollapsedItem) _Bool collapsedItem; // @synthesize collapsedItem=_collapsedItem;
- (void)layoutSubviews;	// IMP=0x0000000000056e97
- (_Bool)_isPad;	// IMP=0x0000000000056e2d
@property(readonly, nonatomic) UIView *contentView;

@end
