//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/NSLayoutManager.h>

@class NSAttributedString;

@interface _HKClinicalBulletedListLayoutManager : NSLayoutManager
{
    struct CGSize _bulletSize;	// 8 = 0x8
    NSAttributedString *_bullet;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000009d95d
@property(copy, nonatomic) NSAttributedString *bullet; // @synthesize bullet=_bullet;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;	// IMP=0x000000000009d55d

@end

