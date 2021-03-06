//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VisualVoicemail/NSCopying-Protocol.h>
#import <VisualVoicemail/VMSecureCoding-Protocol.h>

@class NSString;

@interface VMHandle : NSObject <NSCopying, VMSecureCoding>
{
    long long _type;	// 8 = 0x8
    NSString *_value;	// 16 = 0x10
}

+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000007fce
+ (id)unarchivedObjectClasses;	// IMP=0x0000000000007f86
+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007aad
- (void).cxx_destruct;	// IMP=0x0000000000008074
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (id)archivedDataWithError:(id *)arg1;	// IMP=0x0000000000007f62
- (_Bool)isEqualToHandle:(id)arg1;	// IMP=0x0000000000007e86
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000007e1f
- (unsigned long long)hash;	// IMP=0x0000000000007dbd
- (id)debugDescription;	// IMP=0x0000000000007c6b
- (id)description;	// IMP=0x0000000000007c59
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007b61
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007ab5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000007a75
- (id)initWithType:(long long)arg1 value:(id)arg2;	// IMP=0x000000000000797f
- (id)initWithHandle:(id)arg1;	// IMP=0x00000000000078f3
- (id)init;	// IMP=0x00000000000078c8

@end

