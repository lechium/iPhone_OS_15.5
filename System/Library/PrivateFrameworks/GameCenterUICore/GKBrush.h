//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterUICore/NSCopying-Protocol.h>

@interface GKBrush : NSObject <NSCopying>
{
}

+ (id)brush;	// IMP=0x0000000000007a6b
- (id)drawnImageForSize:(struct CGSize)arg1 opaque:(_Bool)arg2 input:(id)arg3;	// IMP=0x0000000000007b4b
- (double)scaleForInput:(id)arg1;	// IMP=0x0000000000007ad2
- (struct CGSize)sizeForInput:(id)arg1;	// IMP=0x0000000000007abc
- (void)drawInRect:(struct CGRect)arg1 withContext:(struct CGContext *)arg2 input:(id)arg3;	// IMP=0x0000000000007ab6
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007a7d

@end

