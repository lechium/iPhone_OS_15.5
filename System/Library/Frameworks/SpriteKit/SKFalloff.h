//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface SKFalloff
{
    struct SKCFalloff *_mycaction;	// 8 = 0x8
}

+ (id)falloffBy:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000011097
+ (id)falloffTo:(double)arg1 duration:(double)arg2;	// IMP=0x0000000000011016
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001093c
- (id)reversedAction;	// IMP=0x00000000000111c3
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001113d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000010da4
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000010a3f
- (id)init;	// IMP=0x0000000000010944

@end

