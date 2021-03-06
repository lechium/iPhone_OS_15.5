//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PUAlbumPickerViewControllerSpec, PUPhotosPickerViewControllerSpec;

@interface PUPhotosGridViewControllerSpec : NSObject
{
    _Bool _canDisplayOptionsInPopover;	// 8 = 0x8
    _Bool _canDisplaySlideshowButton;	// 9 = 0x9
    _Bool _canDisplayEditActionsInNavigationBar;	// 10 = 0xa
    _Bool _usesStackPopTransition;	// 11 = 0xb
    PUPhotosPickerViewControllerSpec *_photosPickerViewControllerSpec;	// 16 = 0x10
    PUAlbumPickerViewControllerSpec *_albumPickerViewControllerSpec;	// 24 = 0x18
    long long _sizeSubclass;	// 32 = 0x20
    struct CGSize _baseInterItemSpacing;	// 40 = 0x28
    struct UIEdgeInsets _safeAreaInsets;	// 56 = 0x38
    struct UIEdgeInsets _layoutMargins;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000357dbe
@property(readonly, nonatomic) long long sizeSubclass; // @synthesize sizeSubclass=_sizeSubclass;
@property(readonly, nonatomic) struct UIEdgeInsets layoutMargins; // @synthesize layoutMargins=_layoutMargins;
@property(nonatomic) struct UIEdgeInsets safeAreaInsets; // @synthesize safeAreaInsets=_safeAreaInsets;
@property(readonly, nonatomic) PUAlbumPickerViewControllerSpec *albumPickerViewControllerSpec; // @synthesize albumPickerViewControllerSpec=_albumPickerViewControllerSpec;
@property(readonly, nonatomic) PUPhotosPickerViewControllerSpec *photosPickerViewControllerSpec; // @synthesize photosPickerViewControllerSpec=_photosPickerViewControllerSpec;
@property(readonly, nonatomic) _Bool usesStackPopTransition; // @synthesize usesStackPopTransition=_usesStackPopTransition;
@property(readonly, nonatomic) _Bool canDisplayEditActionsInNavigationBar; // @synthesize canDisplayEditActionsInNavigationBar=_canDisplayEditActionsInNavigationBar;
@property(readonly, nonatomic) _Bool canDisplaySlideshowButton; // @synthesize canDisplaySlideshowButton=_canDisplaySlideshowButton;
@property(readonly, nonatomic) _Bool canDisplayOptionsInPopover; // @synthesize canDisplayOptionsInPopover=_canDisplayOptionsInPopover;
@property(readonly, nonatomic) struct CGSize baseInterItemSpacing; // @synthesize baseInterItemSpacing=_baseInterItemSpacing;
@property(readonly, nonatomic) struct UIEdgeInsets gridContentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets sectionHeaderInsets;
@property(readonly, nonatomic) long long sectionHeaderStyle;
@property(readonly, nonatomic) double sectionHeaderHeight;
@property(readonly, nonatomic) long long forceLoadInitialSectionCount;
@property(readonly, nonatomic) _Bool wantsCustomNavigationTransition;
@property(readonly, nonatomic) _Bool wantsBackButtonTitleForPhotoBrowser;
@property(readonly, nonatomic) _Bool displaysAvalancheStacks;
@property(readonly, nonatomic) _Bool canCommitPreview;
@property(readonly, nonatomic) _Bool shouldPlaceDeleteInCenterToolbarPosition;
@property(readonly, nonatomic) _Bool shouldPlaceSelectAllButtonInRightNavigationBar;
- (void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;	// IMP=0x0000000000357ba3
- (_Bool)shouldUseAspectItems;	// IMP=0x0000000000357b9b
@property(readonly, nonatomic) long long cellBannerTextAlignment;
@property(readonly, nonatomic) long long cellFillMode;
@property(readonly, nonatomic) unsigned short thumbnailImageFormat;
- (unsigned long long)supportedInterfaceOrientations;	// IMP=0x0000000000357afd
@property(readonly, nonatomic) struct CGSize contentSizeForViewInPopover;
- (id)init;	// IMP=0x00000000003579de

@end

