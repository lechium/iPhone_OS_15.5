//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TSPData, TSUColor;

@interface TSDMutableImageFill
{
}

@property(nonatomic) _Bool interpretsUntaggedImageDataAsGeneric; // @dynamic interpretsUntaggedImageDataAsGeneric;
- (void)setScale:(double)arg1;	// IMP=0x0000000000180634
@property(nonatomic) struct CGSize fillSize; // @dynamic fillSize;
@property(retain, nonatomic) TSPData *imageData; // @dynamic imageData;
@property(nonatomic) int technique; // @dynamic technique;
@property(copy, nonatomic) TSUColor *tintColor; // @dynamic tintColor;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001803dd

@end

