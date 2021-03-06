//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AuthKit/AAFXPCSessionDelegate-Protocol.h>
#import <AuthKit/AKInheritanceInterface-Protocol.h>

@class AAFXPCSession, NSString;

@interface AKInheritanceController : NSObject <AAFXPCSessionDelegate, AKInheritanceInterface>
{
    AAFXPCSession *_remoteService;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000001545e
@property(retain, nonatomic) AAFXPCSession *remoteService; // @synthesize remoteService=_remoteService;
- (void)_setupBeneficiaryAliasWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001509d
- (void)removeBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014deb
- (void)updateBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014b39
- (void)setupBeneficiaryWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000014887
- (void)fetchManifestOptionsWithInheritanceContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001458d
- (id)initWithXPCSession:(id)arg1;	// IMP=0x0000000000014511
- (id)init;	// IMP=0x000000000001447b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

