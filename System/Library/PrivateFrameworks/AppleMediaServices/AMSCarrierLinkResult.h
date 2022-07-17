//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSCarrierLinkParams, NSDictionary, NSError, NSNumber, NSString;

@interface AMSCarrierLinkResult : NSObject
{
    NSString *_channelCustomerId;	// 8 = 0x8
    AMSCarrierLinkParams *_linkParams;	// 16 = 0x10
    NSString *_productCode;	// 24 = 0x18
    NSError *_error;	// 32 = 0x20
    NSDictionary *_response;	// 40 = 0x28
    NSNumber *_statusCode;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000dbe46
@property(readonly, nonatomic) NSNumber *statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSDictionary *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(readonly, nonatomic) AMSCarrierLinkParams *linkParams; // @synthesize linkParams=_linkParams;
@property(readonly, nonatomic) NSString *channelCustomerId; // @synthesize channelCustomerId=_channelCustomerId;
- (id)initWithResponse:(id)arg1 linkParams:(id)arg2;	// IMP=0x00000000000dbba4

@end
