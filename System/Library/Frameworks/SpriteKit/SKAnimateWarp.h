//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKAnimateWarp
{
    struct SKCAnimateMesh *_mycaction;	// 8 = 0x8
}

+ (id)animateWithWarps:(id)arg1 times:(id)arg2 restore:(_Bool)arg3;	// IMP=0x0000000000025788
+ (id)animateWithWarps:(id)arg1 times:(id)arg2;	// IMP=0x000000000002575c
+ (id)warpTo:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000025604
+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000254fe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000262b9
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000025fa5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025ed6
- (id)init;	// IMP=0x0000000000025506

@end
