//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthUI/NSCopying-Protocol.h>

@interface HKFillStyle : NSObject <NSCopying>
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000289d5d
- (void)renderPath:(struct CGPath *)arg1 context:(struct CGContext *)arg2 axisRect:(struct CGRect)arg3 alpha:(double)arg4;	// IMP=0x0000000000289cb8
- (void)clearCache;	// IMP=0x0000000000289cb2

@end

