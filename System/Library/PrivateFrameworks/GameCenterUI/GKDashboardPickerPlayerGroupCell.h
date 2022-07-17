//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIImageView, UILabel, UILongPressGestureRecognizer, UIView, _TtC12GameCenterUI17GKPlayerGroupView;
@protocol GKDashboardPickerPlayerGroupCellDelegate;

@interface GKDashboardPickerPlayerGroupCell : UICollectionViewCell
{
    _Bool _usesClearBackground;	// 8 = 0x8
    _Bool _canExpand;	// 9 = 0x9
    id <GKDashboardPickerPlayerGroupCellDelegate> _groupCellDelegate;	// 16 = 0x10
    NSString *_searchText;	// 24 = 0x18
    UIView *_container;	// 32 = 0x20
    UIView *_iconContainer;	// 40 = 0x28
    UILabel *_subtitle;	// 48 = 0x30
    UILabel *_title;	// 56 = 0x38
    UIView *_bottomLine;	// 64 = 0x40
    UIImageView *_checkmark;	// 72 = 0x48
    UIImageView *_messageIcon;	// 80 = 0x50
    UIView *_ringView;	// 88 = 0x58
    UILongPressGestureRecognizer *_longPressRecognizer;	// 96 = 0x60
    NSString *_originalSubtitle;	// 104 = 0x68
    _TtC12GameCenterUI17GKPlayerGroupView *_playerGroupView;	// 112 = 0x70
}

+ (struct CGSize)defaultSize;	// IMP=0x000000000005a8ac
+ (id)reuseIdentifierAX;	// IMP=0x000000000005a89f
+ (id)reuseIdentifier;	// IMP=0x000000000005a892
- (void).cxx_destruct;	// IMP=0x000000000005c145
@property(nonatomic) _Bool canExpand; // @synthesize canExpand=_canExpand;
@property(retain, nonatomic) _TtC12GameCenterUI17GKPlayerGroupView *playerGroupView; // @synthesize playerGroupView=_playerGroupView;
@property(retain, nonatomic) NSString *originalSubtitle; // @synthesize originalSubtitle=_originalSubtitle;
@property(retain, nonatomic) UILongPressGestureRecognizer *longPressRecognizer; // @synthesize longPressRecognizer=_longPressRecognizer;
@property(nonatomic) __weak UIView *ringView; // @synthesize ringView=_ringView;
@property(nonatomic) __weak UIImageView *messageIcon; // @synthesize messageIcon=_messageIcon;
@property(nonatomic) __weak UIImageView *checkmark; // @synthesize checkmark=_checkmark;
@property(nonatomic) __weak UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak UILabel *subtitle; // @synthesize subtitle=_subtitle;
@property(nonatomic) __weak UIView *iconContainer; // @synthesize iconContainer=_iconContainer;
@property(nonatomic) __weak UIView *container; // @synthesize container=_container;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(nonatomic) __weak id <GKDashboardPickerPlayerGroupCellDelegate> groupCellDelegate; // @synthesize groupCellDelegate=_groupCellDelegate;
@property(nonatomic) _Bool usesClearBackground; // @synthesize usesClearBackground=_usesClearBackground;
- (void)handleLongPress:(id)arg1;	// IMP=0x000000000005be42
- (void)setSelected:(_Bool)arg1;	// IMP=0x000000000005bd90
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x000000000005bc9d
- (void)updateCellBackground;	// IMP=0x000000000005bbee
- (_Bool)canBecomeFocused;	// IMP=0x000000000005bbca
@property(nonatomic) _Bool lineVisible; // @dynamic lineVisible;
- (void)updateLayerMask:(id)arg1;	// IMP=0x000000000005b9dc
- (void)updateTitleForSearchText;	// IMP=0x000000000005b781
- (void)configureWithPlayers:(id)arg1 title:(id)arg2 subtitle:(id)arg3 messagesGroupIdentifier:(id)arg4 source:(long long)arg5 playerSelectionProxy:(id)arg6;	// IMP=0x000000000005b003
- (void)dealloc;	// IMP=0x000000000005af69
- (void)awakeFromNib;	// IMP=0x000000000005a8bd

@end
