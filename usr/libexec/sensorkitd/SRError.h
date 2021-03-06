//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SRError : NSObject
{
}

+ (id)invalidInfoPlistErrorWithMissingKey:(id)arg1 code:(long long)arg2;	// IMP=0x0040000000030bd0
+ (id)authorizationError;	// IMP=0x0010000000030bb0
+ (id)authorizationErrorWithStatus:(long long)arg1;	// IMP=0x0010000000030ad0
+ (id)invalidEntitlementError;	// IMP=0x0010000000030ab0
+ (id)connectionNotFoundError;	// IMP=0x0010000000030a90
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3 underlyingError:(id)arg4;	// IMP=0x00100000000309c0
+ (id)errorWithCode:(long long)arg1 description:(id)arg2 recoverySuggestion:(id)arg3;	// IMP=0x00100000000309a0
+ (id)errorWithCode:(long long)arg1;	// IMP=0x00100000000305e0

@end

