//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface ETColorStore : NSObject
{
    NSMutableArray *_colors;	// 8 = 0x8
    unsigned long long _selectedColorIndex;	// 16 = 0x10
    _Bool _selectedIndexLoaded;	// 24 = 0x18
}

+ (id)defaultStore;	// IMP=0x000000000001e433
- (void).cxx_destruct;	// IMP=0x000000000001ec56
@property(nonatomic) unsigned long long selectedColorIndex;
- (void)saveColor:(id)arg1 forIndex:(unsigned long long)arg2;	// IMP=0x000000000001e88c
- (id)_colors;	// IMP=0x000000000001e601
@property(readonly, nonatomic) NSArray *colors;
- (void)defaultsChanged:(id)arg1;	// IMP=0x000000000001e5c9
- (void)addDefaultsObserver;	// IMP=0x000000000001e562
- (id)init;	// IMP=0x000000000001e516
- (void)dealloc;	// IMP=0x000000000001e488

@end

