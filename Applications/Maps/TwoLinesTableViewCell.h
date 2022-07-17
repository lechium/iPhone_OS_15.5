//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TwoLinesContentView;
@protocol AutocompleteCellAccessoryDelegate, PersonalizedItem, PlaceContextViewModelCellDelegate, TwoLinesContentViewModel;

__attribute__((visibility("hidden")))
@interface TwoLinesTableViewCell
{
    TwoLinesContentView *_twoLinesContentView;	// 8 = 0x8
    int _contentViewType;	// 16 = 0x10
    id <AutocompleteCellAccessoryDelegate> _accessoryViewDelegate;	// 24 = 0x18
    id _accessoryViewObject;	// 32 = 0x20
    long long _accessoryViewType;	// 40 = 0x28
    id <PlaceContextViewModelCellDelegate> _placeContextViewModelDelegate;	// 48 = 0x30
    id <TwoLinesContentViewModel> _viewModel;	// 56 = 0x38
}

+ (id)identifier;	// IMP=0x0020000000775333
+ (double)estimatedCellHeight;	// IMP=0x0010000000775312
+ (double)cellHeight;	// IMP=0x0010000000775301
- (void).cxx_destruct;	// IMP=0x00200000007760a3
@property(retain, nonatomic) id <TwoLinesContentViewModel> viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak id <PlaceContextViewModelCellDelegate> placeContextViewModelDelegate; // @synthesize placeContextViewModelDelegate=_placeContextViewModelDelegate;
@property(nonatomic) long long accessoryViewType; // @synthesize accessoryViewType=_accessoryViewType;
@property(retain, nonatomic) id accessoryViewObject; // @synthesize accessoryViewObject=_accessoryViewObject;
@property(nonatomic) __weak id <AutocompleteCellAccessoryDelegate> accessoryViewDelegate; // @synthesize accessoryViewDelegate=_accessoryViewDelegate;
- (void)didTapOnPlaceContextWithViewModel:(id)arg1 parentView:(id)arg2;	// IMP=0x0010000000775f8d
- (void)prepareForActionMenuPresentation;	// IMP=0x0010000000775f87
@property(readonly, nonatomic) id <PersonalizedItem> personalizedItemForQuickActionMenu;
- (void)didTapAccessoryViewButton:(id)arg1;	// IMP=0x0010000000775d74
- (struct CGSize)intrinsicContentSize;	// IMP=0x00100000007758f4
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x00100000007758a1
- (void)prepareForReuse;	// IMP=0x0010000000775838
- (double)leadingSpacing;	// IMP=0x0010000000775825
- (void)prepareContentView;	// IMP=0x00100000007753e8
- (_Bool)canBecomeFirstResponder;	// IMP=0x00100000007753d6
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 contentViewType:(int)arg3;	// IMP=0x001000000077535a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x0010000000775345

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
