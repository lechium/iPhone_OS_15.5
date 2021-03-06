//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSError, NSString, WCUserInfo;

@interface WCSessionUserInfoTransfer : NSObject <NSSecureCoding>
{
    _Bool _currentComplicationInfo;	// 8 = 0x8
    _Bool _transferring;	// 9 = 0x9
    WCUserInfo *_userInfoStorage;	// 16 = 0x10
    NSDate *_creationDate;	// 24 = 0x18
    NSError *_transferError;	// 32 = 0x20
    NSString *_transferIdentifier;	// 40 = 0x28
    NSString *_complicationTransferIdentifier;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000003f47
- (void).cxx_destruct;	// IMP=0x0000000000004351
@property(copy) NSString *complicationTransferIdentifier; // @synthesize complicationTransferIdentifier=_complicationTransferIdentifier;
@property(copy) NSString *transferIdentifier; // @synthesize transferIdentifier=_transferIdentifier;
@property(retain) NSError *transferError; // @synthesize transferError=_transferError;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) WCUserInfo *userInfoStorage; // @synthesize userInfoStorage=_userInfoStorage;
@property(nonatomic, getter=isTransferring) _Bool transferring; // @synthesize transferring=_transferring;
@property(nonatomic, getter=isCurrentComplicationInfo) _Bool currentComplicationInfo; // @synthesize currentComplicationInfo=_currentComplicationInfo;
- (id)protobufData;	// IMP=0x00000000000041be
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000004015
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003f4f
- (unsigned long long)hash;	// IMP=0x0000000000003f03
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000003e31
- (id)description;	// IMP=0x0000000000003d26
- (long long)compare:(id)arg1;	// IMP=0x0000000000003c95
- (void)cancel;	// IMP=0x0000000000003c42
- (_Bool)verifyUserInfo;	// IMP=0x0000000000003bfe
- (_Bool)updateUserInfoData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003b81
- (_Bool)updateUserInfo:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000003b04
@property(readonly, copy) NSData *userInfoData;
@property(readonly, copy, nonatomic) NSDictionary *userInfo;
- (id)init;	// IMP=0x00000000000039f1
- (id)initWithProtoBufFileURL:(id)arg1;	// IMP=0x0000000000003860
- (id)initWithTranferIdentifier:(id)arg1 complicationTransferIdentifier:(id)arg2 currentComplication:(_Bool)arg3;	// IMP=0x000000000000376d
- (id)initWithComplicationTransferIdentifier:(id)arg1;	// IMP=0x0000000000003702

@end

