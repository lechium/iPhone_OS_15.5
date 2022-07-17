//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSUUID;

@interface HMDAccessoryReachabilityElectionParameter : HMFObject
{
    _Bool _reachable;	// 8 = 0x8
    NSUUID *_identifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000a947a7
@property(readonly, getter=isReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)attributeDescriptions;	// IMP=0x0000000000a94651
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000a94550
- (unsigned long long)hash;	// IMP=0x0000000000a9450c
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 isReachable:(_Bool)arg2;	// IMP=0x0000000000a94386
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x0000000000a93e82

@end
