//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@interface HAPPairingUtilities : HMFObject
{
}

+ (id)parseListPairingsResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050c5d
+ (id)createListPairingsRequest:(id *)arg1;	// IMP=0x0000000000050b5a
+ (_Bool)parseRemovePairingResponse:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050b0a
+ (id)createRemovePairingRequestForPairingIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050945
+ (_Bool)parseAddPairingResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000508f5
+ (id)createAddPairingRequestForPairingIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x000000000005062a

@end

