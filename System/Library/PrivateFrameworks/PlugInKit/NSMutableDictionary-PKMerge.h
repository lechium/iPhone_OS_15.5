//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (PKMerge)
- (id)_createOrConvertToMutableDictionaryFromDictionary:(id)arg1;	// IMP=0x0000000000010288
- (id)_mutableDictionaryAtKeyPath:(id)arg1;	// IMP=0x0000000000010092
- (void)_overlayCustomValueAtKeyPath:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 handler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000ff33
- (void)_overlayValueAtKey:(id)arg1 intoTargetDictionary:(id)arg2 fromSourceDictionary:(id)arg3 targetTakePrecedent:(_Bool)arg4 nestedDictionaryHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000000fe30
- (void)pk_removeItemsAtKeyPaths:(id)arg1;	// IMP=0x000000000000fc30
- (void)pk_overlayDictionary:(id)arg1 existingValuesTakePrecedent:(_Bool)arg2 exceptKeyPaths:(id)arg3 exemptionHandler:(CDUnknownBlockType)arg4;	// IMP=0x000000000000f77a
@end

