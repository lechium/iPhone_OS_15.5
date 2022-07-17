//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, NSString;
@protocol HUResizableCellDelegate;

@interface HUButtonCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;	// 8 = 0x8
    _Bool _destructive;	// 9 = 0x9
    _Bool _textColorFollowsTintColor;	// 10 = 0xa
    _Bool _hideTitle;	// 11 = 0xb
    HFItem *_item;	// 16 = 0x10
    long long _textAlignment;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000035377c
@property(nonatomic) _Bool hideTitle; // @synthesize hideTitle=_hideTitle;
@property(nonatomic) _Bool textColorFollowsTintColor; // @synthesize textColorFollowsTintColor=_textColorFollowsTintColor;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void)updateTitle;	// IMP=0x0000000000353574
- (void)updateUIWithAnimation:(_Bool)arg1;	// IMP=0x000000000035348f
- (void)didMoveToSuperview;	// IMP=0x000000000035344e
- (void)tintColorDidChange;	// IMP=0x000000000035340d
- (void)prepareForReuse;	// IMP=0x000000000035338f
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00000000003531eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <HUResizableCellDelegate> resizingDelegate;
@property(readonly) Class superclass;

@end
