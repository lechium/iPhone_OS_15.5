//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSString;

@interface SHRegion : NSObject
{
    NSString *_geohash;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000002328
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, copy, nonatomic) NSString *geohash; // @synthesize geohash=_geohash;
- (id)initWithLocation:(id)arg1;	// IMP=0x00000000000022a9
- (id)initWithGeohash:(id)arg1;	// IMP=0x000000000000223e

@end
