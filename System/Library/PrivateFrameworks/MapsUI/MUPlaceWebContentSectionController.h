//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MKWebContentViewControllerDelegate-Protocol.h>
#import <MapsUI/MUPlaceSectionControlling-Protocol.h>

@class GEOWebContentModuleConfiguration, MKUGCCallToActionViewAppearance, MKWebContentViewController, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate, MUPlaceWebContentSectionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceWebContentSectionController <MKWebContentViewControllerDelegate, MUPlaceSectionControlling>
{
    GEOWebContentModuleConfiguration *_webContentConfig;	// 8 = 0x8
    MKWebContentViewController *_webContentViewController;	// 16 = 0x10
    MUPlaceSectionView *_sectionView;	// 24 = 0x18
    _Bool _shouldRemoveWebContent;	// 32 = 0x20
    id <MUPlaceWebContentSectionControllerDelegate> _webContentDelegate;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000003564f
@property(nonatomic) __weak id <MUPlaceWebContentSectionControllerDelegate> webContentDelegate; // @synthesize webContentDelegate=_webContentDelegate;
- (int)analyticsModuleType;	// IMP=0x0000000000035617
- (id)draggableContent;	// IMP=0x000000000003560f
- (void)webContentViewControllerDidStopLoading:(id)arg1;	// IMP=0x00000000000355c3
- (void)webContentViewController:(id)arg1 performHeightChangeWithBlock:(CDUnknownBlockType)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000035316
- (void)removeWebContentViewController:(id)arg1;	// IMP=0x000000000003525e
- (_Bool)isWebContentViewControllerParentPlacecardLoading:(id)arg1;	// IMP=0x0000000000035256
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) UIView *sectionView;
@property(readonly, nonatomic) UIViewController *sectionViewController;
- (void)_setupWebContentViewController;	// IMP=0x0000000000035001
- (id)initWithMapItem:(id)arg1 configuration:(id)arg2;	// IMP=0x0000000000034cdc

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

