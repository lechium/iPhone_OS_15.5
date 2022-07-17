//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DKNotableUserDataWallet, NSArray;

@interface DKNotableUserData : NSObject
{
    _Bool _findMyEnabled;	// 8 = 0x8
    long long _dataSize;	// 16 = 0x10
    NSArray *_accounts;	// 24 = 0x18
    DKNotableUserDataWallet *_walletData;	// 32 = 0x20
    NSArray *_cellularPlans;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000005d0c
@property(retain, nonatomic) NSArray *cellularPlans; // @synthesize cellularPlans=_cellularPlans;
@property(retain, nonatomic) DKNotableUserDataWallet *walletData; // @synthesize walletData=_walletData;
@property(nonatomic) _Bool findMyEnabled; // @synthesize findMyEnabled=_findMyEnabled;
@property(retain, nonatomic) NSArray *accounts; // @synthesize accounts=_accounts;
@property(nonatomic) long long dataSize; // @synthesize dataSize=_dataSize;

@end
