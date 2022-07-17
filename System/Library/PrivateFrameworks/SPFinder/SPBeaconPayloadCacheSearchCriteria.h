//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSNumber, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchCriteria : NSObject <NSSecureCoding>
{
    SPSearchResultMarker *_searchResultMarker;	// 8 = 0x8
    NSNumber *_fetchLimit;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000002de5
- (void).cxx_destruct;	// IMP=0x0000000000002f9d
@property(copy, nonatomic) NSNumber *fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(retain, nonatomic) SPSearchResultMarker *searchResultMarker; // @synthesize searchResultMarker=_searchResultMarker;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000002ebb
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000002ded

@end
