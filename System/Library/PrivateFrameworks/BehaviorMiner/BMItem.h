//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BehaviorMiner/NSCopying-Protocol.h>
#import <BehaviorMiner/NSSecureCoding-Protocol.h>

@class BMItemType, NSString;

@interface BMItem : NSObject <NSCopying, NSSecureCoding>
{
    BMItemType *_type;	// 8 = 0x8
    NSString *_normalizedValue;	// 16 = 0x10
    unsigned long long _absoluteSupport;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007f2a
+ (id)itemWithType:(id)arg1 UUIDValue:(id)arg2;	// IMP=0x00000000000078f4
+ (id)itemWithType:(id)arg1 numberValue:(id)arg2;	// IMP=0x0000000000007884
+ (id)itemWithType:(id)arg1 stringValue:(id)arg2;	// IMP=0x0000000000007814
- (void).cxx_destruct;	// IMP=0x000000000000820d
@property(nonatomic) unsigned long long absoluteSupport; // @synthesize absoluteSupport=_absoluteSupport;
@property(readonly, copy, nonatomic) NSString *normalizedValue; // @synthesize normalizedValue=_normalizedValue;
@property(readonly, nonatomic) BMItemType *type; // @synthesize type=_type;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000008155
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007f32
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007e95
- (id)description;	// IMP=0x0000000000007ddb
- (unsigned long long)hash;	// IMP=0x0000000000007d4e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007c0a
@property(readonly, copy, nonatomic) NSString *uniformIdentifier;
@property(readonly, copy, nonatomic) id value;
- (id)initWithType:(id)arg1 normalizedValue:(id)arg2;	// IMP=0x0000000000007a30
- (id)initWithType:(id)arg1 value:(id)arg2 absoluteSupport:(unsigned long long)arg3;	// IMP=0x0000000000007979
- (id)initWithType:(id)arg1 value:(id)arg2;	// IMP=0x0000000000007964

@end

