//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface NSConcreteValue
{
    unsigned long long _specialFlags;	// 8 = 0x8
    void *typeInfo;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000162002
+ (void)initialize;	// IMP=0x0000000000160ee0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016200a
- (id)description;	// IMP=0x0000000000161a38
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000001619ec
- (unsigned long long)hash;	// IMP=0x0000000000161976
- (_Bool)isEqualToValue:(id)arg1;	// IMP=0x000000000016182b
- (_Bool)_matchType:(const char *)arg1 size:(unsigned long long)arg2 strict:(_Bool)arg3;	// IMP=0x00000000001616af
- (const void *)_value;	// IMP=0x00000000001616a5
- (const char *)objCType;	// IMP=0x0000000000161690
- (void)getValue:(void *)arg1 size:(unsigned long long)arg2;	// IMP=0x00000000001615dd
- (void)getValue:(void *)arg1;	// IMP=0x00000000001615ad

@end
