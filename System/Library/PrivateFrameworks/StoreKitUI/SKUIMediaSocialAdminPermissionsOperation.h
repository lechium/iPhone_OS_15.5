//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSVComplexOperation.h>

@class SKUIClientContext;

@interface SKUIMediaSocialAdminPermissionsOperation : SSVComplexOperation
{
    SKUIClientContext *_clientContext;	// 8 = 0x8
    CDUnknownBlockType _outputBlock;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000eb8f4
- (id)_lookupResponseForMissingAuthors:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000eb41c
- (id)_authorsWithResponseDictionary:(id)arg1;	// IMP=0x00000000000ea95c
- (void)main;	// IMP=0x00000000000ea43a
@property(copy) CDUnknownBlockType outputBlock;
- (id)initWithClientContext:(id)arg1;	// IMP=0x00000000000ea170

@end

