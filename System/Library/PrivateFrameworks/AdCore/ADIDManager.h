//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AdCore/ADIDManager_XPC-Protocol.h>

@class DSIDRecord, NSArray;

@interface ADIDManager <ADIDManager_XPC>
{
    DSIDRecord *_activeDSIDRecord;	// 8 = 0x8
    NSArray *_monthlyResetArray;	// 16 = 0x10
}

+ (id)sharedInstance;	// IMP=0x0000000000016d0d
- (void).cxx_destruct;	// IMP=0x0000000000017cb8
@property(retain) NSArray *monthlyResetArray; // @synthesize monthlyResetArray=_monthlyResetArray;
@property(retain) DSIDRecord *activeDSIDRecord; // @synthesize activeDSIDRecord=_activeDSIDRecord;
- (id)retrieveDeviceIDs;	// IMP=0x0000000000017c1a
- (void)logIDs:(id)arg1;	// IMP=0x0000000000017a7c
- (id)deviceIdentifiers;	// IMP=0x00000000000175c2
- (void)reloadRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000017427
- (id)reloadRecords:(id)arg1;	// IMP=0x0000000000017125
- (id)dsidRecord:(id)arg1 fromDict:(id)arg2;	// IMP=0x0000000000016f25
@property(readonly, nonatomic) long long PersonalizedAdsMonthResetCount;
- (id)encryptedIDForClientType:(long long)arg1;	// IMP=0x0000000000016e30
- (id)idForClientType:(long long)arg1;	// IMP=0x0000000000016d9a
- (id)loadFakeRecord:(id)arg1;	// IMP=0x00000000000066ab
- (_Bool)loadIDs;	// IMP=0x00000000000064de
- (void)forceReconcile:(CDUnknownBlockType)arg1;	// IMP=0x000000000000631a
- (id)init;	// IMP=0x00000000000062ce

@end
