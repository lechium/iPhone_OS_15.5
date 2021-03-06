//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class PKServicePersonality;

@interface PKServiceDefaults : NSUserDefaults
{
    PKServicePersonality *_personality;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000001be10
@property __weak PKServicePersonality *personality; // @synthesize personality=_personality;
- (_Bool)synchronize;	// IMP=0x000000000001bd7c
- (void)setObject:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000001bcd5
- (id)objectForKey:(id)arg1;	// IMP=0x000000000001bc3e
- (id)initWithPersonality:(id)arg1;	// IMP=0x000000000001bbd6

@end

