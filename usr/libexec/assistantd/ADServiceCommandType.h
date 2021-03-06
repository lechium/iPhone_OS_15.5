//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ADServiceCommandType : NSObject
{
    NSString *_domainName;	// 8 = 0x8
    NSString *_className;	// 16 = 0x10
}

+ (id)domainObjectCommitTypeForDomainNamed:(id)arg1;	// IMP=0x0040000000103757
+ (id)domainObjectCancelTypeForDomainNamed:(id)arg1;	// IMP=0x001000000010373b
+ (id)domainObjectDeleteTypeForDomainNamed:(id)arg1;	// IMP=0x001000000010371f
+ (id)domainObjectUpdateTypeForDomainNamed:(id)arg1;	// IMP=0x0010000000103703
+ (id)domainObjectRetrieveTypeForDomainNamed:(id)arg1;	// IMP=0x00100000001036e7
+ (id)domainObjectCreateTypeForDomainNamed:(id)arg1;	// IMP=0x00100000001036cb
+ (id)_serviceCommandTypeWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x001000000010365f
- (void).cxx_destruct;	// IMP=0x0020000000103a94
- (unsigned long long)hash;	// IMP=0x0010000000103a55
- (_Bool)isEqualToServiceCommandType:(id)arg1;	// IMP=0x0010000000103996
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000103939
- (id)description;	// IMP=0x00100000001038b1
- (id)qualifiedCommandName;	// IMP=0x0010000000103848
- (id)className;	// IMP=0x001000000010383a
- (id)domainName;	// IMP=0x001000000010382c
- (id)initWithDomainName:(id)arg1 className:(id)arg2;	// IMP=0x0010000000103773

@end

