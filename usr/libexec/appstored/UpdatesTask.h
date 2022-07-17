//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ACAccount, NSArray, NSString, UpdatesResponse;

@interface UpdatesTask
{
    ACAccount *_account;	// 8 = 0x8
    NSArray *_apps;	// 16 = 0x10
    _Bool _isUserInitiated;	// 24 = 0x18
    NSString *_logKey;	// 32 = 0x20
    UpdatesResponse *_response;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000011a39c
@property(retain, nonatomic) UpdatesResponse *response; // @synthesize response=_response;
@property(copy, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (id)_requestBodyDictionary;	// IMP=0x0010000000119f5d
- (id)_newDictionaryWithUpdatableApp:(id)arg1;	// IMP=0x0010000000119e0b
- (id)_newArrayWithUpdatableApps:(id)arg1;	// IMP=0x0010000000119c25
- (id)_copyLocalAppsDictionaries;	// IMP=0x0010000000119c08
- (id)_bagURL;	// IMP=0x0010000000119b8f
- (void)main;	// IMP=0x001000000011960b
- (id)initWithAccount:(id)arg1 apps:(id)arg2 isUserInitiated:(_Bool)arg3;	// IMP=0x00100000001194c4

@end
