//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawable;

__attribute__((visibility("hidden")))
@interface PDBuild : NSObject
{
    _Bool mIsAnimateBackground;	// 8 = 0x8
    OADDrawable *mDrawable;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000445371
- (id)description;	// IMP=0x0000000000445333
- (unsigned long long)hash;	// IMP=0x00000000004452e4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000445211
- (void)setDrawable:(id)arg1;	// IMP=0x0000000000445200
- (id)drawable;	// IMP=0x00000000004451f2
- (void)setIsAnimateBackground:(_Bool)arg1;	// IMP=0x00000000001e1f6f
- (_Bool)isAnimateBackground;	// IMP=0x00000000004451e9
- (id)init;	// IMP=0x00000000001e1f25

@end
