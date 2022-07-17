//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface PKModifyStrokesCommand
{
    _Bool _hide;	// 8 = 0x8
    NSArray *_strokes;	// 16 = 0x10
}

+ (id)commandForErasingStrokes:(id)arg1 drawing:(id)arg2;	// IMP=0x00000000001a37ec
+ (id)commandForErasingAllStrokesInDrawing:(id)arg1;	// IMP=0x00000000001a36a5
+ (id)commandForMakingStrokesVisible:(id)arg1 drawing:(id)arg2 hiding:(_Bool)arg3;	// IMP=0x00000000001a3568
+ (id)commandForMakingStrokeVisible:(id)arg1 drawing:(id)arg2 hiding:(_Bool)arg3;	// IMP=0x00000000001a33c8
- (void).cxx_destruct;	// IMP=0x00000000001a3d7f
@property(readonly, nonatomic) _Bool hide; // @synthesize hide=_hide;
@property(readonly, nonatomic) NSArray *strokes; // @synthesize strokes=_strokes;
- (id)description;	// IMP=0x00000000001a3c49
- (void)applyToDrawing:(id)arg1;	// IMP=0x00000000001a3b29
- (id)invertedInDrawing:(id)arg1;	// IMP=0x00000000001a3a21
- (id)initWithStrokes:(id)arg1 drawingUUID:(id)arg2 actionName:(id)arg3 hiding:(_Bool)arg4;	// IMP=0x00000000001a3928

@end
