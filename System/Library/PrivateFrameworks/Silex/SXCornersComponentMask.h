//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface SXCornersComponentMask
{
}

@property(readonly, nonatomic) unsigned long long cornerMask;
- (id)curveWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082ebe
- (_Bool)cornerWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082e9b
- (_Bool)bottomLeftWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082e89
- (_Bool)bottomRightWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082e77
- (_Bool)topRightWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082e65
- (_Bool)topLeftWithValue:(id)arg1 withType:(int)arg2;	// IMP=0x0000000000082e53

// Remaining properties
@property(readonly, nonatomic) _Bool bottomLeft; // @dynamic bottomLeft;
@property(readonly, nonatomic) _Bool bottomRight; // @dynamic bottomRight;
@property(readonly, nonatomic) NSString *curve; // @dynamic curve;
@property(readonly, nonatomic) struct _SXConvertibleValue radius; // @dynamic radius;
@property(readonly, nonatomic) _Bool topLeft; // @dynamic topLeft;
@property(readonly, nonatomic) _Bool topRight; // @dynamic topRight;

@end

