//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXRegion : NSObject
{
}

- (const struct CGPath *)createPathInRect:(struct CGRect)arg1;	// IMP=0x000000000017db48
- (double)valueAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000017daa1
- (double)opacityAtPoint:(struct CGPoint)arg1;	// IMP=0x000000000017da7e
- (id)transformedWithAffineTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000017d9d7
- (id)denormalizedWithBasisRect:(struct CGRect)arg1;	// IMP=0x000000000017d953
- (id)normalizedWithBasisRect:(struct CGRect)arg1;	// IMP=0x000000000017d8cf

@end

