//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MKPolyline;

@interface MKPolylineView
{
}

- (void)drawMapRect:(CDStruct_02837cd9)arg1 zoomScale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000000ac7c8
- (void)createPath;	// IMP=0x00000000000ac699
@property(readonly, nonatomic) MKPolyline *polyline;
- (id)initWithPolyline:(id)arg1;	// IMP=0x00000000000ac675

@end

