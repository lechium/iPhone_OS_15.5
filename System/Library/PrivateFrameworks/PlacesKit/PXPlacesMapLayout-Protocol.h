//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PlacesKit/PXPlacesMapPipelineComponent-Protocol.h>

@class PXPlacesMapViewPort;
@protocol PXPlacesGeotaggable, PXPlacesGeotaggedItemDataSource, PXPlacesGeotaggedItemDataSourceChange, PXPlacesMapLayoutItem, PXPlacesMapLayoutResult;

@protocol PXPlacesMapLayout <PXPlacesMapPipelineComponent>
@property(readonly) id <PXPlacesGeotaggedItemDataSource> dataSource;
- (id <PXPlacesMapLayoutItem>)layoutItemForGeotaggable:(id <PXPlacesGeotaggable>)arg1;
- (id <PXPlacesMapLayoutResult>)layoutForViewPort:(PXPlacesMapViewPort *)arg1 andDataSourceChange:(id <PXPlacesGeotaggedItemDataSourceChange>)arg2;
@end

