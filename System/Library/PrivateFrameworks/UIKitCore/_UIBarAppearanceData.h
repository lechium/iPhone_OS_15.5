//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIBarAppearanceData : NSObject <NSCopying>
{
    _Bool _immutable;	// 8 = 0x8
}

+ (id)decodeFromCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00000000001115dc
- (void)markReadOnly;	// IMP=0x000000000011168f
- (void)assertMutable:(SEL)arg1;	// IMP=0x000000000011161b
- (id)replicate;	// IMP=0x0000000000111601
- (_Bool)checkEqualTo:(id)arg1;	// IMP=0x00000000001115f9
- (long long)hashInto:(long long)arg1;	// IMP=0x00000000001115f0
- (void)describeInto:(id)arg1;	// IMP=0x00000000001115ea
- (void)encodeToCoder:(id)arg1 prefix:(id)arg2;	// IMP=0x00000000001115e4
- (id)description;	// IMP=0x0000000000111539
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001114c9
- (unsigned long long)hash;	// IMP=0x00000000001114b5
- (id)writableInstance;	// IMP=0x0000000000111485
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011145d

@end
