//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleAccount/AAResponse.h>

@class NSString;

@interface EMHMERecipientCreationResponse : AAResponse
{
    NSString *_replyToAddress;	// 32 = 0x20
}

+ (id)log;	// IMP=0x000000000002426f
- (void).cxx_destruct;	// IMP=0x0000000000024671
@property(copy, nonatomic) NSString *replyToAddress; // @synthesize replyToAddress=_replyToAddress;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;	// IMP=0x000000000002434c

@end
