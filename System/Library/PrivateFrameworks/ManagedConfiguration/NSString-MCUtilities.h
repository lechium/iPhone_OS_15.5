//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (MCUtilities)
+ (id)MCMakeUUID;	// IMP=0x000000000001dfb1
- (unsigned int)MCHash;	// IMP=0x000000000001de43
- (id)MCAppendDeviceName;	// IMP=0x000000000001ddc8
- (id)MCSHA256DigestWithSalt:(id)arg1;	// IMP=0x000000000001dc65
- (id)MCSHA256DigestWithPasscodeSalt;	// IMP=0x000000000001dbdf
- (id)MCOldStyleSafeFilenameHashWithExtension:(id)arg1;	// IMP=0x000000000001da8c
- (id)MCOldStyleSafeFilenameHash;	// IMP=0x000000000001da78
- (id)MCHashedIdentifier;	// IMP=0x000000000001da26
- (id)MCHashedFilenameWithPrefix:(id)arg1 extension:(id)arg2;	// IMP=0x000000000001d931
- (id)MCHashedFilenameWithExtension:(id)arg1;	// IMP=0x000000000001d915
- (id)MCRemoveAppExternalVersionIDParameter;	// IMP=0x000000000009e45b
- (id)MCAppendGreenteaSuffix;	// IMP=0x000000000009e3c8
@end
