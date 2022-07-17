//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSString;

@interface CNReputationHandle : NSObject <NSCopying>
{
    NSString *_stringValue;	// 8 = 0x8
    long long _type;	// 16 = 0x10
}

+ (id)descriptionForType:(long long)arg1;	// IMP=0x00000000000c43eb
+ (id)handleWithPhoneNumber:(id)arg1;	// IMP=0x00000000000c4201
+ (id)handleWithEmailAddress:(id)arg1;	// IMP=0x00000000000c41af
+ (id)handleWithStringValue:(id)arg1;	// IMP=0x00000000000c4160
- (void).cxx_destruct;	// IMP=0x00000000000c48c7
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
- (void)configureBuilder:(id)arg1;	// IMP=0x00000000000c486d
- (unsigned long long)hash;	// IMP=0x00000000000c4736
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000c453f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000c4534
- (id)description;	// IMP=0x00000000000c42e4
- (id)initWithStringValue:(id)arg1 type:(long long)arg2;	// IMP=0x00000000000c4253

@end
