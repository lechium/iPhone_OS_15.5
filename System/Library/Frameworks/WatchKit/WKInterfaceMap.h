//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface WKInterfaceMap
{
}

- (void)removeAllAnnotations;	// IMP=0x00000000000356f0
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withPinColor:(long long)arg2;	// IMP=0x00000000000355d3
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImageNamed:(id)arg2 centerOffset:(struct CGPoint)arg3;	// IMP=0x0000000000035469
- (void)addAnnotation:(struct CLLocationCoordinate2D)arg1 withImage:(id)arg2 centerOffset:(struct CGPoint)arg3;	// IMP=0x0000000000035316
- (void)setRegion:(CDStruct_2b0c6e0b)arg1;	// IMP=0x000000000003503d
- (void)setVisibleMapRect:(CDStruct_90e2a262)arg1;	// IMP=0x0000000000034efc

@end
