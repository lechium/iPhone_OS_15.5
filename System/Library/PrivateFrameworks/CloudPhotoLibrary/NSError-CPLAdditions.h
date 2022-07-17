//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (CPLAdditions)
- (id)cplSafeErrorForXPC;	// IMP=0x00000000000a5fff
- (id)_cplSafeUserInfoForXPCDidChange:(_Bool *)arg1;	// IMP=0x00000000000a5cf4
- (id)cplShortDomainDescription;	// IMP=0x00000000000a5c3f
- (id)cplUnderlyingPOSIXError;	// IMP=0x00000000000a5b48
- (_Bool)isCPLOperationDeferredError;	// IMP=0x00000000000a5b31
- (_Bool)isCPLOperationCancelledError;	// IMP=0x00000000000a5ac4
- (_Bool)isCPLError;	// IMP=0x00000000000a5a79
- (_Bool)isCPLErrorWithCode:(long long)arg1;	// IMP=0x00000000000a5a0f
@end
