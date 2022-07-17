//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMSetupAccessoryPayload, NSError;

@interface HFSetupAccessoryResult : NSObject
{
    _Bool _hasAddRequest;	// 8 = 0x8
    _Bool _isValidForPairing;	// 9 = 0x9
    NSError *_error;	// 16 = 0x10
    HMSetupAccessoryPayload *_setupPayload;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000133b5d
@property(readonly, nonatomic) _Bool isValidForPairing; // @synthesize isValidForPairing=_isValidForPairing;
@property(readonly, nonatomic) _Bool hasAddRequest; // @synthesize hasAddRequest=_hasAddRequest;
@property(readonly, nonatomic) HMSetupAccessoryPayload *setupPayload; // @synthesize setupPayload=_setupPayload;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (_Bool)isAllZerosCode;	// IMP=0x0000000000133a56
- (id)description;	// IMP=0x000000000013393e
- (id)initWithSetupCode:(id)arg1;	// IMP=0x00000000001338bb
- (id)initWithSetupURL:(id)arg1;	// IMP=0x0000000000133818
- (id)initWithPayload:(id)arg1;	// IMP=0x0000000000133801
- (id)initWithPayload:(id)arg1 hasAddRequest:(_Bool)arg2;	// IMP=0x00000000001337ea
- (id)initWithPayload:(id)arg1 error:(id)arg2 hasAddRequest:(_Bool)arg3;	// IMP=0x00000000001335bd

@end
