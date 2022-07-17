//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsCore/FCPurchaseIntegrityChecker-Protocol.h>

@interface FCMockPurchaseIntegrityChecker : NSObject <FCPurchaseIntegrityChecker>
{
    unsigned long long _mockedCheckResult;	// 8 = 0x8
}

+ (id)mockPurchaseIntegrityCheckForFailure;	// IMP=0x000000000025715d
+ (id)mockPurchaseIntegrityCheckForSuccess;	// IMP=0x0000000000257128
@property(nonatomic) unsigned long long mockedCheckResult; // @synthesize mockedCheckResult=_mockedCheckResult;
- (void)isUserEntitledToSubscriptionForPurchaseID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000257195

@end
