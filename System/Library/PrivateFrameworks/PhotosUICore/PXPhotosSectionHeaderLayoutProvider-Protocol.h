//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXAssetsDataSource, PXGLayout, PXPhotosGridFloatingHeaderSnapshot, PXPhotosLayoutSpec, PXPhotosSectionedLayout;
@protocol PXPhotosSectionedLayoutHeader;

@protocol PXPhotosSectionHeaderLayoutProvider <NSObject>
- (void)sectionedLayout:(PXPhotosSectionedLayout *)arg1 headerLayout:(PXGLayout<PXPhotosSectionedLayoutHeader> *)arg2 didChangeDataSource:(PXAssetsDataSource *)arg3 sectionIndexPath:(struct PXSimpleIndexPath)arg4 hasSectionChanges:(_Bool)arg5;
- (PXGLayout<PXPhotosSectionedLayoutHeader> *)createSectionHeaderLayoutForSectionedLayout:(PXPhotosSectionedLayout *)arg1 dataSource:(PXAssetsDataSource *)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3 spec:(PXPhotosLayoutSpec *)arg4 outShouldFloat:(_Bool *)arg5;

@optional
- (PXPhotosGridFloatingHeaderSnapshot *)floatingHeaderSnapshotForSectionedLayout:(PXPhotosSectionedLayout *)arg1 dataSource:(PXAssetsDataSource *)arg2 sectionIndexPath:(struct PXSimpleIndexPath)arg3;
@end

