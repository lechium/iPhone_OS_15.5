//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SSVRedeemCodeItem : NSObject
{
    NSMutableDictionary *_dictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000014f0ab
@property(readonly, nonatomic) NSDictionary *redeemCodeDictionary; // @synthesize redeemCodeDictionary=_dictionary;
@property(readonly, nonatomic) long long itemIdentifier;
- (id)initWithRedeemCodeDictionary:(id)arg1;	// IMP=0x000000000014ef87
- (id)initWithLookupItem:(id)arg1;	// IMP=0x000000000014eed0

@end

