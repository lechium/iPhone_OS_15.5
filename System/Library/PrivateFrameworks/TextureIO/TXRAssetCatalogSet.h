//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface TXRAssetCatalogSet : NSObject
{
    unsigned long long _interpretation;	// 8 = 0x8
    unsigned long long _origin;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    _Bool _cubemap;	// 32 = 0x20
    NSMutableArray *_configs;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000000c6648
@property(readonly, nonatomic) _Bool cubemap; // @synthesize cubemap=_cubemap;
@property(readonly) NSArray *configs; // @synthesize configs=_configs;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned long long origin; // @synthesize origin=_origin;
@property(nonatomic) unsigned long long interpretation; // @synthesize interpretation=_interpretation;
- (_Bool)addConfig:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c64a2
- (id)exportAtLocation:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000c6480
- (id)initWithName:(id)arg1;	// IMP=0x00000000000c6421
- (id)init;	// IMP=0x00000000000c63ad

@end
