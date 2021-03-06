//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ACAccountStore;

@interface CRKClassKitAccountStateProvider : NSObject
{
    long long _accountState;	// 8 = 0x8
    ACAccountStore *_accountStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000000283f
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
@property(nonatomic) long long accountState; // @synthesize accountState=_accountState;
- (long long)currentAccountState;	// IMP=0x000000000000278b
- (void)updateAccountState;	// IMP=0x0000000000002716
- (void)accountStoreDidChange:(id)arg1;	// IMP=0x000000000000264d
- (void)endObservingAccountChanges;	// IMP=0x00000000000025ed
- (void)beginObservingAccountChanges;	// IMP=0x0000000000002586
- (id)init;	// IMP=0x00000000000024fe
- (void)dealloc;	// IMP=0x00000000000024c0

@end

