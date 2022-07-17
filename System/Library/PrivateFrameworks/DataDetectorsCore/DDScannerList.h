//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface DDScannerList : NSObject
{
    _Bool _spotlightSuggestionsEnabled;	// 8 = 0x8
    int _type;	// 12 = 0xc
    NSString *_hash;	// 16 = 0x10
    NSMutableArray *_waitQueue;	// 24 = 0x18
    NSMutableArray *_scannerCache;	// 32 = 0x20
    NSMutableArray *_activeScanners;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000002e79
- (unsigned long long)busyCount;	// IMP=0x0000000000002e63
- (unsigned long long)totalCount;	// IMP=0x0000000000002e24
- (id)dequeueJob;	// IMP=0x0000000000002ddc
- (void)enqueueJob:(CDUnknownBlockType)arg1 withIdentifier:(long long)arg2;	// IMP=0x0000000000002d2f
- (void)pushBackScanner:(id)arg1;	// IMP=0x0000000000002bcb
- (id)scannerCreate;	// IMP=0x0000000000002b70
- (_Bool)cancelJob:(long long)arg1;	// IMP=0x0000000000002910
- (void)activateScanner:(id)arg1;	// IMP=0x000000000000289c
- (id)getCachedScanner;	// IMP=0x000000000000281c
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000002779

@end
