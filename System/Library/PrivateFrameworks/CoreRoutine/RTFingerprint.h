//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreRoutine/NSCopying-Protocol.h>
#import <CoreRoutine/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSUUID;

@interface RTFingerprint : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    unsigned long long _settledState;	// 16 = 0x10
    NSDate *_start;	// 24 = 0x18
    NSArray *_accessPoints;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001f674
- (void).cxx_destruct;	// IMP=0x000000000001fdb8
@property(readonly, nonatomic) NSArray *accessPoints; // @synthesize accessPoints=_accessPoints;
@property(readonly, nonatomic) NSDate *start; // @synthesize start=_start;
@property(readonly, nonatomic) unsigned long long settledState; // @synthesize settledState=_settledState;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001f979
- (unsigned long long)hash;	// IMP=0x000000000001f8dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001f812
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001f67c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001f61f
- (id)description;	// IMP=0x000000000001f566
- (id)initWithIdentifier:(id)arg1 settledState:(unsigned long long)arg2 start:(id)arg3 accessPoints:(id)arg4;	// IMP=0x000000000001f34a
- (id)init;	// IMP=0x000000000001f31b

@end
