//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class InAppPromotionDatabaseStore;

@interface InAppPromotionManager : NSObject
{
    InAppPromotionDatabaseStore *_databaseStore;	// 8 = 0x8
}

+ (id)manager;	// IMP=0x00400000002976a9
- (void).cxx_destruct;	// IMP=0x0020000000297c47
- (id)promotionInfoForProductIdentifiers:(id)arg1 bundleID:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000297a06
- (_Bool)setPromotionInfo:(id)arg1 forBundleID:(id)arg2 error:(id *)arg3;	// IMP=0x001000000029780c
- (void)removePromotionInfoForBundleID:(id)arg1;	// IMP=0x00100000002977f2
- (id)init;	// IMP=0x001000000029772e

@end

