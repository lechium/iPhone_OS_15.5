//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HWEncoding : NSObject
{
}

+ (id)protoDrawingFromDrawing:(id)arg1 compress:(_Bool)arg2;	// IMP=0x000000000000430f
+ (void)writeDataToDisk:(id)arg1 withName:(id)arg2;	// IMP=0x0000000000004120
+ (id)decodedBrushStrokesWithData:(id)arg1 inCanvasBounds:(struct CGRect)arg2 inStrokesFrame:(struct CGRect)arg3 strokeDataFieldCount:(unsigned int)arg4 count:(unsigned long long)arg5;	// IMP=0x0000000000003c2d
+ (id)encodeBrushStrokesAsData:(id)arg1 inCanvasBounds:(struct CGRect)arg2 inStrokesFrame:(struct CGRect)arg3;	// IMP=0x000000000000362d
+ (id)protoMessageFromHandwriting:(id)arg1;	// IMP=0x0000000000003530
+ (id)decodeHandwritingFromData:(id)arg1;	// IMP=0x0000000000002f88
+ (id)encodeHandwriting:(id)arg1 compress:(_Bool)arg2;	// IMP=0x0000000000002e78

@end

