//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreCDP/CDPProtectedCloudStorageProxy-Protocol.h>

@class NSString;

@interface CDPProtectedCloudStorageProxyImpl : NSObject <CDPProtectedCloudStorageProxy>
{
}

- (_Bool)_performPCSBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0000000000001dce
- (_Bool)pcsRestoreLocalBackup:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001cb7
- (_Bool)pcsSynchronizeKeysWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001ba0
- (_Bool)pcsIdentityMigrateToStingrayWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001a89
- (_Bool)pcsIdentityMigrateToiCDPWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001972
- (struct _PCSIdentitySetData *)pcsIdentitySetupWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000017f3
- (_Bool)pcsIdentitySetIsInICDPLocal:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;	// IMP=0x0000000000001796
- (_Bool)pcsIdentitySetIsInICDPNetwork:(struct _PCSIdentitySetData *)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000016be
- (struct _PCSIdentitySetData *)pcsIdentityCreateWithInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000001550
- (_Bool)pcsIdentitySetCompanionInCircle:(struct _PCSIdentitySetData *)arg1 error:(id *)arg2;	// IMP=0x000000000000146b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
