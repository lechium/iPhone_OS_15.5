//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMContainerClassPath, MCMPOSIXUser, NSString, NSURL;

@interface MCMContainerPath : NSObject
{
    unsigned short _rootPOSIXMode;	// 8 = 0x8
    unsigned short _dataPOSIXMode;	// 10 = 0xa
    unsigned short _schemaPOSIXMode;	// 12 = 0xc
    NSURL *_containerDataURL;	// 16 = 0x10
    NSURL *_containerRootURL;	// 24 = 0x18
    NSString *_containerPathIdentifier;	// 32 = 0x20
    MCMContainerClassPath *_containerClassPath;	// 40 = 0x28
    MCMPOSIXUser *_rootPOSIXOwner;	// 48 = 0x30
    MCMPOSIXUser *_dataPOSIXOwner;	// 56 = 0x38
    MCMPOSIXUser *_schemaPOSIXOwner;	// 64 = 0x40
    NSString *_containerRootComponent;	// 72 = 0x48
    NSString *_containerDataComponent;	// 80 = 0x50
}

+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)arg1 user:(id)arg2;	// IMP=0x00200000000a5678
+ (Class)_containerClassPathClass;	// IMP=0x00100000000a5667
+ (id)containerPathFromURL:(id)arg1 containerClassPath:(id)arg2 relativePath:(id *)arg3;	// IMP=0x00100000000a5420
+ (id)containerPathIdentifierForCodeSignIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x00100000000a5393
+ (id)containerPathForContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2;	// IMP=0x00100000000a526c
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 containerPathIdentifier:(id)arg3;	// IMP=0x00100000000a517a
+ (id)containerPathForContainerIdentity:(id)arg1 containerPathIdentifier:(id)arg2;	// IMP=0x00100000000a50c3
- (void).cxx_destruct;	// IMP=0x00200000000a4e38
@property(readonly, nonatomic) NSString *containerDataComponent; // @synthesize containerDataComponent=_containerDataComponent;
@property(readonly, nonatomic) NSString *containerRootComponent; // @synthesize containerRootComponent=_containerRootComponent;
@property(readonly, nonatomic) unsigned short schemaPOSIXMode; // @synthesize schemaPOSIXMode=_schemaPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner; // @synthesize schemaPOSIXOwner=_schemaPOSIXOwner;
@property(readonly, nonatomic) unsigned short dataPOSIXMode; // @synthesize dataPOSIXMode=_dataPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner; // @synthesize dataPOSIXOwner=_dataPOSIXOwner;
@property(readonly, nonatomic) unsigned short rootPOSIXMode; // @synthesize rootPOSIXMode=_rootPOSIXMode;
@property(readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner; // @synthesize rootPOSIXOwner=_rootPOSIXOwner;
@property(readonly, nonatomic) MCMContainerClassPath *containerClassPath; // @synthesize containerClassPath=_containerClassPath;
@property(readonly, nonatomic) NSString *containerPathIdentifier; // @synthesize containerPathIdentifier=_containerPathIdentifier;
@property(readonly, nonatomic) NSURL *containerRootURL; // @synthesize containerRootURL=_containerRootURL;
@property(readonly, nonatomic) NSURL *containerDataURL; // @synthesize containerDataURL=_containerDataURL;
- (_Bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 error:(id *)arg5;	// IMP=0x00100000000a4c42
- (_Bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;	// IMP=0x00100000000a4c07
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a4ac7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000a4a5e
- (_Bool)isEqualToContainerPath:(id)arg1;	// IMP=0x00100000000a49de
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2 containerRootComponent:(id)arg3 containerDataComponent:(id)arg4;	// IMP=0x00100000000a4644
@property(readonly, nonatomic) NSURL *classURL;
@property(readonly, nonatomic) NSURL *categoryURL;
@property(readonly, nonatomic) NSURL *baseURL;
- (_Bool)createDataURLIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;	// IMP=0x00100000000a4404
- (_Bool)createIfNecessaryWithDataProtectionClass:(int)arg1 error:(id *)arg2;	// IMP=0x00100000000a427a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
