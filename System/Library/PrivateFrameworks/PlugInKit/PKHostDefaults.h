//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class PKHostPlugIn;

@interface PKHostDefaults : NSUserDefaults
{
    PKHostPlugIn *_plugin;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001bbc5
@property __weak PKHostPlugIn *plugin; // @synthesize plugin=_plugin;
- (void)registerDefaults:(id)arg1;	// IMP=0x000000000001bb92
- (_Bool)synchronize;	// IMP=0x000000000001bb8a
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001ba89
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001b8c7
- (id)initWithPlugIn:(id)arg1;	// IMP=0x000000000001b85f

@end

