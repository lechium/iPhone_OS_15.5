//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSNumber, _SWCServiceSpecifier;

@interface _SWCServiceDetails : NSObject <SWCRedactedDescription, NSSecureCoding>
{
    struct SWCFields _fields;	// 8 = 0x8
    _SWCServiceSpecifier *_serviceSpecifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000014642
+ (id)new;	// IMP=0x00000000000140a6
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 auditToken:(CDStruct_6ad76789)arg4 error:(id *)arg5;	// IMP=0x0000000000014074
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0000000000014043
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 auditToken:(CDStruct_6ad76789)arg3 error:(id *)arg4;	// IMP=0x0000000000014009
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x0000000000013fd0
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013f96
+ (_Bool)auditTokenHasWriteAccess:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000014da0
+ (_Bool)currentProcessHasWriteAccess;	// IMP=0x0000000000014d5b
+ (_Bool)auditTokenHasReadAccess:(CDStruct_6ad76789)arg1;	// IMP=0x0000000000014d25
+ (_Bool)currentProcessHasReadAccess;	// IMP=0x0000000000014ce0
+ (void)synchronizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000155e8
+ (void)setAdditionalServiceDetailsForApplicationIdentifiers:(id)arg1 usingContentsOfDictionary:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000014f14
+ (void)setDeveloperModeEnabled:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000015951
+ (_Bool)isDeveloperModeEnabled;	// IMP=0x00000000000157db
+ (id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(unsigned long long)arg3 callerAuditToken:(const CDStruct_6ad76789 *)arg4 error:(id *)arg5;	// IMP=0x0000000000015aba
- (void).cxx_destruct;	// IMP=0x000000000001479e
@property(readonly) _SWCServiceSpecifier *serviceSpecifier; // @synthesize serviceSpecifier=_serviceSpecifier;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000146b8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001464a
- (id)redactedDescription;	// IMP=0x000000000001443f
- (id)debugDescription;	// IMP=0x00000000000143a0
- (id)description;	// IMP=0x0000000000014222
- (unsigned long long)hash;	// IMP=0x000000000001420c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000014188
- (id)_initWithServiceSpecifier:(id)arg1 fields:(const struct SWCFields *)arg2;	// IMP=0x00000000000140d4
- (id)init;	// IMP=0x00000000000140af
- (void)waitForSiteApprovalWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0000000000014ada
@property(readonly) unsigned char frameworkApprovalState;
@property(readonly) unsigned char siteApprovalState;
- (_Bool)setUserApprovalState:(unsigned char)arg1 error:(id *)arg2;	// IMP=0x00000000000147f1
@property(nonatomic) unsigned char userApprovalState;
@property(readonly, getter=isApproved) _Bool approved;
@property(readonly) BOOL modeOfOperation;
@property(readonly, getter=isEnterpriseManaged) _Bool enterpriseManaged;
@property(readonly, getter=isSystemPlaceholder) _Bool systemPlaceholder;
@property(readonly, getter=isWatchKitExtension) _Bool watchKitExtension;
@property(readonly, getter=isEnabledByDefault) NSNumber *enabledByDefault;
@property(readonly, getter=isAlwaysEnabled) _Bool alwaysEnabled;
@property(readonly, getter=wasProvidedByAdditionalServiceDetailsProvider) _Bool providedByAdditionalServiceDetailsProvider;
@property(readonly, getter=wasReadFromDisk) _Bool readFromDisk;
@property(readonly, getter=isSystemApplication) _Bool systemApplication;
@property(readonly, getter=isUpdating) _Bool updating;

@end

