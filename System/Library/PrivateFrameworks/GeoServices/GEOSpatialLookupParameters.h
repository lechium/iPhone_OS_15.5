//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface GEOSpatialLookupParameters : NSObject
{
    CDStruct_2c43369c _coordinate;	// 8 = 0x8
    double _radius;	// 24 = 0x18
    NSArray *_categories;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000071b864
@property(readonly, nonatomic) NSArray *categories; // @synthesize categories=_categories;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate=_coordinate;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 radius:(double)arg2 categories:(id)arg3;	// IMP=0x000000000071b788

@end

