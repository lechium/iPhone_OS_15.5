//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DrawingKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface DKDrawingStroke : NSObject <NSCopying>
{
    NSMutableArray *_strokePoints;	// 8 = 0x8
}

+ (id)drawingStrokeWithData:(id)arg1 count:(unsigned long long)arg2;	// IMP=0x000000000000ead0
- (void).cxx_destruct;	// IMP=0x000000000000ee69
@property(readonly) NSMutableArray *strokePoints; // @synthesize strokePoints=_strokePoints;
- (id)_decodeDKEncodedDrawingPointDataAsArray:(id)arg1 count:(long long)arg2;	// IMP=0x000000000000ecfa
- (id)_encodePointsDrawingPointData:(id)arg1;	// IMP=0x000000000000eb7b
- (id)encodedBrushStroke;	// IMP=0x000000000000eaba
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000ea35
- (id)init;	// IMP=0x000000000000e9cf

@end

