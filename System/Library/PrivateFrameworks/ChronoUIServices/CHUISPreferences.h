//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface CHUISPreferences : NSObject
{
    NSUserDefaults *_defaults;	// 8 = 0x8
    _Bool _debugViewLabels;	// 16 = 0x10
    _Bool _debugSnapshotViewColoring;	// 17 = 0x11
    _Bool _debugPrefersStaticSnapshots;	// 18 = 0x12
}

+ (id)sharedInstance;	// IMP=0x000000000000480e
- (void).cxx_destruct;	// IMP=0x0000000000004969
@property(readonly, nonatomic) _Bool debugPrefersStaticSnapshots; // @synthesize debugPrefersStaticSnapshots=_debugPrefersStaticSnapshots;
@property(readonly, nonatomic) _Bool debugSnapshotViewColoring; // @synthesize debugSnapshotViewColoring=_debugSnapshotViewColoring;
@property(readonly, nonatomic) _Bool debugViewLabels; // @synthesize debugViewLabels=_debugViewLabels;
- (id)init;	// IMP=0x0000000000004863

@end

