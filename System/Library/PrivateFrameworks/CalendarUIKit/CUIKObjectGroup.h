//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CalDefaultDictionary, NSDictionary, NSMutableDictionary;

@interface CUIKObjectGroup : NSObject
{
    NSDictionary *_originalObjectMap;	// 8 = 0x8
    NSMutableDictionary *_objectMap;	// 16 = 0x10
    CalDefaultDictionary *_spawnedObjectIdentifiers;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000023e5
@property(retain) CalDefaultDictionary *spawnedObjectIdentifiers; // @synthesize spawnedObjectIdentifiers=_spawnedObjectIdentifiers;
@property(retain) NSMutableDictionary *objectMap; // @synthesize objectMap=_objectMap;
@property(retain) NSDictionary *originalObjectMap; // @synthesize originalObjectMap=_originalObjectMap;

@end
