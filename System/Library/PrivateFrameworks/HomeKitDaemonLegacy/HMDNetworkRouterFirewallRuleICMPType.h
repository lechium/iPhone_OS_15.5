//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber;

@interface HMDNetworkRouterFirewallRuleICMPType : NSObject
{
    unsigned char _protocol;	// 8 = 0x8
    NSNumber *_typeValue;	// 16 = 0x10
    NSDictionary *_jsonDictionary;	// 24 = 0x18
}

+ (id)createListWithJSONDictionary:(id)arg1 key:(id)arg2;	// IMP=0x0000000000792149
+ (id)createWithJSONDictionary:(id)arg1;	// IMP=0x0000000000791f4d
- (void).cxx_destruct;	// IMP=0x0000000000791f25
@property(readonly, nonatomic) NSDictionary *jsonDictionary; // @synthesize jsonDictionary=_jsonDictionary;
@property(readonly, nonatomic) NSNumber *typeValue; // @synthesize typeValue=_typeValue;
@property(readonly, nonatomic) unsigned char protocol; // @synthesize protocol=_protocol;
- (id)description;	// IMP=0x0000000000791db2
@property(readonly, nonatomic) NSDictionary *prettyJSONDictionary;
- (id)initWithJSONDictionary:(id)arg1 protocol:(unsigned char)arg2 typeValue:(id)arg3;	// IMP=0x0000000000791c05

@end
