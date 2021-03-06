//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Foundation/NSCopying-Protocol.h>
#import <Foundation/NSSecureCoding-Protocol.h>

@interface NSValue : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000163770
+ (id)valueWithEdgeInsets:(struct NSEdgeInsets)arg1;	// IMP=0x0000000000163316
+ (id)valueWithRange:(struct _NSRange)arg1;	// IMP=0x00000000001632bc
+ (id)valueWithRect:(struct CGRect)arg1;	// IMP=0x0000000000163297
+ (id)valueWithSize:(struct CGSize)arg1;	// IMP=0x000000000016323e
+ (id)valueWithPoint:(struct CGPoint)arg1;	// IMP=0x00000000001631e5
+ (id)valueWithPointer:(const void *)arg1;	// IMP=0x0000000000163113
+ (id)valueWithWeakObject:(id)arg1;	// IMP=0x0000000000163059
+ (id)valueWithNonretainedObject:(id)arg1;	// IMP=0x0000000000163003
+ (id)valueWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x00000000001627d9
+ (id)value:(const void *)arg1 withObjCType:(const char *)arg2;	// IMP=0x00000000001627c7
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000162730
- (id)initWithBytes:(const void *)arg1 objCType:(const char *)arg2;	// IMP=0x0000000000163d90
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000163778
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000001635aa
- (Class)classForCoder;	// IMP=0x000000000016359d
- (struct NSEdgeInsets)edgeInsetsValue;	// IMP=0x000000000016353c
- (struct _NSRange)rangeValue;	// IMP=0x00000000001634b4
- (struct CGRect)rectValue;	// IMP=0x0000000000163453
- (struct CGSize)sizeValue;	// IMP=0x00000000001633c7
- (struct CGPoint)pointValue;	// IMP=0x000000000016333b
- (void *)pointerValue;	// IMP=0x0000000000163169
- (id)weakObjectValue;	// IMP=0x000000000016310b
- (id)nonretainedObjectValue;	// IMP=0x000000000016308f
- (id)description;	// IMP=0x0000000000162f2e
- (unsigned long long)hash;	// IMP=0x0000000000162e01
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000162dab
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x0000000000162c61
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000162b82
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2 strict:(_Bool)arg3;	// IMP=0x0000000000162ae7
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x0000000000162ad2
@property(readonly) const char *objCType;
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000016292f
- (void)getValue:(void *)arg1;	// IMP=0x00000000001627f3
- (id)init;	// IMP=0x000000000016274e
- (_Bool)isNSValue__;	// IMP=0x0000000000107dff
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00000000001c8aa3

@end

