//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SignedObject, VRFWitness;

@interface OptInOutResponse
{
}

+ (id)descriptor;	// IMP=0x0000000000001df7

// Remaining properties
@property(nonatomic) _Bool hasSmt; // @dynamic hasSmt;
@property(nonatomic) _Bool hasUriWitness; // @dynamic hasUriWitness;
@property(copy, nonatomic) NSString *serverEventInfo; // @dynamic serverEventInfo;
@property(retain, nonatomic) SignedObject *smt; // @dynamic smt;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) VRFWitness *uriWitness; // @dynamic uriWitness;

@end

