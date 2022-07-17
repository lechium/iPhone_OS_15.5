//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

@interface VNFeaturePrintObservation
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000133363
- (float)computeDistanceToFeaturePrintObservation:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000133682
- (_Bool)computeDistance:(float *)arg1 toFeaturePrintObservation:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001333a8
@property(readonly) NSData *data;
@property(readonly) unsigned long long elementCount;
@property(readonly) unsigned long long elementType;

@end
