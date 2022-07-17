//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSValue.h>

@interface NSValue (MKAdditions)
+ (id)_mapkit_valueWithCGAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000022bab7
+ (id)_mapkit_valueWithCGPoint:(struct CGPoint)arg1;	// IMP=0x000000000022ba36
+ (id)valueWithMKCoordinateSpan:(CDStruct_c3b9c2ee)arg1;	// IMP=0x00000000002625ff
+ (id)valueWithMKCoordinate:(struct CLLocationCoordinate2D)arg1;	// IMP=0x00000000002625ba
- (CDStruct_02837cd9)MKMapRectValue;	// IMP=0x000000000012e146
- (id)_mapkit_initWithMKMapRect:(CDStruct_02837cd9)arg1;	// IMP=0x000000000012e128
- (CDStruct_c0a8b48f)_mapkit_zoomRegionValue;	// IMP=0x000000000012e0ec
- (id)_mapkit_initWithZoomRegion:(CDStruct_c0a8b48f)arg1;	// IMP=0x000000000012e0ce
- (id)_mapkit_initWithCGRect:(struct CGRect)arg1;	// IMP=0x000000000012e0b0
- (struct CGRect)CADoubleRectValue;	// IMP=0x000000000012e078
- (id)_mapkit_initWithCADoubleRect:(struct CGRect)arg1;	// IMP=0x000000000012e05a
- (struct CGPoint)CADoublePointValue;	// IMP=0x000000000012e022
- (id)_mapkit_initWithCADoublePoint:(struct CGPoint)arg1;	// IMP=0x000000000012dff3
- (id)_mapkit_initWithCGPoint:(struct CGPoint)arg1;	// IMP=0x000000000012dfc4
- (struct CGAffineTransform)_mapkit_CGAffineTransformValue;	// IMP=0x000000000022ba7b
- (struct CGPoint)_mapkit_CGPointValue;	// IMP=0x000000000022ba24
- (struct CGRect)_mapkit_CGRectValue;	// IMP=0x000000000022ba05
@property(readonly) CDStruct_c3b9c2ee MKCoordinateSpanValue;
@property(readonly) struct CLLocationCoordinate2D MKCoordinateValue;
@end
