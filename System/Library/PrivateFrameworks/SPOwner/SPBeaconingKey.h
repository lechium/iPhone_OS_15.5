//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>

@class NSData, NSDateInterval;

@interface SPBeaconingKey : NSObject <NSCopying, NSSecureCoding>
{
    NSDateInterval *_dateInterval;	// 8 = 0x8
    NSData *_key;	// 16 = 0x10
    NSData *_secondaryKey;	// 24 = 0x18
    unsigned long long _primaryIndex;	// 32 = 0x20
    unsigned long long _secondaryIndex;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a5dd
- (void).cxx_destruct;	// IMP=0x000000000001ac0a
@property(nonatomic) unsigned long long secondaryIndex; // @synthesize secondaryIndex=_secondaryIndex;
@property(nonatomic) unsigned long long primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property(copy, nonatomic) NSData *secondaryKey; // @synthesize secondaryKey=_secondaryKey;
@property(copy, nonatomic) NSData *key; // @synthesize key=_key;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
- (id)description;	// IMP=0x000000000001aa95
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a924
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a824
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001a749
- (id)initWithDateInterval:(id)arg1 key:(id)arg2 secondaryKey:(id)arg3 primaryIndex:(unsigned long long)arg4 secondaryIndex:(unsigned long long)arg5;	// IMP=0x000000000001a67e
- (id)initWithDateInterval:(id)arg1 key:(id)arg2;	// IMP=0x000000000001a5e5

@end
