//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

@interface NSDictionary (HomeLocation)
+ (id)dictionaryByCombiningNonOverlappingDictionaries:(id)arg1;	// IMP=0x000000000042ee8a
+ (id)hmd_dictionaryWithActionExecutionError:(id)arg1;	// IMP=0x000000000096350f
- (id)hm_regionFromDataForKey:(id)arg1;	// IMP=0x00000000003be969
- (id)hm_locationFromDataForKey:(id)arg1;	// IMP=0x00000000003be7dc
- (id)hmd_responseByRemovingEntriesForCharacteristics:(id)arg1;	// IMP=0x000000000083b1e0
- (id)hmd_valueOfCharacteristic:(id)arg1 error:(id *)arg2;	// IMP=0x000000000083ab57
- (_Bool)hmd_isValidResponseForWriteRequest:(id)arg1 naturalLightingEnabled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x000000000083a2cc
@end
