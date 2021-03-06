//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PCSShareProtectionObject : NSObject
{
    struct _OpaquePCSShareProtection *_shareProtection;	// 8 = 0x8
    struct _PCSIdentityData *_identity;	// 16 = 0x10
}

@property(readonly, nonatomic) struct _OpaquePCSShareProtection *shareProtection; // @synthesize shareProtection=_shareProtection;
- (id)exportAcceptedSharingRequestWithError:(id *)arg1;	// IMP=0x000000000001c11d
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 owner:(void *)arg2 flags:(unsigned int)arg3 error:(id *)arg4;	// IMP=0x000000000001bfc8
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000001bfae
- (id)sharingRequestDataForIdentity:(struct _PCSPublicIdentityData *)arg1 error:(id *)arg2;	// IMP=0x000000000001bf97
- (void)dealloc;	// IMP=0x000000000001bf3a
- (id)initWithSharingRequestData:(id)arg1 identitySet:(struct _PCSIdentitySetData *)arg2 error:(id *)arg3;	// IMP=0x000000000001bb6e
- (id)initWithShareProtectionRef:(struct _OpaquePCSShareProtection *)arg1;	// IMP=0x000000000001bb1a

@end

