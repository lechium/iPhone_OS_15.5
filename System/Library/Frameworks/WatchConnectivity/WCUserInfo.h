//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDictionary;

@interface WCUserInfo : NSObject <NSSecureCoding>
{
    NSData *_userInfoData;	// 8 = 0x8
    NSDictionary *_userInfo;	// 16 = 0x10
    NSDictionary *_clientUserInfo;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000001a6bc
- (void).cxx_destruct;	// IMP=0x000000000001a7e9
@property(copy, nonatomic) NSDictionary *clientUserInfo; // @synthesize clientUserInfo=_clientUserInfo;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy) NSData *userInfoData; // @synthesize userInfoData=_userInfoData;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000001a6e7
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000001a6c4
- (_Bool)verifyUserInfo;	// IMP=0x000000000001a5e2
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a52c
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001a428
- (id)description;	// IMP=0x000000000001a1a4

@end

