//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSOperationQueue, NSString, VSOptional;

@interface VSIdentityProviderFetchAppsOperation : VSAsyncOperation
{
    _Bool _shouldFetchImages;	// 8 = 0x8
    _Bool _shouldPrecomposeIcon;	// 9 = 0x9
    NSString *_identityProviderID;	// 16 = 0x10
    VSOptional *_result;	// 24 = 0x18
    NSOperationQueue *_privateQueue;	// 32 = 0x20
    NSString *_providerIdentifier;	// 40 = 0x28
    unsigned long long _requestType;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001a70d
@property(nonatomic) unsigned long long requestType; // @synthesize requestType=_requestType;
@property(retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
@property(nonatomic) _Bool shouldPrecomposeIcon; // @synthesize shouldPrecomposeIcon=_shouldPrecomposeIcon;
@property(nonatomic) _Bool shouldFetchImages; // @synthesize shouldFetchImages=_shouldFetchImages;
@property(retain, nonatomic) VSOptional *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *identityProviderID; // @synthesize identityProviderID=_identityProviderID;
- (void)executionDidBegin;	// IMP=0x000000000001a0cc
- (id)initWithProviderIdentifier:(id)arg1 andType:(unsigned long long)arg2;	// IMP=0x0000000000019fca

@end

