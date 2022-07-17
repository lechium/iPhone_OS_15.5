//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DrawingKit/NSCopying-Protocol.h>
#import <DrawingKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray;

@interface DKDrawing : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_strokes;	// 8 = 0x8
    struct CGRect _canvasBounds;	// 16 = 0x10
    struct CGRect _strokesFrame;	// 48 = 0x30
}

+ (void)resizeDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;	// IMP=0x000000000000e1d5
+ (id)copyOfDrawing:(id)arg1 toFitInBounds:(struct CGRect)arg2;	// IMP=0x000000000000e177
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d81c
- (void).cxx_destruct;	// IMP=0x000000000000e9bf
@property(nonatomic) struct CGRect strokesFrame; // @synthesize strokesFrame=_strokesFrame;
@property(nonatomic) struct CGRect canvasBounds; // @synthesize canvasBounds=_canvasBounds;
@property(retain, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (void)removeLastBrushStroke;	// IMP=0x000000000000e171
- (void)addBrushStroke:(id)arg1;	// IMP=0x000000000000e15b
- (id)mutableStrokes;	// IMP=0x000000000000e14d
- (id)decodedBrushStrokesWithArchiverEncodedBrushStrokes:(id)arg1;	// IMP=0x000000000000de83
- (id)encodeBrushStrokesForArchiving;	// IMP=0x000000000000dbc3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000dad6
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d7a4
@property(readonly, nonatomic) long long totalPoints;
- (void)reset;	// IMP=0x000000000000d5c3
- (id)init;	// IMP=0x000000000000d547

@end
