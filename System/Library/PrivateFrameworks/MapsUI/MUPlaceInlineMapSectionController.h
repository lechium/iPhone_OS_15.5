//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceSectionControlling-Protocol.h>

@class CLLocation, MKPlaceInlineMapViewController, MKPlacePoisInlineMapViewController, MKUGCCallToActionViewAppearance, MUPlaceSectionFooterViewModel, MUPlaceSectionHeaderViewModel, MUPlaceSectionView, NSString, UIView, UIViewController;
@protocol MUInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MUPlaceInlineMapSectionController <MUPlaceSectionControlling>
{
    MKPlaceInlineMapViewController *_inlineMapViewController;	// 8 = 0x8
    MKPlacePoisInlineMapViewController *_poiInlineMapViewController;	// 16 = 0x10
    MUPlaceSectionView *_sectionView;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000056af3
- (int)analyticsModuleType;	// IMP=0x0000000000056ae8
@property(readonly, nonatomic) _Bool hasContent;
@property(readonly, nonatomic) MUPlaceSectionHeaderViewModel *sectionHeaderViewModel;
@property(readonly, nonatomic) UIViewController *sectionViewController;
@property(readonly, nonatomic) UIView *sectionView;
- (void)updateWithMapItem:(id)arg1;	// IMP=0x00000000000568d9
@property(retain, nonatomic) CLLocation *location;
- (void)_setupInlineMap;	// IMP=0x00000000000567a4
- (id)initWithMapItem:(id)arg1;	// IMP=0x000000000005668e

// Remaining properties
@property(nonatomic, getter=isActive) _Bool active;
@property(nonatomic) __weak id <MUInfoCardAnalyticsDelegate> analyticsDelegate;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) MUPlaceSectionFooterViewModel *sectionFooterViewModel;
@property(retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;
@property(readonly) Class superclass;

@end

