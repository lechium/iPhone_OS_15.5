//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ReminderKit/NSSecureCoding-Protocol.h>

@class NSArray;

@interface REMAccountsDataViewInvocationREMObjectIDOnlyResult <NSSecureCoding>
{
    NSArray *_accountIDs;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000ac28f
- (void).cxx_destruct;	// IMP=0x00000000000ac5f6
@property(readonly, nonatomic) NSArray *accountIDs; // @synthesize accountIDs=_accountIDs;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000ac5da
- (unsigned long long)hash;	// IMP=0x00000000000ac596
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000ac468
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000ac3ef
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000ac305
- (id)initWithAccountIDs:(id)arg1;	// IMP=0x00000000000ac297

@end
