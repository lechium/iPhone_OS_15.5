//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@interface NSArray (MRAVAdditions)
- (id)mr_arrayByRemovingLocalEndpoint;	// IMP=0x000000000015e8be
- (_Bool)mr_isEqualToOutputDevicesArray:(id)arg1;	// IMP=0x000000000015e784
- (int)mr_ifDisabledWhyDisabled:(unsigned int)arg1;	// IMP=0x00000000001695b2
- (_Bool)mr_isCommandSupportedAndEnabled:(unsigned int)arg1;	// IMP=0x000000000016950f
- (_Bool)mr_isCommandSupported:(unsigned int)arg1;	// IMP=0x0000000000169498
- (id)changeDescriptionTo:(id)arg1 keyBlock:(CDUnknownBlockType)arg2 isUpdatedBlock:(CDUnknownBlockType)arg3 descriptionBlock:(CDUnknownBlockType)arg4;	// IMP=0x000000000020df7c
- (id)mr_compactMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000020ddba
- (id)mr_flatMap:(CDUnknownBlockType)arg1;	// IMP=0x000000000020dc18
- (id)mr_map:(CDUnknownBlockType)arg1;	// IMP=0x000000000020da16
- (id)mr_filter:(CDUnknownBlockType)arg1;	// IMP=0x000000000020d869
- (_Bool)mr_containsAnyOf:(id)arg1;	// IMP=0x000000000020d716
- (id)mr_first:(CDUnknownBlockType)arg1;	// IMP=0x000000000020d5c0
- (_Bool)mr_all:(CDUnknownBlockType)arg1;	// IMP=0x000000000020d487
- (_Bool)mr_any:(CDUnknownBlockType)arg1;	// IMP=0x000000000020d34d
@end

