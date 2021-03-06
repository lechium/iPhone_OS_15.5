//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSSet;

__attribute__((visibility("hidden")))
@interface VUIMediaCategory : NSObject
{
    unsigned long long _type;	// 8 = 0x8
    NSSet *_supportedMediaCollectionTypes;	// 16 = 0x10
    NSDictionary *_supportedChildMediaCollectionTypes;	// 24 = 0x18
}

+ (id)mediaCatgeoryForType:(unsigned long long)arg1;	// IMP=0x00000000000d32d8
- (void).cxx_destruct;	// IMP=0x00000000000d3a92
@property(copy, nonatomic) NSDictionary *supportedChildMediaCollectionTypes; // @synthesize supportedChildMediaCollectionTypes=_supportedChildMediaCollectionTypes;
@property(copy, nonatomic) NSSet *supportedMediaCollectionTypes; // @synthesize supportedMediaCollectionTypes=_supportedMediaCollectionTypes;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x00000000000d36aa
- (id)_initWithType:(unsigned long long)arg1;	// IMP=0x00000000000d3623
- (id)init;	// IMP=0x00000000000d35b4

@end

