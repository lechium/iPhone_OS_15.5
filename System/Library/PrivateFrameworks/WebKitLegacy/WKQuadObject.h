//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WKQuadObject : NSObject
{
    struct _WKQuad _quad;	// 8 = 0x8
}

- (struct CGRect)boundingBox;	// IMP=0x000000000001c0e0
- (struct _WKQuad)quad;	// IMP=0x000000000001c0b0
- (id)initWithQuad:(struct _WKQuad)arg1;	// IMP=0x000000000001c050

@end

