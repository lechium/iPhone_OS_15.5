//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class EQKitBox;

@interface EQKitVShift
{
    EQKitBox *mBox;	// 8 = 0x8
    double mOffset;	// 16 = 0x10
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
@property(readonly, nonatomic) EQKitBox *box; // @synthesize box=mBox;
- (id)description;	// IMP=0x000000000000fde2
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000fd0b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000fca4
- (_Bool)p_getTransform:(struct CGAffineTransform *)arg1 fromDescendant:(id)arg2;	// IMP=0x000000000000fc03
- (_Bool)appendOpticalAlignToSpec:(void *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000000fbda
- (void)renderIntoContext:(struct CGContext *)arg1 offset:(struct CGPoint)arg2;	// IMP=0x000000000000fb64
- (struct CGRect)erasableBounds;	// IMP=0x000000000000faeb
- (double)depth;	// IMP=0x000000000000fab7
- (double)height;	// IMP=0x000000000000fa83
- (double)width;	// IMP=0x000000000000fa66
- (void)dealloc;	// IMP=0x000000000000fa24
- (id)initWithBox:(id)arg1 offset:(double)arg2;	// IMP=0x000000000000f9b7
- (id)init;	// IMP=0x000000000000f9a0

@end

