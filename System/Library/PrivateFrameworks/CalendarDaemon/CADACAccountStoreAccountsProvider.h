//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CalendarDaemon/CADACAccountsProvider-Protocol.h>

@class ACAccountStore;

__attribute__((visibility("hidden")))
@interface CADACAccountStoreAccountsProvider : NSObject <CADACAccountsProvider>
{
    ACAccountStore *_accountStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000003f217
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
- (id)accountWithIdentifier:(id)arg1;	// IMP=0x000000000003f18a
- (id)accounts;	// IMP=0x000000000003f13a
- (id)initWithAccountStore:(id)arg1;	// IMP=0x000000000003f0cf

@end
