//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKContainer, CKDatabase, NSBundle;

@interface WFRemoteQuarantinePolicyManager : NSObject
{
    CKContainer *_container;	// 8 = 0x8
    CKDatabase *_database;	// 16 = 0x10
    NSBundle *_localPolicyBundle;	// 24 = 0x18
}

+ (id)sharedManager;	// IMP=0x00000000000f1893
- (void).cxx_destruct;	// IMP=0x00000000000f0f2d
@property(readonly, nonatomic) NSBundle *localPolicyBundle; // @synthesize localPolicyBundle=_localPolicyBundle;
@property(retain, nonatomic) CKDatabase *database; // @synthesize database=_database;
@property(retain, nonatomic) CKContainer *container; // @synthesize container=_container;
- (id)prepareDirectoryForAssetWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f0de0
- (_Bool)deleteAssetBundlesExceptAssetWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f0a98
- (_Bool)persistAssetToDisk:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f039d
- (_Bool)processAsset:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000f017d
- (void)updatePolicyWithXPCActivity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000efd9c
- (id)policyStringForBundleIfValid:(id)arg1;	// IMP=0x00000000000efb7d
- (id)latestRemotePolicyAssetBundle;	// IMP=0x00000000000ef935
- (id)policyAssetBundle;	// IMP=0x00000000000ef8ec
- (id)localizedString:(id)arg1;	// IMP=0x00000000000ef7b6
- (id)policyString;	// IMP=0x00000000000ef757
- (id)init;	// IMP=0x00000000000ef58a

@end

