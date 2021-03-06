//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CarChromeViewController, MKMapItem, Route;

__attribute__((visibility("hidden")))
@interface CarRouteGeniusAnnotationsManager : NSObject
{
    CarChromeViewController *_chromeViewController;	// 8 = 0x8
    Route *_route;	// 16 = 0x10
    MKMapItem *_destination;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000062469c
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
- (id)mapView;	// IMP=0x001000000062463e
- (void)updateTrafficForRoute:(id)arg1;	// IMP=0x00100000006244dd
- (void)setComposedRoute:(id)arg1;	// IMP=0x0010000000623f92
- (void)clearAnnotations;	// IMP=0x0010000000623ee0
- (void)_updateRouteAnnotation;	// IMP=0x0010000000623bd5
- (void)recenterCameraOnRouteAnimated:(_Bool)arg1;	// IMP=0x00100000006239ff
- (id)initWithChromeViewController:(id)arg1;	// IMP=0x001000000062399b

@end

