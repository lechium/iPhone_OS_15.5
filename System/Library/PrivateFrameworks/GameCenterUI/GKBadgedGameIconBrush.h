//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterUICore/GKThemeBrush.h>

@interface GKBadgedGameIconBrush : GKThemeBrush
{
    GKThemeBrush *_badgeBrush;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000c65e4
@property(retain, nonatomic) GKThemeBrush *badgeBrush; // @synthesize badgeBrush=_badgeBrush;
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x00000000000c6340
- (double)scaleForInput:(id)arg1;	// IMP=0x00000000000c62c5
- (struct CGSize)sizeForInput:(id)arg1;	// IMP=0x00000000000c61e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c616d
- (id)init;	// IMP=0x00000000000c60fe

@end

