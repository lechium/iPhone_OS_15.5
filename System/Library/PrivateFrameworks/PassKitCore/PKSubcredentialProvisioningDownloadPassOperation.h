//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, PKAppletSubcredential;

@interface PKSubcredentialProvisioningDownloadPassOperation
{
    NSURL *_passURL;	// 8 = 0x8
    PKAppletSubcredential *_addedCredential;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003f3b2a
- (void)updatePassMetadata:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f3564
- (void)configureExpressModeForPass:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f32e9
- (void)downloadPassAtURL:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00000000003f2b7f
- (void)performOperationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003f262e
- (void)performOperation;	// IMP=0x00000000003f23ba
- (id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3;	// IMP=0x00000000003f21c5

@end
