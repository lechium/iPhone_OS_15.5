//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetCollectionReference, PXCuratedLibraryViewModel;

@protocol PXCuratedLibraryViewModelPresenter <NSObject>
- (PXAssetCollectionReference *)viewModel:(PXCuratedLibraryViewModel *)arg1 dominantAssetCollectionReferenceForZoomLevel:(long long)arg2;

@optional
- (long long)viewModel:(PXCuratedLibraryViewModel *)arg1 transitionTypeFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 didTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
- (void)viewModel:(PXCuratedLibraryViewModel *)arg1 willTransitionFromZoomLevel:(long long)arg2 toZoomLevel:(long long)arg3;
@end

