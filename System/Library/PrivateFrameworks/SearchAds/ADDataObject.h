//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APOdmlServerResponse, NSDictionary, NSError;

@interface ADDataObject : NSObject
{
    NSDictionary *_adData;	// 8 = 0x8
    NSError *_error;	// 16 = 0x10
    NSDictionary *_dupAdResponse;	// 24 = 0x18
    NSDictionary *_noOrganicAdResponse;	// 32 = 0x20
    NSDictionary *_normalAdResponse;	// 40 = 0x28
    long long _adResponseInUseType_Int;	// 48 = 0x30
    APOdmlServerResponse *_odmlResponse;	// 56 = 0x38
    NSDictionary *_allOdmlResponses;	// 64 = 0x40
}

+ (id)adResponseTypeToString:(long long)arg1;	// IMP=0x000000000000d2f9
- (void).cxx_destruct;	// IMP=0x000000000000d3e2
@property(readonly) NSDictionary *allOdmlResponses; // @synthesize allOdmlResponses=_allOdmlResponses;
@property(readonly) APOdmlServerResponse *odmlResponse; // @synthesize odmlResponse=_odmlResponse;
@property long long adResponseInUseType_Int; // @synthesize adResponseInUseType_Int=_adResponseInUseType_Int;
@property(retain, nonatomic) NSDictionary *normalAdResponse; // @synthesize normalAdResponse=_normalAdResponse;
@property(retain, nonatomic) NSDictionary *noOrganicAdResponse; // @synthesize noOrganicAdResponse=_noOrganicAdResponse;
@property(retain, nonatomic) NSDictionary *dupAdResponse; // @synthesize dupAdResponse=_dupAdResponse;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSDictionary *adData; // @synthesize adData=_adData;
@property(readonly) NSDictionary *adResponseInUse;
- (id)_jsonToDict:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000d22d
- (id)parseDataForODMLResponse:(id)arg1;	// IMP=0x000000000000cf3d
- (id)parseDataForAdResponse:(id)arg1;	// IMP=0x000000000000cdcd
- (void)parseResponseData;	// IMP=0x000000000000cc35
@property long long adResponseInUseType;
- (id)initWith:(id)arg1 andError:(id)arg2;	// IMP=0x000000000000cb01

@end

