//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface RAPAppStateFactory : NSObject
{
}

+ (void)createAppStateWithTraits:(id)arg1 curatedCollectionContext:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0040000000970557
+ (void)createAppStateWithMapView:(id)arg1 muninContext:(id)arg2 traits:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000097049f
+ (void)createAppStateWithMapView:(id)arg1 traits:(id)arg2 place:(id)arg3 searchDataSource:(id)arg4 directionsDataSource:(id)arg5 shouldLoadHomeWorkShortcuts:(_Bool)arg6 completion:(CDUnknownBlockType)arg7;	// IMP=0x001000000096f8d3
+ (void)createAppStateWithMapView:(id)arg1 traits:(id)arg2 place:(id)arg3 searchDataSource:(id)arg4 directionsDataSource:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000096f8a9

@end
