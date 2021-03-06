//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NPSManager, NSArray, NSUserDefaults;

__attribute__((visibility("hidden")))
@interface WatchSyncedPreferences : NSObject
{
    NPSManager *_manager;	// 8 = 0x8
    NSUserDefaults *_defaults;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000003ff21
@property(readonly, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
- (void)synchronize;	// IMP=0x001000000003fcfc
- (void)loadValuesFromDefaults;	// IMP=0x001000000003fcf6
- (id)description;	// IMP=0x001000000003fb85
- (unsigned long long)hash;	// IMP=0x001000000003faf8
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000003f781
- (void)_forEachKeyAndValueWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x001000000003f60a
@property(readonly, nonatomic) NSArray *_values;
@property(readonly, nonatomic) NSArray *_keys;
- (id)initWithDefaults:(id)arg1;	// IMP=0x001000000003f565

@end

