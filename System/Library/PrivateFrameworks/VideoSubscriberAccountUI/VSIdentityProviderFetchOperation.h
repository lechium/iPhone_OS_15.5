//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSString, VSAuditToken, VSOptional;

@interface VSIdentityProviderFetchOperation : VSAsyncOperation
{
    _Bool _fetchFromStoreOnly;	// 8 = 0x8
    NSString *_identityProviderID;	// 16 = 0x10
    NSString *_identityProviderUniqueID;	// 24 = 0x18
    VSAuditToken *_auditToken;	// 32 = 0x20
    VSOptional *_result;	// 40 = 0x28
    NSOperationQueue *_privateQueue;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000003e94e
@property(nonatomic) _Bool fetchFromStoreOnly; // @synthesize fetchFromStoreOnly=_fetchFromStoreOnly;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(copy, nonatomic) VSAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(readonly, copy, nonatomic) NSString *identityProviderUniqueID; // @synthesize identityProviderUniqueID=_identityProviderUniqueID;
@property(copy, nonatomic) NSString *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
- (void)cancel;	// IMP=0x000000000003e814
- (void)executionDidBegin;	// IMP=0x000000000003e065
- (id)_fetchAllOperation;	// IMP=0x000000000003dfb9
- (id)initWithIdentityProviderUniqueID:(id)arg1;	// IMP=0x000000000003df13
- (id)initWithIdentityProviderID:(id)arg1;	// IMP=0x000000000003ddd8
- (id)init;	// IMP=0x000000000003dd69

@end
