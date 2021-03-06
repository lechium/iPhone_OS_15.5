//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, AMSURLRequestEncoder, NSMutableArray, NSMutableOrderedSet, NSOrderedSet, NSString;
@protocol RequestPresenter;

@interface LoadStoreQueueTask
{
    NSString *_logKey;	// 8 = 0x8
    id <RequestPresenter> _presenter;	// 16 = 0x10
    long long _queueType;	// 24 = 0x18
    NSMutableArray *_rangesToLoad;	// 32 = 0x20
    AMSURLRequestEncoder *_requestEncoder;	// 40 = 0x28
    NSMutableOrderedSet *_storeItems;	// 48 = 0x30
    ACAccount *_account;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0020000000275740
@property(readonly, copy) NSOrderedSet *storeItems; // @synthesize storeItems=_storeItems;
@property(readonly) ACAccount *account; // @synthesize account=_account;
- (id)_newURLRequestWithStartIdentifier:(id)arg1 endIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000002753d0
- (_Bool)_loadDownloadsFromStart:(id)arg1 toEnd:(id)arg2;	// IMP=0x001000000027510a
- (void)_handleResponse:(id)arg1;	// IMP=0x0010000000274745
- (void)_clearDuplicateItemsFromQueue:(id)arg1;	// IMP=0x0010000000274432
- (id)_bagKey;	// IMP=0x00100000002743b8
- (id)_account;	// IMP=0x0010000000274339
- (void)main;	// IMP=0x001000000027419b
- (id)initWithQueueType:(long long)arg1 forAccount:(id)arg2 requestPresenter:(id)arg3 logKey:(id)arg4;	// IMP=0x00100000002740c2

@end

