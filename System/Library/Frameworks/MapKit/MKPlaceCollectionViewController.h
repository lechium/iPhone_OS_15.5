//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKPlaceSectionViewDelegate-Protocol.h>

@class MKPlaceSectionHeaderView, NSDictionary, NSMutableDictionary, NSString;
@protocol MKCollectionViewProvider;

__attribute__((visibility("hidden")))
@interface MKPlaceCollectionViewController <MKPlaceSectionViewDelegate, MKModuleViewControllerProtocol>
{
    NSDictionary *_collectionViews;	// 8 = 0x8
    NSMutableDictionary *_sectionsViews;	// 16 = 0x10
    MKPlaceSectionHeaderView *_headerView;	// 24 = 0x18
    _Bool _shouldReloadCollection;	// 32 = 0x20
    id <MKCollectionViewProvider> _viewProvider;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000007cfda
@property(nonatomic) __weak id <MKCollectionViewProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
- (void)sectionView:(id)arg1 didSelectFooter:(id)arg2;	// IMP=0x000000000007cfa7
- (void)sectionView:(id)arg1 didDeselectRow:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000007cfa1
- (void)sectionView:(id)arg1 didSelectHeader:(id)arg2;	// IMP=0x000000000007cf9b
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;	// IMP=0x000000000007cd86
- (void)reloadCollectionsAnimated:(_Bool)arg1;	// IMP=0x000000000007c1c5
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000007c175
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x000000000007c139
- (void)viewDidLoad;	// IMP=0x000000000007bf9b
- (_Bool)_canShowWhileLocked;	// IMP=0x000000000007bf93

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

