//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface CorrectedLocationMapItemWaypointRequest
{
    struct CLLocationCoordinate2D _coordinate;	// 16 = 0x10
}

- (struct CLLocationCoordinate2D)coordinate;	// IMP=0x0020000000a43891
- (void)recordRAPInformation:(id)arg1;	// IMP=0x0010000000a437d3
- (id)loadComposedWaypointWithTraits:(id)arg1 clientResolvedCompletionHandler:(CDUnknownBlockType)arg2 completionHandler:(CDUnknownBlockType)arg3 networkActivityHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000a436a4
- (id)mapItemForLocationComparison;	// IMP=0x0010000000a4369c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0010000000a43641
- (id)initWithMapItem:(id)arg1;	// IMP=0x0010000000a435a0
- (id)initWithCorrectedCoordinate:(struct CLLocationCoordinate2D)arg1 mapItem:(id)arg2;	// IMP=0x0010000000a434f6

@end

