//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol _PXDetailsAutoplayTile;

@interface _PXDetailsPlaybackRecord
{
    struct PXTileIdentifier _tileIdentifier;	// 8 = 0x8
}

@property(nonatomic) struct PXTileIdentifier tileIdentifier; // @synthesize tileIdentifier=_tileIdentifier;
- (long long)desiredPlayState;	// IMP=0x00000000009338d1
- (void)setDesiredPlayState:(long long)arg1;	// IMP=0x00000000009337c0

// Remaining properties
@property(readonly, nonatomic) id <_PXDetailsAutoplayTile> geometryReference; // @dynamic geometryReference;

@end
