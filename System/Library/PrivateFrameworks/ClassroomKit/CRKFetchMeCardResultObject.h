//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DeviceManagement/CATTaskResultObject.h>

@class NSDictionary;

@interface CRKFetchMeCardResultObject : CATTaskResultObject
{
    NSDictionary *_cardInfo;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000008570b
- (void).cxx_destruct;	// IMP=0x000000000008585c
@property(copy, nonatomic) NSDictionary *cardInfo; // @synthesize cardInfo=_cardInfo;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000008579f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000085713

@end
