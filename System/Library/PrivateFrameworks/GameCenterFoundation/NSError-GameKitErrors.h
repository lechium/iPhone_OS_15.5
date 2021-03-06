//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (GameKitErrors)
+ (id)_gkUnauthenticatedError;	// IMP=0x000000000003fa25
+ (id)serverErrorForCode:(long long)arg1 withReason:(id)arg2;	// IMP=0x000000000003f942
+ (id)serverErrorForCode:(long long)arg1 withUserInfo:(id)arg2;	// IMP=0x000000000003f91c
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x000000000003f88b
+ (id)userErrorForServerCode:(long long)arg1 reason:(id)arg2;	// IMP=0x000000000003f82c
+ (id)userErrorForServerError:(id)arg1 userInfo:(id)arg2;	// IMP=0x000000000003f48f
+ (id)userErrorForServerError:(id)arg1;	// IMP=0x000000000003f437
+ (id)userErrorForCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x000000000003f35c
+ (id)userErrorForCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x000000000003ee04
+ (id)_gkUserErrorForGameSessionErrorCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x00000000000c5fd4
+ (id)_gkUserErrorForTournamentErrorCode:(long long)arg1 reason:(id)arg2 userInfo:(id)arg3;	// IMP=0x00000000000d8344
- (_Bool)_gkIsUnauthenticatedError;	// IMP=0x000000000003fa3e
@end

