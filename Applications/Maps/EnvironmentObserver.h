//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapView, NSString;

__attribute__((visibility("hidden")))
@interface EnvironmentObserver : NSObject
{
    MKMapView *_mapView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000075895a
@property(nonatomic) __weak MKMapView *mapView; // @synthesize mapView=_mapView;
- (void)updateCurrentEnvironmentName;	// IMP=0x001000000075874d
- (void)valueChangedForGEOConfigKey:(CDStruct_065526f1)arg1;	// IMP=0x001000000075873b
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;	// IMP=0x0010000000758729
- (void)dealloc;	// IMP=0x00100000007586f3
- (id)init;	// IMP=0x00100000007585e6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

