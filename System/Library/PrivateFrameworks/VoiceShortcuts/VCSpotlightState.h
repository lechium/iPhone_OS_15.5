//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface VCSpotlightState : NSObject
{
    unsigned long long _identifier;	// 8 = 0x8
    NSDictionary *_syncedShortcuts;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000059eed
@property(readonly, nonatomic) NSDictionary *syncedShortcuts; // @synthesize syncedShortcuts=_syncedShortcuts;
@property(readonly, nonatomic) unsigned long long identifier; // @synthesize identifier=_identifier;
- (_Bool)saveToPath:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000059d6f
- (_Bool)isConsistentWithClientState:(unsigned long long)arg1;	// IMP=0x0000000000059d4c
- (id)initWithPath:(id)arg1;	// IMP=0x0000000000059963
- (id)initWithIdentifier:(unsigned long long)arg1 syncedShortcuts:(id)arg2;	// IMP=0x00000000000598d2

@end
