//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class NSMutableArray;

@interface ICValueHistory : NSObject <NSCopying, NSSecureCoding>
{
    NSMutableArray *_items;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e5601
- (void).cxx_destruct;	// IMP=0x00000000000e53b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e5395
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e52ad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000e5232
- (unsigned long long)hash;	// IMP=0x00000000000e521c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000e51b4
- (void)removeValuesBeforeTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e50f2
- (void)removeAllValues;	// IMP=0x00000000000e50d8
- (id)lastValueAndTimestamp:(unsigned long long *)arg1;	// IMP=0x00000000000e5057
- (id)lastValue;	// IMP=0x00000000000e5003
- (id)firstValueBeforeOrEqualToTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e4f23
- (id)firstValueBeforeTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e4e43
- (id)firstValueAfterOrEqualToTimestamp:(unsigned long long)arg1;	// IMP=0x00000000000e4d65
- (void)enumerateValuesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000e4cd1
@property(readonly, nonatomic) long long count;
- (void)addValuesFromHistory:(id)arg1;	// IMP=0x00000000000e4c69
- (void)addValue:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x00000000000e4adf

@end
