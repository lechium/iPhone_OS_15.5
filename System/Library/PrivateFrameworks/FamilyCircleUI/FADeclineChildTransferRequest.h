//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAFamilyRequest.h>

@class NSString;

@interface FADeclineChildTransferRequest : AAFamilyRequest
{
    NSString *_requestCode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000017ad9
@property(copy, nonatomic) NSString *requestCode; // @synthesize requestCode=_requestCode;
- (id)urlRequest;	// IMP=0x00000000000179a8
- (id)urlString;	// IMP=0x0000000000017951
- (_Bool)isUserInitiated;	// IMP=0x0000000000017949

@end

