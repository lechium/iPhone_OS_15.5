//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKAttestationSigner : NSObject
{
}

+ (id)sharedSigner;	// IMP=0x000000000001b793
- (void)_baaSignatureForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bc81
- (void)_baaSignaturesForData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000001bb61
- (void)signaturesForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b9bc
- (void)signatureForData:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000000001b817
- (id)init;	// IMP=0x000000000001b7e8

@end

