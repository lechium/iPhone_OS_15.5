//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MailKit/NSSecureCoding-Protocol.h>

@class MEDecodedMessageBanner, MEMessageSecurityInformation, NSData;

@interface MEDecodedMessage : NSObject <NSSecureCoding>
{
    NSData *_rawData;	// 8 = 0x8
    MEMessageSecurityInformation *_securityInformation;	// 16 = 0x10
    NSData *_context;	// 24 = 0x18
    MEDecodedMessageBanner *_banner;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000007d9f
- (void).cxx_destruct;	// IMP=0x000000000000835c
@property(readonly, nonatomic) MEDecodedMessageBanner *banner; // @synthesize banner=_banner;
@property(readonly, nonatomic) NSData *context; // @synthesize context=_context;
@property(readonly, nonatomic) MEMessageSecurityInformation *securityInformation; // @synthesize securityInformation=_securityInformation;
@property(readonly, copy, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000008090
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000007f4b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000007da7
- (id)initWithData:(id)arg1 securityInformation:(id)arg2 context:(id)arg3 banner:(id)arg4;	// IMP=0x0000000000007c8f
- (id)initWithData:(id)arg1 securityInformation:(id)arg2 context:(id)arg3;	// IMP=0x0000000000007c79

@end

