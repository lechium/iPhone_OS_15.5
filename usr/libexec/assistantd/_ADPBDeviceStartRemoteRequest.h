//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class AFRequestInfo, NSData, NSString;

@interface _ADPBDeviceStartRemoteRequest : PBRequest
{
    NSData *_handoffData;	// 8 = 0x8
    NSString *_handoffNotification;	// 16 = 0x10
    NSString *_handoffOriginDeviceName;	// 24 = 0x18
    NSString *_handoffUrlString;	// 32 = 0x20
    NSString *_text;	// 40 = 0x28
    _Bool _requiresUserInteraction;	// 48 = 0x30
    struct {
        unsigned int requiresUserInteraction:1;
    } _has;	// 52 = 0x34
}

+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x00100000000a3f84
- (void).cxx_destruct;	// IMP=0x00100000001ac9e6
@property(retain, nonatomic) NSString *handoffOriginDeviceName; // @synthesize handoffOriginDeviceName=_handoffOriginDeviceName;
@property(retain, nonatomic) NSString *handoffNotification; // @synthesize handoffNotification=_handoffNotification;
@property(nonatomic) _Bool requiresUserInteraction; // @synthesize requiresUserInteraction=_requiresUserInteraction;
@property(retain, nonatomic) NSString *handoffUrlString; // @synthesize handoffUrlString=_handoffUrlString;
@property(retain, nonatomic) NSData *handoffData; // @synthesize handoffData=_handoffData;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001ac83a
- (unsigned long long)hash;	// IMP=0x00100000001ac763
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001ac5c7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001ac48d
- (void)copyTo:(id)arg1;	// IMP=0x00100000001ac3aa
- (void)writeTo:(id)arg1;	// IMP=0x00100000001ac2d1
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001ac2c4
- (id)dictionaryRepresentation;	// IMP=0x00100000001abec9
- (id)description;	// IMP=0x00100000001abe1a
@property(readonly, nonatomic) _Bool hasHandoffOriginDeviceName;
@property(readonly, nonatomic) _Bool hasHandoffNotification;
@property(nonatomic) _Bool hasRequiresUserInteraction;
@property(readonly, nonatomic) _Bool hasHandoffUrlString;
@property(readonly, nonatomic) _Bool hasHandoffData;
@property(readonly, nonatomic) _Bool hasText;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000c0869
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000012cbbc
@property(copy, nonatomic, setter=_ad_setRequestInfo:) AFRequestInfo *_ad_requestInfo;

@end

