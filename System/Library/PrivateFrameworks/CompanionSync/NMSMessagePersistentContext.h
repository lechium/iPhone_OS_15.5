//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CompanionSync/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSSet, NSString;

@interface NMSMessagePersistentContext : NSObject <NSSecureCoding>
{
    _Bool _fromRequest;	// 8 = 0x8
    _Bool _sendAcked;	// 9 = 0x9
    _Bool _processAcked;	// 10 = 0xa
    unsigned short _messageID;	// 12 = 0xc
    NSString *_idsIdentifier;	// 16 = 0x10
    NSDictionary *_userInfo;	// 24 = 0x18
    NSDictionary *_idsOptions;	// 32 = 0x20
    NSDate *_date;	// 40 = 0x28
    NSSet *_targetDeviceIDs;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000084604
- (void).cxx_destruct;	// IMP=0x0000000000084a83
@property(copy, nonatomic) NSSet *targetDeviceIDs; // @synthesize targetDeviceIDs=_targetDeviceIDs;
@property(nonatomic) _Bool processAcked; // @synthesize processAcked=_processAcked;
@property(nonatomic) _Bool sendAcked; // @synthesize sendAcked=_sendAcked;
@property(nonatomic, getter=isFromRequest) _Bool fromRequest; // @synthesize fromRequest=_fromRequest;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) NSDictionary *idsOptions; // @synthesize idsOptions=_idsOptions;
@property(retain, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(copy, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(nonatomic) unsigned short messageID; // @synthesize messageID=_messageID;
- (id)description;	// IMP=0x0000000000084918
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000847c7
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000008460c

@end

