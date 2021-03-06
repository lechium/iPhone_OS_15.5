//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <WatchListKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSNumber, NSString;

@interface WLKEvent : NSObject <NSSecureCoding>
{
    NSString *_canonicalID;	// 8 = 0x8
    NSString *_legID;	// 16 = 0x10
    NSString *_externalPlayableID;	// 24 = 0x18
    NSString *_channelID;	// 32 = 0x20
    NSString *_serviceID;	// 40 = 0x28
    NSString *_externalServiceID;	// 48 = 0x30
    unsigned long long _airingType;	// 56 = 0x38
    NSString *_airingTypeString;	// 64 = 0x40
    NSDate *_canonicalStartDate;	// 72 = 0x48
    NSDate *_startDate;	// 80 = 0x50
    NSDate *_endDate;	// 88 = 0x58
    NSNumber *_cleanupTime;	// 96 = 0x60
    NSDictionary *_dictionary;	// 104 = 0x68
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000005613c
- (void).cxx_destruct;	// IMP=0x0000000000056313
@property(readonly, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
@property(readonly, nonatomic) NSNumber *cleanupTime; // @synthesize cleanupTime=_cleanupTime;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSDate *canonicalStartDate; // @synthesize canonicalStartDate=_canonicalStartDate;
@property(readonly, nonatomic) NSString *airingTypeString; // @synthesize airingTypeString=_airingTypeString;
@property(readonly, nonatomic) unsigned long long airingType; // @synthesize airingType=_airingType;
@property(readonly, nonatomic) NSString *externalServiceID; // @synthesize externalServiceID=_externalServiceID;
@property(readonly, nonatomic) NSString *serviceID; // @synthesize serviceID=_serviceID;
@property(readonly, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(readonly, nonatomic) NSString *externalPlayableID; // @synthesize externalPlayableID=_externalPlayableID;
@property(readonly, nonatomic) NSString *legID; // @synthesize legID=_legID;
@property(readonly, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000056218
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000056144
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000000055dbf

@end

