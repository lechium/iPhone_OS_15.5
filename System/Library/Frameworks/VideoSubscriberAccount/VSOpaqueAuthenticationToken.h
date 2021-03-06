//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/VSAuthenticationToken-Protocol.h>

@class NSData, NSDate, NSString;

@interface VSOpaqueAuthenticationToken : NSObject <VSAuthenticationToken>
{
    NSString *_body;	// 8 = 0x8
    NSDate *_expirationDate;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000002b279
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *body; // @synthesize body=_body;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002b03a
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSData *serializedData;
- (_Bool)isFromUnsupportedProvider;	// IMP=0x000000000002adc4
- (_Bool)isOpaque;	// IMP=0x000000000002adbc
- (_Bool)isValid;	// IMP=0x000000000002ad3c
- (id)initWithSerializedData:(id)arg1;	// IMP=0x000000000002a830
- (id)init;	// IMP=0x000000000002a7b0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

