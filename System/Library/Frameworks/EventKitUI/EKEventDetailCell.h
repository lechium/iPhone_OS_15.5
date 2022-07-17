//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EKEvent;

@interface EKEventDetailCell
{
    EKEvent *_event;	// 8 = 0x8
    _Bool _editable;	// 16 = 0x10
    double _lastLaidOutWidth;	// 24 = 0x18
    int _lastLaidOutPosition;	// 32 = 0x20
}

+ (double)detailsCellDefaultHeight;	// IMP=0x00000000000b9ccf
+ (double)detailsPostLabelSpace;	// IMP=0x00000000000b9cb5
+ (double)detailsBottomVerticalInset;	// IMP=0x00000000000b9c9b
+ (double)detailsTopVerticalInset;	// IMP=0x00000000000b9c81
+ (double)_scaledDistanceCalculatedFromBottomToBaseline:(double)arg1;	// IMP=0x00000000000b9abd
+ (double)_scaledDistanceCalculatedFromTopFromBaseline:(double)arg1;	// IMP=0x00000000000b99ec
+ (id)_bodyFontAtDefaultSize;	// IMP=0x00000000000b99cb
- (void).cxx_destruct;	// IMP=0x00000000000b9d4b
- (double)detailsRightInset;	// IMP=0x00000000000b9c28
- (double)detailsLeftInset;	// IMP=0x00000000000b9bcf
- (void)layoutMarginsDidChange;	// IMP=0x00000000000b9b8e
- (_Bool)needsLayoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000000b99a2
- (void)layoutForWidth:(double)arg1 position:(int)arg2;	// IMP=0x00000000000b993f
- (void)sizeToFit;	// IMP=0x00000000000b98a2
- (_Bool)update;	// IMP=0x00000000000b989a
@property(readonly, nonatomic) _Bool isEditable;
- (void)setEvent:(id)arg1;	// IMP=0x00000000000b9839
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2 style:(long long)arg3;	// IMP=0x00000000000b97c9
- (id)initWithEvent:(id)arg1 editable:(_Bool)arg2;	// IMP=0x00000000000b97b4

@end
