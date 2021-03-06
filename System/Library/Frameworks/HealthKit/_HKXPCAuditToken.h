//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSString;

@interface _HKXPCAuditToken : NSObject <NSCopying>
{
    CDStruct_4c969caf _auditToken;	// 8 = 0x8
}

+ (id)signingIdentifierFromAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x000000000005706c
+ (id)auditTokenForCurrentTask;	// IMP=0x0000000000056ffb
@property(readonly, nonatomic) CDStruct_4c969caf auditToken; // @synthesize auditToken=_auditToken;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000005715b
- (unsigned long long)hash;	// IMP=0x0000000000057146
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000005713b
@property(readonly, copy, nonatomic) NSString *signingIdentifier;
@property(readonly, nonatomic) int processIdentifier;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;	// IMP=0x0000000000056f62

@end

