//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _VNWeakSessionsCollection : NSObject
{
    NSMutableArray *_weakSessionWrappers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000901fc
- (id)description;	// IMP=0x0000000000090176
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000009010d
- (unsigned long long)hash;	// IMP=0x00000000000900f7
- (id)allSessionsDroppingWeakZeroedObjects:(_Bool)arg1;	// IMP=0x000000000009006d
- (void)addSession:(id)arg1 droppingWeakZeroedObjects:(_Bool)arg2;	// IMP=0x000000000008ff47
- (id)init;	// IMP=0x000000000008fef1

@end

