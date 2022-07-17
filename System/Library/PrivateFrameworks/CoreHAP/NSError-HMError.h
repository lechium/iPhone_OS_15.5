//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSError.h>

@interface NSError (HMError)
+ (id)hmPrivateErrorWithCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3;	// IMP=0x0000000000073c16
+ (id)hmPrivateErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000073bf8
+ (id)hmInternalErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000073bd2
+ (id)hmPrivateErrorWithCode:(long long)arg1;	// IMP=0x0000000000073bac
+ (id)hmInternalErrorWithCode:(long long)arg1 underlyingError:(id)arg2;	// IMP=0x0000000000073ad2
+ (id)hmInternalErrorWithCode:(long long)arg1;	// IMP=0x0000000000073ab7
+ (id)hmErrorWithCode:(long long)arg1 userInfo:(id)arg2;	// IMP=0x0000000000073a91
+ (id)hmErrorWithCode:(long long)arg1;	// IMP=0x0000000000073a76
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4;	// IMP=0x0000000000073a53
+ (id)hmErrorWithCode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x00000000000737bc
+ (id)hapErrorWithcode:(long long)arg1;	// IMP=0x00000000000efae7
+ (id)errorWithOSStatus:(int)arg1;	// IMP=0x00000000000ef9c1
+ (id)hapErrorWithcode:(long long)arg1 description:(id)arg2 reason:(id)arg3 suggestion:(id)arg4 underlyingError:(id)arg5;	// IMP=0x00000000000ef723
+ (id)hapErrorWithCode:(long long)arg1;	// IMP=0x00000000000efb1f
@property(readonly, copy, nonatomic) NSError *hmPublicError;
@property(readonly, nonatomic, getter=isHMError) _Bool hmError;
- (_Bool)isHAPError;	// IMP=0x00000000000ef6d8
@end
