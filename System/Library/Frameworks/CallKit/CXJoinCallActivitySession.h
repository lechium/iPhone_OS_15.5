//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CallKit/NSCopying-Protocol.h>
#import <CallKit/NSSecureCoding-Protocol.h>

@class CXJoinCallActivity, NSDate, NSUUID;

@interface CXJoinCallActivitySession : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_timestamp;	// 8 = 0x8
    NSUUID *_UUID;	// 16 = 0x10
    CXJoinCallActivity *_activity;	// 24 = 0x18
    unsigned long long _state;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000008226
- (void).cxx_destruct;	// IMP=0x00000000000085b7
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) CXJoinCallActivity *activity; // @synthesize activity=_activity;
@property(retain, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000083c0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000822e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008130
- (unsigned long long)hash;	// IMP=0x000000000000805d
- (_Bool)isEqualToJoinCallActivitySession:(id)arg1;	// IMP=0x0000000000007edb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007e7e
- (id)description;	// IMP=0x0000000000007d21
- (id)initWithActivity:(id)arg1;	// IMP=0x0000000000007c65

@end

