//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSArray, NSError, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding>
{
    NSError *_error;	// 8 = 0x8
    NSArray *_fileURLs;	// 16 = 0x10
    SPSearchResultMarker *_searchResultMarker;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000052aa
- (void).cxx_destruct;	// IMP=0x00000000000055a7
@property(retain, nonatomic) SPSearchResultMarker *searchResultMarker; // @synthesize searchResultMarker=_searchResultMarker;
@property(copy, nonatomic) NSArray *fileURLs; // @synthesize fileURLs=_fileURLs;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000005477
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000052b2
- (id)initWithFileURLs:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;	// IMP=0x00000000000051e3

@end

