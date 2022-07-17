//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRINamespaceFactorProviding-Protocol.h>

@class NSString, TRIReferenceManagedDirReaderLock;
@protocol TRIFactorLevelCaching, TRIPaths;

@interface TRINamespaceFactorProvider : NSObject <TRINamespaceFactorProviding>
{
    NSString *_namespaceName;	// 8 = 0x8
    NSString *_treatmentId;	// 16 = 0x10
    unsigned int _namespaceCompatibilityVersion;	// 24 = 0x18
    id <TRIFactorLevelCaching> _factorLevels;	// 32 = 0x20
    TRIReferenceManagedDirReaderLock *_factorDirectoryLock;	// 40 = 0x28
    id <TRIPaths> _paths;	// 48 = 0x30
}

+ (id)pathForFactor:(id)arg1 directory:(id)arg2;	// IMP=0x000000000000dee8
+ (id)_assetFilenameForFactor:(id)arg1;	// IMP=0x000000000000db2a
+ (id)factorLevelsWithTreatmentData:(id)arg1 referencePath:(id)arg2 filteredByNamespaceName:(id)arg3 outTreatmentId:(id *)arg4 error:(id *)arg5;	// IMP=0x000000000000d208
+ (id)factorProviderWithNamespaceDescriptor:(id)arg1 paths:(id)arg2 faultOnMissingFactors:(_Bool)arg3 shouldLockFactorDirectory:(_Bool)arg4;	// IMP=0x000000000000bea0
+ (id)factorProviderWithNamespaceName:(id)arg1 paths:(id)arg2 treatmentLayer:(unsigned long long)arg3 faultOnMissingFactors:(_Bool)arg4 shouldLockFactorDirectory:(_Bool)arg5;	// IMP=0x000000000000bcdd
- (void).cxx_destruct;	// IMP=0x000000000000eb0c
@property(readonly, nonatomic) NSString *namespaceName; // @synthesize namespaceName=_namespaceName;
- (void)dispose;	// IMP=0x000000000000eaec
- (unsigned int)namespaceId;	// IMP=0x000000000000ea95
- (_Bool)saveToPath:(id)arg1 copyAssets:(_Bool)arg2;	// IMP=0x000000000000e72d
- (id)_copyAssetsToDirectory:(id)arg1;	// IMP=0x000000000000e13e
- (_Bool)overwriteItemAtPath:(id)arg1 withItemAtPath:(id)arg2 error:(id *)arg3;	// IMP=0x000000000000dfdb
- (id)levelForFactor:(id)arg1;	// IMP=0x000000000000da8f
- (id)factorLevels;	// IMP=0x000000000000d9ea
@property(readonly, nonatomic) unsigned int namespaceCompatibilityVersion;
- (id)rolloutId;	// IMP=0x000000000000d9d9
- (id)treatmentId;	// IMP=0x000000000000d9cb
- (int)deploymentId;	// IMP=0x000000000000d959
- (id)experimentId;	// IMP=0x000000000000d8dd
- (id)initWithNamespaceName:(id)arg1 namespaceCompatibilityVersion:(unsigned int)arg2 paths:(id)arg3 factorLevels:(id)arg4 treatmentId:(id)arg5 factorDirectoryLock:(id)arg6;	// IMP=0x000000000000d00a
- (id)initWithNamespaceName:(id)arg1 treatmentData:(id)arg2 namespaceCompatibilityVersion:(unsigned int)arg3 paths:(id)arg4 referencePath:(id)arg5 factorDirectoryLock:(id)arg6 error:(id *)arg7;	// IMP=0x000000000000cae4
- (id)overlayLevelsFromFactorProvider:(id)arg1;	// IMP=0x000000000000c3a9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
