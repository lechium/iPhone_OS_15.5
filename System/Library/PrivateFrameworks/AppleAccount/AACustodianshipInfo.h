//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>
#import <AppleAccount/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface AACustodianshipInfo : NSObject <NSSecureCoding, NSCopying>
{
    NSUUID *_custodianID;	// 8 = 0x8
    long long _status;	// 16 = 0x10
    NSString *_ownerHandle;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000d35d
- (void).cxx_destruct;	// IMP=0x000000000000d483
@property(readonly, nonatomic) NSString *ownerHandle; // @synthesize ownerHandle=_ownerHandle;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(readonly, nonatomic) NSUUID *custodianID; // @synthesize custodianID=_custodianID;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000d3ec
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000d365
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000d278
- (id)initWithID:(id)arg1 status:(long long)arg2 ownerHandle:(id)arg3;	// IMP=0x000000000000d1d3

@end

