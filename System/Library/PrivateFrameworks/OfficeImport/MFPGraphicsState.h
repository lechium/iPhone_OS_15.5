//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MFPGraphicsState : NSObject
{
    struct CGAffineTransform mPageTransform;	// 8 = 0x8
    struct CGAffineTransform mWorldTransform;	// 56 = 0x38
}

- (void)multiplyWorldTransformBy:(struct CGAffineTransform)arg1 order:(int)arg2;	// IMP=0x000000000036ca5d
- (void)setWorldTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000036c9e4
- (struct CGAffineTransform)worldTransform;	// IMP=0x000000000036c9c4
- (void)setPageTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000036c8f2
- (struct CGAffineTransform)pageTransform;	// IMP=0x000000000036c8d2
- (void)removeTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000036c86f
- (id)initWithGraphicsState:(id)arg1;	// IMP=0x000000000036c7d0
- (id)initWithDefaults;	// IMP=0x00000000001574f6

@end

