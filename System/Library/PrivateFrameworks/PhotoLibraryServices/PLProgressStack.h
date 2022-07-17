//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface PLProgressStack : NSObject
{
    _Bool notifyUsingAssetsdNotificationCenter;	// 8 = 0x8
    float currentMultiplier;	// 12 = 0xc
    float currentTotal;	// 16 = 0x10
    id delegate;	// 24 = 0x18
    NSMutableArray *multipliers;	// 32 = 0x20
    NSString *mediaPathString;	// 40 = 0x28
}

+ (id)unarchiveFromDictionary:(id)arg1;	// IMP=0x000000000008ed1e
- (void).cxx_destruct;	// IMP=0x000000000008eced
@property(retain, nonatomic) NSString *mediaPathString; // @synthesize mediaPathString;
@property(nonatomic) _Bool notifyUsingAssetsdNotificationCenter; // @synthesize notifyUsingAssetsdNotificationCenter;
@property(nonatomic) float currentTotal; // @synthesize currentTotal;
@property(retain, nonatomic) NSMutableArray *multipliers; // @synthesize multipliers;
@property(nonatomic) float currentMultiplier; // @synthesize currentMultiplier;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (id)archiveToDictionary;	// IMP=0x000000000008eb32
- (void)setCurrentMediaPath:(id)arg1;	// IMP=0x000000000008eae3
- (void)popAndUpdate;	// IMP=0x000000000008eab2
- (void)updateProgress:(float)arg1;	// IMP=0x000000000008e8ff
- (float)totalProgress:(float)arg1;	// IMP=0x000000000008e8b6
- (void)pop;	// IMP=0x000000000008e7c4
- (void)push:(float)arg1;	// IMP=0x000000000008e746
- (id)initWithDelegate:(id)arg1;	// IMP=0x000000000008e695

@end
