//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSArray, NSNumber, NSString, SSURLConnectionResponse;

@interface CheckinRentalOperation : ISOperation
{
    NSNumber *_accountIdentifier;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    NSNumber *_rentalKeyIdentifier;	// 112 = 0x70
    NSArray *_sinfs;	// 120 = 0x78
    SSURLConnectionResponse *_urlResponse;	// 128 = 0x80
    NSString *_userAgent;	// 136 = 0x88
}

- (_Bool)_runCheckinAckOperationWithResponseData:(id)arg1 error:(id *)arg2;	// IMP=0x00200000000b2472
- (void)_run;	// IMP=0x00100000000b20a7
- (_Bool)_handleCheckinAckResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b1ee0
- (_Bool)_handleResponse:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b1c18
- (id)_bodyDataWithCheckinAckResponseData:(id)arg1;	// IMP=0x00100000000b1945
- (id)_bodyData;	// IMP=0x00100000000b141c
- (void)run;	// IMP=0x00100000000b13e2
@property(copy) NSString *userAgent;
@property(readonly) SSURLConnectionResponse *URLResponse;
@property(copy) NSString *clientIdentifierHeader;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;	// IMP=0x00100000000b1159
- (id)initWithCheckinRequest:(id)arg1;	// IMP=0x00100000000b10a3
- (id)initWithSinfs:(id)arg1;	// IMP=0x00100000000b0f57
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;	// IMP=0x00100000000b0e5b
- (id)init;	// IMP=0x00100000000b0e45

@end

